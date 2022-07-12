#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    //enum tipo de datos estado (estado inicial y estado de aceptacion)
    enum TEstado {q0,q1};
    //variable estados
    TEstado estado;

    int Simbolo1;
    int i =0;
    bool esNumero;

    ifstream file;
    file.open("data.txt", ios::in);//abre el ar
    int cantCadenaNumero = 0;
    string cadenaNumero;

    if(file.fail()){
        cout<<"Error al abrir archivo";
    }

    while(!file.eof()){
        getline(file, cadenaNumero);
        cout<<"Texto encontrado: "<<cadenaNumero;
    }
    file.close();
    int longCadenaNumero = cadenaNumero.size();
    cout<<"Cadena numero: "<<cadenaNumero.size()<<endl;
    cout<<"Valor cadena: "<<cadenaNumero;
    while(longCadenaNumero > i)
    {
        Simbolo1=cadenaNumero[i];
        esNumero = (Simbolo1 >= '0' && Simbolo1 <= '9');
        if(estado == q0)
        {
            if(esNumero == true)
            {
                estado =q1;
                cantCadenaNumero++;
            }
        }
        if(estado == q1)
        {
            if(esNumero == true)
            {
                estado=q1;
                cantCadenaNumero++;
            }
        }
        if(!esNumero)
        {
            estado = q0;
            cantCadenaNumero++;
            break;
        }
        //avance al siguiente caracter
        i++;
        cantCadenaNumero++;
    }
    /*

        //enum tipo de datos estado (estado inicial y estado de aceptacion)
    enum TEstado {q0,q1};
    //variable estados
    TEstado Estado;

    //variables en general
    string Cadena;//cadena que se validara
    int Simbolo;//caracter a validar con la tabla ASCII
    bool EsNumero;

    int i;//pos del caracter leido en la cadena que se validara
    int longitud;//longitud total de la cadena

    //valores iniciales
    i = longitud = 0;
    Estado = q0;
    EsNumero = false;

    cout<<"Digite una cadena de numeros: ";
    cin>>Cadena;

    longitud = Cadena.size();

    while(longitud > i)
    {
        Simbolo=Cadena[i];
        EsNumero = (Simbolo >= '0' && Simbolo <= '9');
        if(Estado == q0)
        {
            if(EsNumero == true)
            {
                Estado =q1;
            }
        }
        if(Estado == q1)
        {
            if(EsNumero == true)
            {
                Estado=q1;
            }
        }
        if(!EsNumero)
        {
            Estado = q0;
            break;
        }
        //avance al siguiente caracter
        i++;
    }
    */
/*(
    if(estado == q1)
    {
        cout<<"Cadena aceptada"<<endl;
    }
    else
    {
        cout<<"Cadena no aceptada"<<endl;
    }
    */

    cout<<"Numeros encontrados: "<<cantCadenaNumero<<endl;

    return 0;
}
