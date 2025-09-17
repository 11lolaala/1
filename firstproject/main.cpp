#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	char c1; //1 байт - 256 значений -128...127
	unsigned char c2; //1 байт - 256 значений 0..255
	short s1; //2 байта - 65536 значений -32768..32767 
	unsigned short s2; //2 байта - 65536 значений 0..65536
	int i1; //4 байт - 4_294_967_296 значений -2_147_483_648...2_147_483_647
	unsigned int i2; // 4 байта - 4_294_967_296 значений 0..4_294_967_296
	long long l1; //8 байт - 2^^64 значений - 2^^63...2^^63 - 1
	unsigned long long l2; //8 байт - 2^^64 значений - 0...2^^64


	float f1; //4 байта плавающая точка в диапазоне +/- 3.4E-38 до 3.4E+38
	double d1; //8 байта плавающая точка в диапазоне +/- 1.7E-308 до 1.7E+308
	long double; // >8 байт

	char ch1; // 1 байт -128..127 или 0..255
	wchar_t wc1; // 2 байт 0...65 535
	char8_t ch8; // 1 байт 0..256
	char16_t ch16; // 2 байт 0..65535
	char32_t ch32; // 2 байт 0..2^^32-1

	bool b1; //True or False 1 байт
	std::cout << "char c1 = '-123' -128...127 1 байт\n";
	std::cout << "unsignedchar c2 = '123' 0...256 1 байт\n";
	std::cout << "short s1 = '-24343' 2 байта -32768..32767\n";
	std::cout << "unsigned short s2 = '12312' 2 байта 0..65536\n";
	std::cout << "int i1 = '-444444 '4 байт -2^^31...2^^31-1\n";
	std::cout << "unsigned int i2 = '123123' 4 байта 0..2^^32\n";
	std::cout << "long long l1 = '-123123123' 8 байт -2^^63...2^^63 - 1\n";
	std::cout << "unsigned long long l2 = '1123123' 8 байт 0...2^^64\n";
	std::cout << "float f1 = '52.52232333 4 байт\n";
	std::cout << "double d1 = '52.522333223434 8 байт\n";
	std::cout << "long double ld1 = '52.52233322223233434 >8 байт\n";
	std::cout << "char ch1 = 'abc 1 байт -128..127 or 0..255\n";
	std::cout << "bool b1 = 'True' 1 байт True or False\n";
	/*int i3;
	std::cout << "Введите число x __\n";
	std::cin >> i3;
	i3 += 105;
	std::cout << "Ваше новое чилсло == " << i3 << std::endl;*/
	int x;
	double x1;
	int y;
	double y1;
	int sum1;
	int r1;
	int del1;
	double del2;
	int um1;
	std::cout << "Введите число x __\n";
	std::cin >> x;
	std::cout << "Введите число y __\n";
	std::cin >> y;
	sum1 = x + y;
	r1 = x - y;
	del1 = x / y;
	del2 = x / y;
	um1 = x * y;
	std::cout << "Сумма x и y == " << sum1 << std::endl;
	std::cout << "Разность x и y == " << r1 << std::endl;
	std::cout << "Деление x на y == " << del1 << std::endl;
	std::cout << "Умножение x на y == " << um1 << std::endl;

	return 0;
}