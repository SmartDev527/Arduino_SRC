#pragma once

#include <sdkconfig.h>

#define INET_CONFIG_TEST 0

#ifdef CONFIG_DISABLE_IPV4
#define INET_CONFIG_ENABLE_IPV4 0
#else
#define INET_CONFIG_ENABLE_IPV4 1
#endif

#define INET_CONFIG_ENABLE_TCP_ENDPOINT 1
#define INET_CONFIG_ENABLE_UDP_ENDPOINT 1
#define HAVE_LWIP_RAW_BIND_NETIF 1

#ifndef CONFIG_CHIP_ENABLE_EXTERNAL_PLATFORM
#define INET_PLATFORM_CONFIG_INCLUDE <platform/ESP32/InetPlatformConfig.h>
#endif

#define INET_TCP_END_POINT_IMPL_CONFIG_FILE <inet/TCPEndPointImplLwIP.h>
#define INET_UDP_END_POINT_IMPL_CONFIG_FILE <inet/UDPEndPointImplLwIP.h>
