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

int main()
{
    Tours tours;
    tours.title = "Your Ticket Prices from Miami";

    Country columbia;
    columbia.name = "Columbia";
    columbia.cities =
    {
        { "Bogota",     8778000, 400.98 },
        { "Cali",       2401000, 424.12 },
        { "Medellin",   2464000, 350.98 },
        { "Cartagena",  972000, 345.34  }
    };

    Country brazil;
    brazil.name = "Brazil";
    brazil.cities =
    {
        { "Rio De Janiero", 13500000, 567.45 },
        { "Sao Paulo", 11310000, 975.45 },
        { "Salvador", 18234000, 855.99 }
    };

    Country chile;
    chile.name = "Chile";
    chile.cities =
    {
        { "Valdivia", 260000, 569.12 },
        { "Santiago", 7040000, 520.00 }
    };

    Country argentina;
    chile.name = "Argentina";
    chile.cities =
    {
        { "Buenos Aires", 3010000, 723.77 }
    };

    tours.countries = {columbia, brazil, chile, argentina};

    std::cout << tours.title << std::endl;
    for (Country country : tours.countries)
    {
        std::cout << "\t" << country.name << std::endl;
        for (City city: country.cities)
        {
            std::cout << "\t" << "\t" << city.name << " | " << city.population << " | " << city.cost << std::endl;
        }
    }
    return 0;
}
