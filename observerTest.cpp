/*
 * observerTest.cpp
 *
 * Testet die Implementierung eines TemperatureMonitor mit registriertem DisplayObserver
 * und AlarmObserver
 *
 * Autor: A. Roloff (alexander.roloff@hs-bremen.de)
 * Datum: 13.03.2024
 * Version: 1.0
 *
 * Änderungsprotokoll:
 *   - Version 1.0 (13.03.2024): Erste Veröffentlichung
 */

#include "TemperatureMonitor.h"
#include "DisplayObserver.h"
#include "AlarmObserver.h"

// Hauptfunktion
int main()
{
    // Erstelle einen Temperaturmonitor
    TemperatureMonitor monitor;

    // Erstelle Beobachter und registriere sie beim Temperaturmonitor
    DisplayObserver displayObserver;
    monitor.registerObserver(&displayObserver);

    AlarmObserver alarmObserver(30); // Schwellenwert für den Alarm: 30°C
    monitor.registerObserver(&alarmObserver);

    // Starte die Temperaturüberwachung
    monitor.monitorTemperature();

    return 0;
}