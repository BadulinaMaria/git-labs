#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

/* const int SIZE = 10;


void reverse_arr(int* arr)
{
    for (int i = 0; i < SIZE / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = temp;
    }
}
void fill_arr(int* arr)
{
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }
}
void i_arr(int* arr)
{
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }
}
void o_arr(int* arr)
{
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << ' ';
    }
}

int main() {
    int array[SIZE]{};

    //cout << array[0] << ' ' << array[9];

    /*for (int i = 0; i < 10; i++) {
        cout << array[i] << endl;
    }
    char word[] = { 'a','p','p','l','e' };
    fill_arr(array);
    o_arr(array);
    reverse_arr(array);
    o_arr(array);

    return 0;
} */
const int MAX_SIZE = 10;

bool isPalindrome(char* word) {
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            return false;
        }
    }
    return true;
}

void printWord(char* word) {
    cout << "Word: \"" << word << "\"";
}


void checkPalindromeResult(char* word) {
    printWord(word);
    if (isPalindrome(word)) {
        cout << " is a palindrom" << endl;
    }
    else {
        cout << " isn't a palindrom" << endl;
    }
}

void inputWord(char* word) {
    cout << "Enter the word in English: ";
    cin >> word;
}

int main() {
    char word[MAX_SIZE];
    inputWord(word);
    checkPalindromeResult(word);
    return 0;
}