#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

string linea; //almacenará texto
string texto;

int main(){

ifstream archivo("nombres.txt"); //conexion con mi documento

while (getline(archivo, linea)){
texto=texto+linea+"\n";
}
archivo.close();
cout << texto << endl;
system("pause");
} 