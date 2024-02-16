#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");
    int tableCount = 0;
    const char* name = "Преступник";

    auto printTable = [=,&tableCount](int width, int height) {
        string horizontalLine(width, '*');
        string Line(width - 2, ' ');

        cout << horizontalLine << endl;
        for (int i = 0; i < height - 3; i++) 
        {
            if (i == (((height-2) / 2) - 1)) 
            {
                Line = string((width - 2 - strlen("Разыскивается ")) / 2, ' ') + "Разыскивается " + string((width - 2 - strlen("Разыскивается ")) / 2, ' ');
                cout << "*" << Line << "*" << endl;
                Line = string(width - 2, ' ');
                Line = string((width - 2 - strlen(name)) / 2, ' ') + name + string((width - 2 - strlen(name)) / 2, ' ');
                cout << "*" << Line << "*" << endl;
                Line = string(width - 2, ' ');
            }
            else 
            {
                cout << "*" << Line << "*" << endl;
            }
        }
        cout << horizontalLine << endl;

        tableCount++;
    };

    printTable(30, 8);
    printTable(30, 8);
    cout << "разыскивается: " << tableCount << endl;

    return 0;

}