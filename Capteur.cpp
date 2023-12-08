#include "Capteur.hpp"

Capteur::Capteur(PinName sda, PinName scl) : sensor(sda, scl) {
}

Capteur::~Capteur() {
}

void Capteur::init() {
    sensor.stop_periodic_measurement();
    ThisThread::sleep_for(500ms);
}

void Capteur::stopPeriodicMeasurement() {
    sensor.stop_periodic_measurement();
}

void Capteur::startPeriodicMeasurement() {
    sensor.start_periodic_measurement();
}


void Capteur::display_value()
{
    printf("CO2: %dppm, Temp: %f°C, RH: %f%%\n", meas->co2, meas->temperature, meas->rh);
}

void Capteur::readMeasurement() {
    sensor.read_measurement(meas);
    display_value();
}
