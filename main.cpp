// currency convertor
#include <iostream>
#include <cstdio>  //for getchar
//#include <climits> //for character limiting
#include <limits>
#include <ios>
using namespace std;

class Body
{
private:
    char optionInput;
    long Amount;

public:
    void body()
    {
        system("clear");
        cout << " \t***Welcome to currency convertor***" << endl;
        cout << "\nWe provide following services." << endl;
        cout << "1) Indian Rupees " << endl;
        cout << "2) British Pounds " << endl;
        cout << "3) Us Dollor " << endl;
        cout << "4) Japanese Yen " << endl;
        cout << "5) Quit" << endl;
        cout << "\nPlease select any one service" << endl;
        options();
    };
    int input()
    {
        cin >> optionInput;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //sucessfullt cleared all buffer .
        if (int(optionInput) >= 49 && int(optionInput) <= 53)
        {
            return int(optionInput);
        }
        else
        {
            return 6;
        }
    };
    void options()
    {
        int c = input();
        switch (c)
        {
        case 49: // ascii value of 1
            convert("INR", 0.62);
            break;
        case 50: // ascii value of 2
            convert("Pound", 0.0059);
            break;
        case 51: // ascii value of 3
            convert("Dollor", 0.0075);
            break;
        case 52: // ascii value of 4
            convert("Yen", 1.08);
            break;
        case 53: // ascii value of 5
            break;
        default:
            cout << "enter between (1-4)" << endl;
            // cout << "signal is " << c << endl;
            options();
        }
    };
    void convert(string c, float f)
    {
        char a;
        system("clear");
        do
        {
            cout << "Enter the Ammount" << endl;
            cin >> ws;
            cin >> Amount;

            cout << "\n"
                 << Amount << "NRS = " << c << " " << Amount * f << endl;
            cout << "do you want to continue press: y" << endl;
            cin >> ws;
            cin >> a;
        } while (a == 'y');
        returns();
    }
    void returns()
    {
        body();
    }
};

int main()
{
    Body b;
    b.body();
    return 0;
}