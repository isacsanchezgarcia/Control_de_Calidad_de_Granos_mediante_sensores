#ifndef SENSOR_H
#define SENSOR_H

namespace SensorPackage {

    class Sensor{
    protected:
        int pin;

    public:
        Sensor(int pinElegido) : pin(pinElegido){}

        virtual float enviarMedicion() = 0;
    };

}

#endif
