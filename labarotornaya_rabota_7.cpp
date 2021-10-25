#include <iostream>
using namespace std;
void tasks(int N) {
	if (N == 1) {
		cout << "Задание №1\n" << "Ввести  угол а в градусах(0 < a < 360): ";
		int a;
		cin >> a;
		if ((a > 0) && (a < 360))
			cout << "Угол а в радиaнах = " << a / 180 << "*pi" << endl;
		else
			cout << "Данные введены неверно";
	}
	else if (N == 2) {
		cout << "Задание №2\n" << "Ввеести угол а в радианах(0 < a < 2*pi, pi писать не нужно): ";
		int a;
		cin >> a;
		if ((a > 0) && (a < 2))
			cout << "Угол а в градусах: " << 180 * a << endl;
		else
			cout << "Данные введены неверно";
	}
	else if (N == 3) {
		cout << "Задание №3\n" << "Ввести x, a, y: ";
		int x, a, y;
		cin >> x >> a >> y;
		cout << "1 кг и Y кг конфет стоят " << a / x << " и " << a / x * y << " соответственно" << endl;
	}
	else if (N == 4) {
		cout << "Задание №4\n" << "Ввести v1, v2, s, t: ";
		int v1, v2, s, t;
		cin >> v1 >> v2 >> s >> t;
		cout << "Расстояние между автомобилями через t часов = " << s + v1 * t + v2 * t << endl;
	}
	else if (N == 5) {
		cout << "Задание №5\n" << "Ввести а и b (a != 0): ";
		int a, b;
		cin >> a >> b;
		if (a == 0)
			cout << "Ошибка!" << endl;
		else
			cout << "x = " << -b / a << endl;
	}
	else if (N == 6) {
		cout << "Задание №6\n" << "Ввести a1, b1, c1, a2, b2, c2: ";
		int a1, b1, c1, a2, b2, c2, x, y;
		cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
		y = (c2 - a2 * c1 / a1) / (-a2 * b1 / a1 + b2);
		x = (c1 - b1 * y) / a1;
		cout << "x = " << x << ", y = " << y << endl;
	}
}

int main() {
	setlocale(LC_ALL, "");
	cout << "Номер задания: ";
	int N;
	cin >> N;
	tasks(N);
	cout << "Если хотите решить другое задание, напишите 1, иначе - 0 и нажмите Enter: ";
	int otvet;
	cin >> otvet;
	if (otvet == 1)
		main();
	return 0;
}