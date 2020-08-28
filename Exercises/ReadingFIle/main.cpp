#include <iostream>
#include <fstream>

int read_file(std::string);

int main()
{
    std::cout << std::endl;
    return read_file("data.txt");
    std::cout << std::endl;
}

int read_file(std::string file_name)
{
    std::ifstream in_file {file_name};
    if ( !in_file.is_open() )
    {
        std::cerr << "Cound not open file with this name: '" << file_name << "'." << std::endl;
        return 1;
    }

    std::string word{};
    while (in_file >> word)
    {
        std::cout << word << std::endl;
    }

    std::string line{};

    return 0;
}
