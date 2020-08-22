#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City
{
    std::string name;
    long population;
    double cost;
};

struct Country
{
    std::string name;
    std::vector<City> cities;
};

struct Tours
{
    std::string title;
    std::vector<Country> countries;
};

Country buildColumbia();
Country buildBrazil();
Country buildChile();
Country buildArgentina();
void    printTours(const Tours tours);
void    printRuler();
void    printTitle(const std::string title);
void    printTableHeader();
void    printCountry(const Country country);
void    printCity(const City city);

int main()
{
    Tours tours;
    tours.title = "Your Ticket Prices from Miami";
    tours.countries = { buildColumbia(), buildBrazil(), buildChile(), buildArgentina() };

    printTours(tours);

    return 0;
}

Country buildColumbia()
{
    Country columbia;
    columbia.name = "Columbia";
    columbia.cities =
    {
        { "Bogota",     8778000, 400.98 },
        { "Cali",       2401000, 424.12 },
        { "Medellin",   2464000, 350.98 },
        { "Cartagena",  972000, 345.34  }
    };
    return columbia;
}

Country buildBrazil()
{
    Country brazil;
    brazil.name = "Brazil";
    brazil.cities =
    {
        { "Rio De Janiero", 13500000, 567.45 },
        { "Sao Paulo", 11310000, 975.45 },
        { "Salvador", 18234000, 855.99 }
    };
    return brazil;
}

Country buildChile()
{
    Country chile;
    chile.name = "Chile";
    chile.cities =
    {
        { "Valdivia", 260000, 569.12 },
        { "Santiago", 7040000, 520.00 }
    };
    return chile;
}

Country buildArgentina()
{
    Country argentina;
    argentina.name = "Argentina";
    argentina.cities =
    {
        { "Buenos Aires", 3010000, 723.77 }
    };
    return argentina;
}

void printTours(const Tours tours)
{
    std::cout << std::endl;
    printRuler();
    std::cout << std::endl;
    printTitle(tours.title);
    std::cout << std::endl;
    printTableHeader();
    std::cout << std::setfill(' ');
    std::cout << std::setprecision(2) << std::fixed;
    for (Country country: tours.countries)
    {
        printCountry(country);
    }
    std::cout << std::endl;
}

void printRuler()
{
    std::cout << "1234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
}
void printTitle(const std::string title)
{
    std::cout << std::setw( (70 - title.length()) / 2) << "" << title << std::endl;
}
void printTableHeader()
{
    std::cout   << std::setw(20) << std::left << "Country"
                << std::setw(20) << std::left << "City"
                << std::setw(15) << std::right << "Population"
                << std::setw(15) << std::right << "Price"
    << std::endl;
    std::cout << std::setw(70) << std::setfill('-') << "" << std::endl;
}

void printCountry(const Country country)
{
    std::cout << std::setw(20) << std::left << country.name;

    unsigned int count = 0;
    for (City city : country.cities)
    {
        if (count > 0)
        {
             //std::cout << std::endl;
             std::cout << std::setw(20) << std::left << "";
        }
        printCity(city);
        count++;
    }
}

void printCity(const City city)
{
    std::cout   << std::setw(20) << std::left << city.name
                << std::setw(15) << std::right << city.population
                << std::setw(15) << std::right << city.cost
                << std::endl;
}
