#include "MyString.h"

int main()
{
    // MyString ms1 = MyString();
    // MyString ms2 = MyString("Lee");
    // MyString ms3 = ms2;
    // MyString m4 = "Dearfoam";

    MyString casey    = MyString("Casey");
    MyString caseyBoy = MyString("Casey Boy");

    casey = casey;
    casey = caseyBoy;

    return 0;
}
