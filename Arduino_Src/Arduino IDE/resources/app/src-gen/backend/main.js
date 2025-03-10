// @ts-check
const { BackendApplicationConfigProvider } = require('@theia/core/lib/node/backend-application-config-provider');
const main = require('@theia/core/lib/node/main');

BackendApplicationConfigProvider.set({
    "singleInstance": true,
    "configDirName": ".arduinoIDE"
});

const serverModule = require('./server');
const serverAddress = main.start(serverModule());

serverAddress.then(({ port, address, family }) => {
    if (process && process.send) {
        process.send({ port, address, family });
    }
});

globalThis.serverAddress = serverAddress;
