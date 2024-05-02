#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

/*
 * TemperatureSensor.h
 *
 * Implementiert einen Dummy-Temperatursensor, welcher Zufallswerte erzeugt
 *
 * Autor: A. Roloff (alexander.roloff@hs-bremen.de)
 * Datum: 13.04.2024
 * Version: 1.0
 *
 * Änderungsprotokoll:
 *   - Version 1.0 (13.04.2024): Erste Veröffentlichung
 */

#include <ctime>
#include <cstdlib>

class TemperatureSensor
{
public:
    /**
     * Erzeugt eine neue Instanz der TemperaturSensor-Klasse
     *
     * Syntax: TemperatureSensor()
     *
     */
    TemperatureSensor()
    {
        // Initialisiere den Zufallszahlengenerator
        srand(time(nullptr));
    }

    /**
     * Gibt einen zufälligen Temperaturwert zwischen -10°C und 50°C zurück
     *
     * Syntax: getTemperature()
     *
     * Rückgabe:
     *   Zufällige Temperatur in °C als double
     *
     */
    double getTemperature()
    {
        return -10 + (rand() % 601) / 10.0;
    }
};
#endif