#include <iostream>

using namespace std;

int main() {

  int number; 
  int sum = 0; 
  int count = 0; 


  while (true) {
    cout << "Введите число: ";
    cin >> number;

    // Если число равно 0, то выводим результат и выходим из цикла
    if (number == 0) {
      cout << "Количество чисел: " << count << endl;
      cout << "Общая сумма чисел: " << sum << endl;
      cout << "Среднее арифметическое: " << sum / count << endl;
      break;
    }

    // Увеличиваем счетчик
    count++;

    // Добавляем число к сумме
    sum += number;
  }

  return 0;
}
