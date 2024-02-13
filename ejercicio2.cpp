#include <iostream>
#include <vector>
using namespace std;

class Persona 
{
    private:
    int edad;
    float estatura;
    float peso;

    public:
    string nombre;
    int telefono;

    Persona()
    {
        edad = 0;
        estatura = 0;
        peso = 0;
        nombre = "desconocido";
        telefono = 0;
    }

    Persona(int ed, float est, float pes, string nom, int tel)
    {
        edad = ed;
        estatura = est;
        peso = pes;
        nombre = nom;
        telefono = tel;
    }

    int getEdad()
    {
        return edad;
    }

    void setEdad(int ed)
    {
        edad = ed;
    }

    float getEstatura()
    {
        return estatura;
    }

    void setEstatura(float est)
    {
        estatura = est;
    }

    float getPeso()
    {
        return peso;
    }

    void setPeso(float pes)
    {
        peso = pes;
    }

    void cumplirAnios()
    {
       edad++;
       
       if (edad < 21)
       {
        estatura *= 1.03;
       }

        if (edad > 30)
       {
        peso *= 1.03;
       }
    }

    void presentarse()
    {
        cout << "Hola, mi nombre es " << nombre << ". Tengo " << edad << " años, mi estatura es de " << estatura << " m y peso " << peso << " kg. Mi celular es " << telefono << "." << endl; 
    }
};

int main ()
{ 
    Persona persona1;
    persona1.setEdad(20);
    persona1.setEstatura(1.67);
    persona1.setPeso(70);
    persona1.nombre = "alfredo";
    persona1.telefono = 3311206530;

    Persona persona2 = Persona(30, 1.72, 80, "julian", 33225544);

    vector<Persona> personas;
    personas.push_back(persona1);
    personas.push_back(persona2);

    

    for (int i = 0; i < personas.size(); i++)
    {
        personas[i].presentarse();
        personas[i].cumplirAnios();
    }

    for (int i = 0; i < personas.size(); i++)
    {
        personas[i].presentarse();
    }

    return 0;
}

