#ifndef cintametrica_h
#define cintametrica_h
#include "arduino.h"

class Ultrasonido {
    private:
        long distancia;
    public:
        byte pinEcho;
        byte pinTrigger;
    Ultrasonido(byte _pinTrigger, byte _pinEcho);
    Ultrasonido();

    int medirCM();
};

class Display7 {
    private:
        byte matrix[10][7] = {
            //A, B, C, D, E, F, G
            {1, 1, 1, 1, 1, 1, 0}, //0
            {0, 1, 1, 0, 0, 0, 0}, //1
            {1, 1, 0, 1, 1, 0, 1}, //2
            {1, 1, 1, 1, 0, 0, 1}, //3
            {0, 1, 1, 0, 0, 1, 1}, //4
            {1, 0, 1, 1, 0, 1, 1}, //5
            {1, 0, 1, 1, 1, 1, 1}, //6
            {1, 1, 1, 0, 0, 0, 0}, //7
            {1, 1, 1, 1, 1, 1, 1}, //8
            {1, 1, 1, 0, 0, 1, 1}  //9
        };
    public:
        byte pines[7];
    void configurar(byte[]);
    void mostrar(byte num);
};

#endif