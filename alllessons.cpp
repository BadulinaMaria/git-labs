#include <iostream>
#include <Windows.h>  // Для русского языка в Windows
#include "menu.h"  // Подключаем меню

using namespace std;

int main() {
    
    setlocale(LC_ALL, "RU");
    int choice;

    do {
        showMainMenu();      // Показываем меню
        cin >> choice;       // Читаем выбор пользователя

        if (choice == 0) {
            cout << "Выход из программы.\n";
            break;
        }

        runLesson(choice);   // Запускаем выбранный урок

        cout << "\nНажмите Enter для продолжения...";
        cin.ignore();
        cin.get();

    } while (true);  // Бесконечный цикл, пока не выберут 0

    return 0;
}