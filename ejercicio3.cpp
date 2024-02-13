#include <iostream>
using namespace std;

class Carro
 {
private:
    int velocidad;

public:
    string marca;
    string modelo;
    int anio;
    string color;

    
    Carro()
     {
        marca = "desconocido";
        modelo = "desconocido";
        anio = 0;
        color = "desconocido";
        velocidad = 0;
    }

   
    Carro(string marc, string mod, int ani, string col)
     {
        marca = marc;
        modelo = mod;
        anio = ani;
        color = col;
        velocidad = 0;
    }

   
    void mostrarVelocidad() 
    {
        cout << "La velocidad final es de  " << velocidad << " km/h" << endl;
    }

    void setVelocidad(int vel)
     {
        velocidad = vel;
    }

    void acelerar(int acc)
     {
        velocidad += acc;
    }

   
    int getVelocidad() 
    {
        return velocidad;
    }
};

int main()
 {
   
    Carro carro1;
    carro1.setVelocidad(5); 
    carro1.marca = "audi";
    carro1.modelo = "michel";
    carro1.anio = 2020;
    carro1.color = "black";

   
    Carro carro2("mazda", "classic", 2022, "rojo");

    
    while (carro1.getVelocidad() < 100)
     {
        carro1.acelerar(5);
    }

    while (carro2.getVelocidad() < 100)
     {
        carro2.acelerar(5);
    }

   
    cout << "AUDI" << endl;
    carro1.mostrarVelocidad();

    cout << "MAZDA" << endl;
     carro2.mostrarVelocidad();

    return 0;
}