/*
 * Copyright (C) 2015-2019 Alibaba Group Holding Limited
 */

#ifndef HTTP_DEF_CONFIG_H
#define HTTP_DEF_CONFIG_H

#include "http_config.h"

#ifndef CONFIG_HTTPC_SESSION_NUM
#define CONFIG_HTTPC_SESSION_NUM 1
#endif

#ifndef CONFIG_HTTPC_SERVER_NAME_SIZE
#define CONFIG_HTTPC_SERVER_NAME_SIZE 64
#endif

#ifndef CONFIG_HTTPC_DEFAULT_CLIENT
#define CONFIG_HTTPC_DEFAULT_CLIENT "AliOS-HTTP-Client/2.1"
#endif

#ifndef CONFIG_HTTP_STATUS_SIZE
#define CONFIG_HTTP_STATUS_SIZE 32
#endif

#ifndef CONFIG_HTTP_SECURE
#define CONFIG_HTTP_SECURE 0
#endif

#define CONFIG_HTTP_DEBUG

#endif