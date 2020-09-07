#include "Students.h"
#include "FileHandlingException.h"

using namespace std;

const string IN_FILE_NAME = "responses.txt";

int main()
{
    try
    {
        Students students(IN_FILE_NAME);
        cout << endl;
        students.print();
        cout << endl;
    }
    catch (FileHandlingException &ex)
    {
        std::cerr << endl << ex.get_message() << std::endl;
        return 1;
    }

    return 0;
}
