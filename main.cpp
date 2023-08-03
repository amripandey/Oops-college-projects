// currency convertor
#include <iostream>
#include <cstdio> //for getchar
using namespace std;

class Body
{
private:
    int optionInput;
    int Amount;

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
        fflush(stdin);
        cin >> optionInput;
        return optionInput;
    };
    void options()
    {
        int c = input();
        switch (c)
        {
        case 1:
            convert("INR", 0.62);
            break;
        case 2:
            convert("Pound", 0.0059);
            break;
        case 3:
            convert("Dollor", 0.0075);
            break;
        case 4:
            convert("Yen", 1.08);
            break;
        case 5:
            break;
        default:
            cout << "enter between (1-4)" << endl;
            options();
        }
    };
    void convert(string c, float f)
    {
        char a;
        system("clear");
        do
        {
            cout << "Enter the ammount" << endl;
            cin >> ws;
            cin >> Amount;

            cout << "\n"<<Amount<<"NRS = "<< c << " " << Amount * f << endl;
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