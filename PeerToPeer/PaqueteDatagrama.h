#ifndef __PaqueteDatagrama__
#define __PaqueteDatagrama__

#include <iostream>
#include <cstring>

using namespace std;

class PaqueteDatagrama {
    
public:
    PaqueteDatagrama(char *, unsigned int, char *, int );
    PaqueteDatagrama(unsigned int );
    ~PaqueteDatagrama();
    char *obtieneDireccion();
    unsigned int obtieneLongitud();
    int obtienePuerto();
    char *obtieneDatos();
    void inicializaPuerto(int);
    void inicializaIp(char *);
    void inicializaDatos(char *);
    
private:
    char *datos;
    char ip[16];
    unsigned int longitud;
    int puerto;
};
#endif /* defined(______PaqueteDatagrama__) */
