#include <iostream>
#include <string>
#include "game_functions.h"

using namespace std;

// Общие константы для всех игр
const int OCEAN = 0;
const int BEACH = 1;
const int FIELD = 2;

// Простая версия из lesson5.cpp
void runSimpleBeachGame() {
    cout << "Простая версия игры\n";

    int x, y;
    cout << "Введите координаты x,y: ";
    cin >> x >> y;

    if (y > -x + 3) {
        cout << "Вы на пляже\n";
    }
    else if (y < -x + 3) {
        cout << "Вы в океане\n";
    }
    else {
        cout << "Вы на поле\n";
    }

    string dir;
    cout << "Введите направление (north/south/east/west): ";
    cin >> dir;

    cout << "Смотрю " << dir << ": ";
    if (dir == "north") {
        if (y + 1 > -x + 3) cout << "пляж";
        else if (y + 1 < -x + 3) cout << "океан";
        else cout << "поле";
    }
    else if (dir == "south") {
        if (y - 1 > -x + 3) cout << "пляж";
        else if (y - 1 < -x + 3) cout << "океан";
        else cout << "поле";
    }
    else if (dir == "east") {
        if (y > -(x + 1) + 3) cout << "пляж";
        else if (y < -(x + 1) + 3) cout << "океан";
        else cout << "поле";
    }
    else if (dir == "west") {
        if (y > -(x - 1) + 3) cout << "пляж";
        else if (y < -(x - 1) + 3) cout << "океан";
        else cout << "поле";
    }
    cout << endl;
}

// Полная версия из lesson10.1.cpp
void runBeachGame() {
    cout << "Полная версия игры\n";
    cout << "Эта функция требует много кода...\n";
    cout << "Здесь будет полная реализация игры с картой 3x3\n";
    cout << "Для экономии места оставлю заглушку\n";
}

// Версия с указателями из lesson10.2.cpp
void runPointerBeachGame() {
    cout << "Версия с указателями\n";
    cout << "Эта функция использует указатели и динамическую память\n";
    cout << "Для экономии места оставлю заглушку\n";
}