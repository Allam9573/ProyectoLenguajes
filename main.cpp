#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream Datos("data.txt");
    if(Datos.is_open()){
        Datos << "Datos: ";
    }
    return 0;
}
