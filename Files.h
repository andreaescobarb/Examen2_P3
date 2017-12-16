#ifndef FILES_H
#define FILES_H

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
class Files{
  private:
    string filename;
    string text;
  public:
    Files();
    Files(string, string);

    void setFilename(string);
    string getFilename();

    void setText(string);
    string getText();

    /**void write(string, string);
    void read(string);*/
    /*friend ostream& operator<<(ostream&, string);
    friend istream& operator>>(istream&, string);*/
};
#endif
