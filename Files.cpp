#include "Files.h"
#include "ArrayStack.h"
#include <fstream>
#include <cstdlib>

Files::Files(){

}

Files::Files(string filename, string text){
  this->filename=filename;
  this->text=text;
}

void Files::setFilename(string filename){
  this->filename=filename;
}

string Files::getFilename(){
  return filename;
}

void Files::setText(string text){
  this->text=text;
}

string Files::getText(){
  return text;
}
/*void Files::read(string in){


}

void Files::write(string filename, string text){
    /*stringstream file;
    file<<filename<<".txt";
    string file1=file.str();*/
    /*ofstream archivo(filename.c_str());
    if (archivo.is_open()) {
      archivo<<text;
      archivo.close();
    }

}*/

/*ostream& operator<<(ostream& out, string file){

   out<<file;
   return out;

}*/
