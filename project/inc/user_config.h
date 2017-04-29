#ifndef _user_config_h_
#define _user_config_h_

#define SYS_VERSION "1.0.0"
#define SDK_VERSION "3.5.3"

#define USE_WEB		80 	// включить в трансялцию порт Web, если =0 - по умолчанию выключен
#define WEBSOCKET_ENA 1 // включить WEBSOCKET
#define USE_SNTP	1 	// включить в трансялцию драйвер SNTP, если =0 - по умолчанию выключен, = 1 - по умолчанию включен.
#define USE_NETBIOS	1 	// включить в трансялцию драйвер NETBIOS, если =0 - по умолчанию выключен.

#define WEB_DEBUG_FUNCTIONS 1 // =1 - включить в WEB отладочные функции, =0 отключить (остается только конфигурация WiFi)

#endif // _user_config_h_

