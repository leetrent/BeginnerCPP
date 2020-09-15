#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    ifstream inFile("romeoandjuliet.txt");
    ofstream outFile("romeoandjuliet_out.txt");

    if (!inFile.is_open())
    {
        cerr << "Error opening input file 'romeoandjuliet.txt'" << endl;
        return 1;
    }
    if (!outFile.is_open())
    {
        cerr << "Error opening output file 'romeoandjuliet_out.txt'" << endl;
        return 2;
    }

    string line{};
    unsigned int lineNumber{0};

    while (getline(inFile, line))
    {
        if (line == "")
        {
            outFile << endl;
        }
        else
        {
            lineNumber++;
            outFile << setw(7) << left << lineNumber
                    << line << endl;
        }
    }

    cout << "Copy operation has completed." << endl;

    inFile.close();
    outFile.close();

    return 0;
}
