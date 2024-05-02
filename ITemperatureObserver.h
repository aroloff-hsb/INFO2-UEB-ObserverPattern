#ifndef ITEMPERATUREOBSERVER_H
#define ITEMPERATUREOBSERVER_H

/*
 * ITemperaturObserver.h
 *
 * Interface-Deklaration für einen TemperatureObserver
 *
 * Autor: A. Roloff (alexander.roloff@hs-bremen.de)
 * Datum: 13.04.2024
 * Version: 1.0
 *
 * Änderungsprotokoll:
 *   - Version 1.0 (13.04.2024): Erste Veröffentlichung
 */

class ITemperatureObserver
{
public:
    virtual void update(double temperature) = 0;
};
#endif