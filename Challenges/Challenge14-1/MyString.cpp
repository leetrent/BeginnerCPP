#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

MyString::MyString() : str{nullptr}
{
    this->init();

    cout << "--------------------------------------------------"    << endl;
    cout << "Empty constructor"                                     << endl;
    cout << "(*this->str): '" << *this->str << "'"                  << endl;
    cout << "--------------------------------------------------"    << endl;
}

MyString::MyString(const char *s) : str{nullptr}
{
  if (s==nullptr)
  {
    this->init();
  }
  else
  {
    this->str = new char[strlen(s) + 1];
    strcpy(this->str, s);
  }
  cout << "--------------------------------------------------"    << endl;
  cout << "One-arg constructor"                                     << endl;
  cout << "(*this->str): '" << this->str << "'"                  << endl;
  cout << "--------------------------------------------------"    << endl;
}

void MyString::init()
{
  this->str = new char[1];
  *this->str = '\0';
}
