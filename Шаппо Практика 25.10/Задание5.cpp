#include <iostream>
using namespace std;
int main() {
    int height;

    cout << "Введите высоту трапеции: ";
    cin >> height;

    if (height < 2) {
        cout << "Высота должна быть не менее 2." << endl;
        return 1;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + height; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    int top;

    cout << "Введите высоту треугольника: ";
    cin >> top;
 
    cout << "Равнобедренный треугольник:" << endl;
    for (int i = 0; i <top; ++i) {
        for (int j = 0; j < top - i - 1; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        } 
        cout << endl;
    }

    return 0;
}