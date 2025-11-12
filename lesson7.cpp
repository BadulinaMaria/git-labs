
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    cout << "Map with coordinates:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > -j + 2) {
                cout << "(" << j << "," << i << ")b ";
            }
            else if (i < -j + 2) {
                cout << "(" << j << "," << i << ")o ";
            }
            else {
                cout << "(" << j << "," << i << ")f ";
            }
        }
        cout << endl;
    }
    int x, y;
    cout << "Enter initial coordinates x,y  " << endl;
    cin >> x >> y;
    cout << "Current position: x=" << x << ", y=" << y << endl;
    enum location { beach, ocean, field };
    location loc;
    char move;
    //s,n,w,e

    while (true)
    {    
        cout << " Type in direction s,n,w,e. ";
        cin >> move;

        switch (move)
        {
        case 's':
            y++;
            break;
        case 'n':
            y--;
            break;
        case 'w':
            x--;
            break;
        case 'e':
            x++;
            break;
        default:
            cout << "Invalid direction! Use s,n,w,e only." << endl;
            continue;
        }

        // where are we?
        /*

             o  o  f
             o  f  b
             f  b  b
        */

        if ((x == 0 && y == 0) || (x == 1 && y == 0) || (x == 0 && y == 1))
        {
            cout << "You are in the ocean. ";
            loc = ocean;
        }
        else if ((x == 1 && y == 2) || (x == 2 && y == 1) || (x == 2 && y == 2))
        {
            cout << "You are on the beach. ";
            loc = beach;
        }
        else if ((x == 0 && y == 2) ||( x == 1 && y == 1) ||( x == 2 && y == 0))
        {
            cout << "You are on the field. ";
            loc =field;
        }
        else if (x < 0 || x > 2 || y > 2 || y < 0) {
            cout << "You have reached the border and cannot move further!\n";
            switch (move)
            {
            case 's': y--; break;
            case 'n': y++; break;
            case 'w': x++; break;
            case 'e': x--; break;
            }
        }



        if (x ==2 && y == 2) {
            cout << "You have reached your goal!\n";
            break;
        }

        cout << endl;
    }
    return 0;
}

