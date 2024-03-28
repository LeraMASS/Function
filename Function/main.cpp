#include <iostream>;
#include <ctime>
#include <cstdlib>

void say_hi() {//не возвращает 
	std::cout << "Привет, мир!\n";
	std::cout << "Чао какао!\n";
} //можно не коментировать, просто спрятать
void mult_x2(int num ) {
	std::cout << num * 2 << std::endl;
}
int sum(int a, int b) {
	//переменная существует строго внутри функции
	return a + b;//return возврощает результат
}//Истинная функция
void print_arr(int arr[], const int length) {//length длинна массива, принято передавать по константе 
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}
void mult_x5(int num) { //num параметр(копии аргументов)
	num *= 5;
}
void mult_arr_x5(int arr[]) {
	arr[1] *= 5;
}
void pozitiv_indexes(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}
unsigned long long factorial(int num) {
	if (num < 0)
		return 0;
	unsigned long long result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}

int factorial1(int num) {
	int result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Функции не возвращающие значения (процедурные)
	say_hi();

	std::cout << "Введите число -> ";
	std::cin >> n;
	mult_x2(n); //могут рааботать с внешними данными.
	//Вводится число, оно записывается в перееменную в функции.

	//Истинная функция возвращающее значения
	std::cout << "Введиете два числа -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(m, n) << std::endl;

	//Функции принимающие массив
	const int size = 5;
	int arr[size]{ 7, 56, 34, 23,-99 };

	std::cout << "Массив:\n";
	print_arr(arr, size);//вывести массив,передается в скобках название массива и размер


	//Параметры и аргументы функции
	n = 10; //аргумент
	mult_x5(n);
	std::cout << n << std::endl; // 10

	int myarr[3]{ 15, 25, 35 };
	mult_x5(myarr[1]);
	std::cout << myarr[1] << std::endl; // 25

	mult_arr_x5(myarr); //в функцию передается имя массива
	std::cout << myarr[1] << std::endl; // 125

	//Задача 1. Индексы положительных элементов масссива
	std::cout << "Задача 1\n Массив:\n";
	const int size1 = 5;
	int arr1[size1]{ 56, -90, 0, 23, -20};
	print_arr(arr1, size1);

	std::cout << "Индексы положительных элементов:\n";
	pozitiv_indexes(arr1, size1);

	//Задача 2. Функция возвращает значение факториала

	std::cout << "Задача 2. Введите число -> ";
	std::cin >> n;
	std::cout << "! = " << factorial(n) << std::endl;



	return 0;
}