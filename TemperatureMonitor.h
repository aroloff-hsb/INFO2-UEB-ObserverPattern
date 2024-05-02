#ifndef TEMPERATUREMONITOR_H
#define TEMPERATUREMONITOR_H

#include <iostream>
#include "TemperatureSensor.h"
#include "ITemperatureObserver.h"
#include <thread> // für std::this_thread und std::chrono

// Klasse für den Temperaturmonitor (Subject)
class TemperatureMonitor
{
private:
    TemperatureSensor sensor;

public:
    /**
     * Registriert einen neuen Temperaturbeobachten am Monitor
     *
     * Syntax: registerObserver(ITemperatureObserver *observer)
     *
     * Eingänge:
     *   *observer - Pointer auf einen Temperaturbeobachter, welcher das Interface ITemperatureObserver implementiert
     *
     */
    void registerObserver(ITemperatureObserver *observer)
    {
        // todo
    }

    /**
     * Meldet den übergebenen Temperaturbeobachten vom Monitor ab
     *
     * Syntax: removeObserver(ITemperatureObserver *observer)
     *
     * Eingänge:
     *   *observer - Pointer auf einen Temperaturbeobachter, welcher das Interface ITemperatureObserver implementiert
     *
     */
    void removeObserver(ITemperatureObserver *observer)
    {
        // todo
    }

    /**
     * Informiert alle angemeldeten Beobachter über eine neuen Temperaturwert
     *
     * Syntax: notifyObservers(double temperature)
     *
     * Eingänge:
     *   temperature - Neuer Temperaturwert
     *
     */
    void notifyObservers(double temperature)
    {
        // todo
    }

    /**
     * Implementiert die Temperaturüberwachung in einer Endlosschleife. Abgefragt wird
     * hierfür sekündlich ein Sensor vom Typ TemperatureSensor mithilfe seiner getTemperature()-Methode.
     *
     * Syntax: monitorTemperature()
     *
     */
    void monitorTemperature()
    {
        while (true)
        {
            // todo

            // 1 Sekunde Pause
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
};
#endif