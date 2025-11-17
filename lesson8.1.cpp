#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;


void moveSouth(int& x, int& y) {
    y++;
}

void moveNorth(int& x, int& y) {
    y--;
}

void moveWest(int& x, int& y) {
    x--;
}

void moveEast(int& x, int& y) {
    x++;
}

void revertMove(char move, int& x, int& y) {
    switch (move) {
    case 's': y--; break;
    case 'n': y++; break;
    case 'w': x++; break;
    case 'e': x--; break;
    }
}

enum location { beach, ocean, field };

location determineLocation(int x, int y) {
    /*
         o  o  f
         o  f  b
         f  b  b
    */

    if ((x == 0 && y == 0) || (x == 1 && y == 0) || (x == 0 && y == 1)) {
        return ocean;
    }
    else if ((x == 1 && y == 2) || (x == 2 && y == 1) || (x == 2 && y == 2)) {
        return beach;
    }
    else if ((x == 0 && y == 2) || (x == 1 && y == 1) || (x == 2 && y == 0)) {
        return field;
    }
    return ocean; 
}

string LocationName(location loc) {
    switch (loc) {
    case ocean: return "ocean";
    case beach: return "beach";
    case field: return "field";
    default: return "unknown";
    }
}

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
    cout << "Enter initial coordinates x,y (x<4, y<4): " << endl;
    cin >> x >> y;
    cout << "Current position: x=" << x << ", y=" << y << endl;

    char move;

    while (true) {
        cout << "Type in direction s,n,w,e: ";
        cin >> move;

  
        switch (move) {
        case 's':
            moveSouth(x, y);
            break;
        case 'n':
            moveNorth(x, y);
            break;
        case 'w':
            moveWest(x, y);
            break;
        case 'e':
            moveEast(x, y);
            break;
        default:
            cout << "Invalid direction! Use s,n,w,e only." << endl;
            continue;
        }

        if (x < 0 || x > 2 || y > 2 || y < 0) {
            cout << "You have reached the border and cannot move further!\n";
            revertMove(move, x, y);
        }

        location loc = determineLocation(x, y);
        cout << "You are in the " << LocationName(loc) << ". ";

        if (x == 2 && y == 2) {
            cout << "You have reached your goal!\n";
            break;
        }

        cout << endl;
    }

    return 0;
}