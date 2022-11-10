#include <iostream>
#include <cmath>

void task1() {
    int b1; // объявляем переменную
    int b2;
    int h;
    int s;

    std::cout << "Enter b1 base length: " << std::endl; // просим пользователя ввести длину основания b1
    std::cin >> b1; // получаем число от пользователя и сохраняем в переменную b1

    std::cout << "Enter b2 base length: " << std::endl; // просим пользователя ввести длину основания b2
    std::cin >> b2; // получаем число от пользователя и сохраняем в переменную b2

    std::cout << "Enter h - trapezoid height: " << std::endl; // просим пользователя ввести высоту трапеции
    std::cin >> h; // получаем число от пользователя и сохраняем в переменную h

    s = (b1+b2)*h/2; // считаем площадь трапеции
    std::cout << "Trapezoid square = " << s << std::endl; // выводим ответ
}

void task2() {
    double r; // объявляем переменную, равную радиусу круга
    double d = 2; // инициализируем переменную d - степень 2
    double c; // длина окружности
    double s; // площадь круга
    double pi = 3.14; // инициализируем переменную значением 3.14

    std::cout << "Enter r - circle radius: " << std::endl; // просим пользователя ввести радиус круга
    std::cin >> r; // получаем число от пользователя и сохраняем в переменную r

    c = 2*pi*r; // находим длину окружности
    s = pi*(pow(r,d));

    std::cout << "circumference = " << c << std::endl; // выводим длину окружности
    std::cout << "circle square = " << s << std::endl; // выводим площадь круга
}

void task3() {
    double a; // объявляем переменную а - сторону прямоугольного треугольника
    double b; // объявляем переменную b - сторону прямоугольного треугольника
    double d = 2; // инициализируем переменную d - степень 2
    int s; // площадь треугольника
    double hy2; // гипотенуза в квадрате
    double hy; // гипотенуза

    std::cout << "Enter a side length: " << std::endl; // просим пользователя ввести длину стороны а
    std::cin >> a; // получаем число от пользователя и сохраняем в переменную а

    std::cout << "Enter b side length: " << std::endl; // просим пользователя ввести длину стороны b
    std::cin >> b; // получаем число от пользователя и сохраняем в переменную b

    s = a*b/2; // находим площадь прямоугольного треугольника
    hy2 = pow(a,d) + pow(b,d); // находим квадрат гипотенузы прямоугольного треугольника
    hy = sqrt(hy2); // находим корень значения hy2

    std::cout << "triangle square = " << s << std::endl; // выводим площадь треголььника
    std::cout << "hypotenuse = " << hy << std::endl; // выводим гипотенузу треугольника
}

void task4() {
    int chislo; // объявляем переменную int, обозначающую десятичное число
    int sum;

    std::cout << "Enter integer four-digit decimal number: " << std::endl; // просим пользователя ввести четырехзначное десятичное число
    std::cin >> chislo; // получаем число от пользователя и сохраняем в переменную сhislo

    int cifra4 = chislo % 10; // находим остаток от деления четырехзначного числа на 10, тем самым находим четвертую цифру
    int ostatok1 = chislo / 10; // находим целую часть от деления, тем самым оставшееся трехзначное число
    int cifra3 = ostatok1 % 10;
    int ostatok2 = ostatok1 / 10;
    int cifra2 = ostatok2 % 10;
    int ostatok3 = ostatok2 / 10;
    int cifra1 = ostatok3 % 10;

    sum = cifra1 + cifra2 + cifra3 + cifra4;

    std::cout << "sum = " << sum << std::endl; // выводим сумму 4 цифр числа
}

void task5 () {
    double x; // объявляем перменную x
    double y; // объявляем перменную y

    std::cout << "Enter x: " << std::endl; // просим пользователя ввести значение x в декартовой системе
    std::cin >> x; // получаем число от пользователя и сохраняем в переменную x

    std::cout << "Enter y: " << std::endl; // просим пользователя значение y
    std::cin >> y; // получаем число от пользователя и сохраняем в переменную y

    double r = sqrt(x*x+y*y); // находим значение r в полярной системе
    double fi = y/x; // находим значение fi - угол между лучом из начала координат к точке и положительной осью абсцисс

    std::cout << "Polar coordinates: " << "rr = " << r << "fi = " << fi; // выводим значения r и fi
}

void task6 () {
    double r; // объявляем перменную r - расстояние от точки до начала координат
    double fi; // угол между лучом из начала координат к точке и положительной осью абсцисс

    std::cout << "Enter distance from the desired point to origin: " << std::endl; // просим пользователя ввести значение r
    std::cin >> r; // получаем число от пользователя и сохраняем в переменную r

    std::cout << "Enter angle: " << std::endl; // просим пользователя значение fi
    std::cin >> fi; // получаем число от пользователя и сохраняем в переменную fi

    double x = r*cos(fi); // находим значение x в декартовой системе
    double y = r*sin(fi); // находим значение y в декартовой системе

    std::cout << "Cartesian coordinates: " << "x = " << x << "y = " << y; // выводим значения x и y
}

void task7() {
    int a; //объявляем переменную
    int b;
    int c;
    double result;

    std::cout << "Enter variable a: " << std::endl; // просим пользователя ввести значение a
    std::cin >> a; // получаем число от пользователя и сохраняем в переменную a

    std::cout << "Enter variable b: " << std::endl; // просим пользователя ввести значение b
    std::cin >> b; // получаем число от пользователя и сохраняем в переменную b

    std::cout << "Enter variable c: " << std::endl; // просим пользователя ввести значение c
    std::cin >> c; // получаем число от пользователя и сохраняем в переменную c

    result = b*b-4*a*c;

    std::cout << "x1 = " << (-b+sqrt(result))*a/2 << std::endl; // считаем и выводим значение x1
    std::cout << "x2 = " << (-b+sqrt(result))*a/2 << std::endl; // аналогично с x2
}

void task8() {
    int a; // объявляем перменную а, сторону треугольника
    int b;
    int c;

    std::cout << "Enter a side length: " << std::endl; // просим пользователя ввести длину стороны a
    std::cin >> a; // получаем число от пользователя и сохраняем в переменную a

    std::cout << "Enter b side length: " << std::endl; // просим пользователя ввести длину стороны b
    std::cin >> b; // получаем число от пользователя и сохраняем в переменную b

    std::cout << "Enter c side length: " << std::endl; // просим пользователя ввести длину стороны c
    std::cin >> c; // получаем число от пользователя и сохраняем в переменную c

    double ma = sqrt(2*b*b+2*c*c-a*a)/2; // длина медианы из вершины а в исходном треугольнике
    double mb = sqrt(2*a*a+2*c*c-b*b)/2;
    double mc = sqrt(2*a*a+2*b*b-c*c)/2;

    double a2 = ma; // сторона а нового треугольника
    double b2 = mb;
    double c2 = mc;

    double ma2 = sqrt(2*b2*b2+2*c2*c2-a2*a2)/2; // длина медианы из вершины а в новом треугольнике
    double mb2 = sqrt(2*a2*a2+2*c2*c2-b2*b2)/2;
    double mc2 = sqrt(2*a2*a2+2*b2*b2-c2*c2)/2;

    std::cout << "Medians of the new triangle: " << "ma = " << ma2 << "mb = " << mb2 << "mc = " << mc2 << std::endl; // выводим значения медиан
}

void task9() {
    int k; // объявляем переменную, k-я секунда суток

    std::cout << "Enter a second: " << std::endl; // просим пользователя ввести k-ую секунду
    std::cin >> k; // получаем число от пользователя и сохраняем в переменную k

    int min = k/60; // считаем сколько минут прошло
    int hours = min/60; // считаем сколько часов прошло

    std::cout << "Integer number of minutes: " << min << std::endl; // выводим целое число минут
    std::cout << "Integer number of hours: " << hours << std::endl; // выводим целое число часов

}

void task10() {
    int a; // объявляем переменную, сторону треугольника
    int b;
    int c;

    std::cout << "Enter a side length: " << std::endl; // просим пользователя ввести длину стороны a
    std::cin >> a; // получаем число от пользователя и сохраняем в переменную a

    std::cout << "Enter b side length: " << std::endl; // просим пользователя ввести длину стороны b
    std::cin >> b; // получаем число от пользователя и сохраняем в переменную b

    std::cout << "Enter c side length: " << std::endl; // просим пользователя ввести длину стороны c
    std::cin >> c; // получаем число от пользователя и сохраняем в переменную c

    if (a == b || b == c || a == c) // вводим условие
        std::cout << "triangle is isosceles" << std::endl; // выводится, если выполняется условие
    else
        std::cout << "triangle is not isosceles" << std::endl; // выводится, если условие не выполняется
}

void task11() {
    int c; // объявляем переменную, стоимость покупки

    std::cout << "Enter price: " << std::endl; // просим пользователя ввести стоимость покупки
    std::cin >> c; // получаем число от пользователя и сохраняем в переменную c

    if (c > 1000)
        c = c - c/10;
    std::cout << "The total cost: " << c << std::endl; // выводим итоговую стоимость
}

void task12() {
    int height; // объявляем переменную height
    int weight;

    std::cout << "Enter your height: " << std::endl; // просим пользователя ввести свой рост
    std::cin >> height; // получаем число от пользователя и сохраняем в переменную height

    std::cout << "Enter your weight: " << std::endl; // просим пользователя ввести свой вес
    std::cin >> weight; // получаем число от пользователя и сохраняем в переменную weight

    if (height - 100 == weight) // вводим условие
        std::cout << "Your weight is ideal!" << std::endl; // исполняется, если условие выполняется
    else if (height - 100 > weight) // если не выполняется условие 1, то проверяется новое
        std::cout << "You should increase the weight" << std::endl; // исполняется, если условие выполняется
    else // выполняется, если не выполняется и условие 2
        std::cout << "You should reduce the weight" << std::endl; // выводится на экран
}


void task14() {
    int day; // объяыляем переменную, день недели
    double price; // цена одной минуты
    double duration; // продолжительность разговора
    double result;

    std::cout << "Enter price of one minute: " << std::endl; // просим пользователя ввести цену одной минуты
    std::cin >> price; // получаем число от пользователя и сохраняем в переменную price

    std::cout << "Enter the duretion of the phone call: " << std::endl; // просим пользователя ввести продолжительность разговора
    std::cin >> duration; // получаем число от пользователя и сохраняем в переменную duration

    std::cout << "Enter a number of the day of the week: " << std::endl; // просим пользователя ввести день недели
    std::cin >> day; // получаем число от пользователя и сохраняем в переменную day

    if (day == 1 || day == 2 || day == 3 || day == 4 || day == 5)
        result = price*duration;
    else if (day == 6 || day == 7)
        result = price*0.8*duration;
    else
        std::cout << "Error, enter numbers from 0 to 7";

    std::cout << "Price of the phone call: " << result << std::endl; // выводим итоговую стоимость звонка
}

void task15 () {
    int m; // объявляем переменную, номер месяца

    std::cout << "Enter a month: " << std::endl; // просим пользователя ввести месяц
    std::cin >> m; // получаем число от пользователя и сохраняем в переменную m

    if (m == 1)
        std::cout << "Январь, зима" << std::endl;
    if (m == 2)
        std::cout << "Февраль, зима" << std::endl;
    if (m == 3)
        std::cout << "Март, весна" << std::endl;
    if (m == 4)
        std::cout << "Апрель, весна" << std::endl;
    if (m == 5)
        std::cout << "Май, весна" << std::endl;
    if (m == 6)
        std::cout << "Июнь, лето" << std::endl;
    if (m == 7)
        std::cout << "Июль, лето" << std::endl;
    if (m == 8)
        std::cout << "Август, лето" << std::endl;
    if (m == 9)
        std::cout << "Сентябрь, осень" << std::endl;
    if (m == 10)
        std::cout << "Октябрь, осень" << std::endl;
    if (m == 11)
        std::cout << "Ноябрь, осень" << std::endl;
    if (m == 12)
        std::cout << "Декабрь, зима" << std::endl;

    std::cout << "Month: " << "m" << std::endl; // выводим результат
}

int main() {

    std::cout << "Task 1" << std::endl;
    task1();

    std::cout << "Task 2" << std::endl;
    task2();

    std::cout << "Task 3" << std::endl;
    task3();

    std::cout << "Task 4" << std::endl;
    task4();

    std::cout << "Task 5" << std::endl;
    task5();

    std::cout << "Task 6" << std::endl;
    task6();

    std::cout << "Task 7" << std::endl;
    task7();

    std::cout << "Task 8" << std::endl;
    task8();

    std::cout << "Task 9" << std::endl;
    task9();

    std::cout << "Task 10" << std::endl;
    task10();

    std::cout << "Task 11" << std::endl;
    task11();

    std::cout << "Task 12" << std::endl;
    task12();

    std::cout << "Task 14" << std::endl;
    task14();

    std::cout << "Task 15" << std::endl;
    task15();

    return 0;
}
