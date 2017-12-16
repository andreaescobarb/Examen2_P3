#include <iostream>
#include <string>
#include <sstream>
#include "ArrayStack.h"
#include "Files.h"


using namespace std;
int menu();
void write(string, string);
void writeFirst(string);
string read();

int main(int argc, char const *argv[]) {
  bool salir=true;
  string filename;
  string edit;
  stringstream edtxt;
  while (salir) {
    switch (menu()) {
      case 1:{
        cout<<"Ingrese nombre del archivo que desea crear (sin el .txt)"<<endl;
        cin>>filename;

        break;
      }
      case 2:{
        int cont=0;
        int op;
        string text;
        string original;
        char resp='s';
        cout<<"Ingrese el nombre del archivo que desea editar (sin el .txt)"<<endl;
        cin>>edit;
        edtxt.str("");
        edtxt<<edit<<".txt";
        Files* file = new Files(edtxt.str(), "");
        //text=read(edtxt);
        while (cont<6&&(resp=='s'||resp=='S')) {
          cout<<"     MENU DE EDICION"<<endl<<"_______________________________"<<endl<<"1- Ingresar/Concatenar"<<"2- Reescribir"<<endl;
          cin>>op;
          switch (op) {
            case 1:{
              ArrayStack* stack = new ArrayStack(5);
              cout<<"Ingrese el texto que desea concatenar"<<endl;
              cin>>text;
              stack->push(text);
              break;
            }
            case 2:{
              cout<<"Ingrese el texto que desea escribir"<<endl;
              break;
            }
          }
        }
        break;
      }
      case 3:{
        cout<<"Por favor tene compasion de mi :'( *crying face*"<<endl;
        salir= false;
        break;
      }
    }
  }
  return 0;
}

int menu(){
  cout<<"           MENU PRINCIPAL"<<endl<<"___________________________________"<<endl<<"1- Crear archivo en directorio"<<endl<<"2- Editar archivo ya existente"<<endl<<"3- Salir de programa";
  int opc;
  cin>>opc;
  while (opc<0||opc>2) {
    cout<<"Lo siento, opcion inexistente intente de nuevo"<<endl;
    cin>>opc;
  }
  return opc;
}

void write(string filename, string text){
    /*stringstream file;
    file<<filename<<".txt";
    string file1=file.str();*/
    ofstream archivo(filename.c_str());
    if (archivo.is_open()) {
      archivo<<text;
      archivo.close();
    }

}

void writeFirst(string filename){
  ofstream archivo(filename.c_str());
  if (archivo.is_open()) {
    archivo<<"";
    archivo.close();
  }
}

/*string read(string filename){
  ifstream ficheroEntrada;
  string frase;

  ficheroEntrada.open (filename.crst());
  getline(ficheroEntrada, frase);
  ficheroEntrada.close();
  return frase;
}*/
