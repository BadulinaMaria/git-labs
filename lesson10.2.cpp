#include <iostream>
using namespace std;

const int OCEAN = 0;
const int BEACH = 1;
const int FIELD = 2;
const int FIRE = 3;
const int STORM = 4;


void moveSouth(int* x, int* y) {
    (*y)++;
}

void moveNorth(int* x, int* y) {
    (*y)--;
}

void moveWest(int* x, int* y) {
    (*x)--;
}

void moveEast(int* x, int* y) {
    (*x)++;
}


void createMap(int** map, int* sizeX, int* sizeY) {
    for (int y = 0; y < *sizeY; y++) {
        for (int x = 0; x < *sizeX; x++) {
            if (y > -x + (*sizeX - 1)) {
                *(*(map + x) + y) = BEACH;
            }
            else if (y < -x + (*sizeX - 1)) {
                *(*(map + x) + y) = OCEAN;
            }
            else {
                *(*(map + x) + y) = FIELD;
            }
        }
    }
}


void showMap(int** map, int* sizeX, int* sizeY, int* playerX, int* playerY) {
    cout << "\nMap:" << endl;
    for (int y = 0; y < *sizeY; y++) {
        for (int x = 0; x < *sizeX; x++) {
            if (x == *playerX && y == *playerY) {
                cout << "P ";
            }
            else {
                switch (*(*(map + x) + y)) {
                case OCEAN: cout << "o "; break;
                case BEACH: cout << "b "; break;
                case FIELD: cout << "f "; break;
                case FIRE: cout << "F "; break;
                case STORM: cout << "S "; break;
                default: cout << "? "; break;
                }
            }
        }
        cout << endl;
    }
}

string getLocationName(int locationType) {
    switch (locationType) {
    case OCEAN: return "ocean";
    case BEACH: return "beach";
    case FIELD: return "field";
    case FIRE: return "fire";
    case STORM: return "storm";
    default: return "?";
    }
}


bool canMoveTo(int** map, int* x, int* y, int* sizeX, int* sizeY) {
    if (*x < 0 || *x >= *sizeX || *y < 0 || *y >= *sizeY) {
        return false;
    }
    int location = *(*(map + *x) + *y);
    if (location == FIRE || location == STORM) {
        return false;
    }
    return true;
}

bool createWeather(int** map, int* sizeX, int* sizeY, int* playerX, int* playerY) {
    if (*playerX >= *sizeX / 2) {
        int quarterW = *sizeX / 2;
        int quarterH = *sizeY / 2;

        if (*playerY < *sizeY / 2) {
            cout << "\n FIRE in northeast quadrant! " << endl;
            for (int x =  quarterW; x < *sizeX; x++) {
                for (int y = 0; y < quarterH; y++) {
                    if (x > *playerX && y > *playerY) {
                        *(*(map + x) + y) = FIRE;
                    }
                }
            }
        }
        else {
            cout << "\n STORM in southwest quadrant!" << endl;
            for (int x = 0; x < quarterW; x++) {
                for (int y = quarterH; y < *sizeY; y++) {
                    if (x > *playerX && y > *playerY) {
                        *(*(map + x) + y) = STORM;
                    }
                }
            }
        }
        return true;
    }
    return false;
}

int main() {
    int* sizeX = new int;
    int* sizeY = new int;
    int* playerX = new int;
    int* playerY = new int;
    bool* weatherCreated = new bool(false);
    int& refSizeX = *sizeX;
    int& refSizeY = *sizeY;
    int& refPlayerX = *playerX;
    int& refPlayerY = *playerY;
    bool& refWeatherCreated = *weatherCreated;

    cout << "Enter map size (width height): ";
    cin >> refSizeX >> refSizeY;


    if (*sizeX <= 0 || *sizeY <= 0) {
        cout << "Invalid map size!" << endl;
        delete sizeX;
        delete sizeY;
        delete playerX;
        delete playerY;
        delete weatherCreated;
        return 1;
    }


    int** map = new int* [*sizeX];
    for (int i = 0; i < *sizeX; i++) {
        *(map + i) = new int[*sizeY];
    }


    createMap(map, sizeX, sizeY);

    cout << "Enter starting coordinates x,y: ";
    cin >> refPlayerX >> refPlayerY;


    if (*playerX < 0 || *playerX >= *sizeX || *playerY < 0 || *playerY >= *sizeY) {
        cout << "Invalid starting position!" << endl;
        for (int i = 0; i < *sizeX; i++) {
            delete[] * (map + i);
        }
        delete[] map;
        delete sizeX;
        delete sizeY;
        delete playerX;
        delete playerY;
        delete weatherCreated;
        return 1;
    }

    cout << "Goal: Reach position (" << *sizeX - 1 << "," << *sizeY - 1 << ")" << endl;

    while (true) {
        showMap(map, sizeX, sizeY, playerX, playerY);

        int currentLocation = *(*(map + *playerX) + *playerY);
        cout << "You are at " << getLocationName(currentLocation) << endl;
        cout << "Coordinates: (" << *playerX << "," << *playerY << ")" << endl;

        if (*playerX == *sizeX - 1 && *playerY == *sizeY - 1) {
            cout << "Congratulations! You reached the goal!" << endl;
            break;
        }

        if (!*weatherCreated) {
            if (createWeather(map, sizeX, sizeY, playerX, playerY)) {
                *weatherCreated = true;
            }
        }

        char command;
        cout << "\nCommands: s - south, n - north, w - west, e - east, q - exit" << endl;
        cout << "Your choice: ";
        cin >> command;

        if (command == 'q') {
            cout << "Game over!" << endl;
            break;
        }
        int oldX = *playerX;
        int oldY = *playerY;

        switch (command) {
        case 's': moveSouth(playerX, playerY); break;
        case 'n': moveNorth(playerX, playerY); break;
        case 'w': moveWest(playerX, playerY); break;
        case 'e': moveEast(playerX, playerY); break;
        default:
            cout << "Invalid command!" << endl;
            continue;
        }

        if (!canMoveTo(map, playerX, playerY, sizeX, sizeY)) {
            cout << "Cannot move there! ";
            if (*playerX < 0 || *playerX >= *sizeX || *playerY < 0 || *playerY >= *sizeY) {
                cout << "You've reached the border!" << endl;
            }
            else {
                int location = *(*(map + *playerX) + *playerY);
                cout << "There is " << getLocationName(location) << "!" << endl;
            }

            *playerX = oldX;
            *playerY = oldY;
        }
    }


    for (int i = 0; i < *sizeX; i++) {
        delete[] * (map + i);
    }
    delete[] map;
    delete sizeX;
    delete sizeY;
    delete playerX;
    delete playerY;
    delete weatherCreated;

    return 0;
}
