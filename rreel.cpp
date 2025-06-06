#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>  

using namespace std;

void guess() {
    int guess = 0;
    int at = 0;
    std::cout << "Привет! это игра 'угадай число', твоя задача угадать число от 1 до 100, поехали!" << std::endl;
    int ran = 1 + rand() % 100;
    do {
        std::cout << "число: ";
        std::cin >> guess;
        at++;
        if (guess > ran) {
            std::cout << "меньше" << std::endl;
        }
        else if (guess < ran) {
            std::cout << "больше" << std::endl;
        }
        else {
            std::cout << "Правильно! Вы выиграли, число было угадано за " << at << " попыток" << std::endl;
        }
    } while (guess != ran);
}

void easy() {
    int gues = 0;
    int att = 0;
    std::cout << "Привет! это игра 'угадай число', твоя задача угадать число от 1 до 50, поехали!" << std::endl;
    int r = 1 + rand() % 50;
    do {
        std::cout << "число: ";
        std::cin >> gues;
        att++;
        if (gues > r) {
            std::cout << "меньше" << std::endl;
        }
        else if (gues < r) {
            std::cout << "больше" << std::endl;
        }
        else {
            std::cout << "Правильно! Вы выиграли, число было угадано за " << att << " попыток" << std::endl;
        }
    } while (gues != r);
}

void hard() {
    int g = 0;
    int a = 0;
    std::cout << "Привет! это игра 'угадай число', твоя задача угадать число от 1 до 5000, поехали!" << std::endl;
    int random = 1 + rand() % 5000;
    do {
        std::cout << "число: ";
        std::cin >> g;
        a++;
        if (g > random) {
            std::cout << "меньше" << std::endl;
        }
        else if (g < random) {
            std::cout << "больше" << std::endl;
        }
        else {
            std::cout << "Правильно! Вы выиграли, число было угадано за " << a << " попыток" << std::endl;
        }
    } while (g != random);
}

int main() {
    setlocale(LC_ALL, "Russian");
    string p;
    string a;
    string f;

   
    srand(static_cast<unsigned int>(time(0)));

    cout << "GuessNum" << endl;
    cout << "—————————" << endl;
    cout << "Привет! Придумайте себе пароль для аккаунта игры, пароль: ";
    cin >> p;
    cout << "Хорошо. Потверди пароль чтобы зайти в игру, пароль: ";
    cin >> a;

    if (a == p) {
        cout << "Привет! Выбери режим игры 'GuessNum': " << endl;
        cout << "guess - ты будешь гадать над числом" << endl;
        cout << "easy - лёгкий уровень" << endl;
        cout << "hard - сложный уровень" << endl;
        cin >> f;

        if (f == "guess") {
            guess();
        }
        else if (f == "easy") {
            easy();
        }
        else if (f == "hard") {
            hard();
        }
        else {
            cout << "вы наверное не правильно ввели команду, попробуйте ещё" << endl;
        }
    }
    else {
        cout << "нет, не правильно" << endl;
    }
}