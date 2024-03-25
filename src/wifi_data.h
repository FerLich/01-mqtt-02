#ifndef __WIFI_DATA_H__
#define __WIFI_DATA_H__

/*
 *  Project 01-mqtt_02 - Austral - EAM
 *
 *  wifi_data.h
 *      Data configuration for WiFi connection
 */

#if (WIFI==0)                   //  Home settings
    #define MY_SSID "edumel2.4"
    #define MY_PASS "geheim1943"
#elif (WIFI==1)                 //  University settings
    #define MY_SSID "UA-Alumnos"
    #define MY_PASS "41umn05WLC"
#elif (WIFI==2)                 //  Other place settings
    #define MY_SSID "Afinador2.4"
    #define MY_PASS "Eugenio10."
#else
    #error  "WIFI symbol out of range"
#endif

//  wifi_data.h ends
#endif


