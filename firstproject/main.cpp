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
	long double ld1; // >8 байт

	char ch1; // 1 байт -128..127 или 0..255
	wchar_t wc1; // 2 байт 0...65 535
	char8_t ch8; // 1 байт 0..256
	char16_t ch16; // 2 байт 0..65535
	char32_t ch32; // 2 байт 0..2^^32-1

	bool b1; //True or False 1 байт
	std::cout << "char c1 = 'A' "<< CHAR_MIN << " " << CHAR_MAX << " " << "байт:" << sizeof c1 << std::endl;
	std::cout << "unsignedchar c2 = 'А',0.." << UCHAR_MAX<<" байт:" << sizeof c2 << std::endl;
	std::cout << "short s1 = '-24343' " <<SHRT_MIN << " " <<SHRT_MAX<<" байт:" << sizeof s1 << std::endl;
	std::cout << "unsigned short s2 = '12312',0.."<<SHRT_MAX<<" "<< "байт:" << sizeof s2 << std::endl;
	std::cout << "int i1 = '-444444 ',байт:" << sizeof i1 << " " << INT_MIN << " " <<INT_MAX << std::endl;
	std::cout << "unsigned int i2 = '123123',0.."<<UINT_MAX<< " " <<" байт:" << sizeof i2 << std::endl;
	std::cout << "long long l1 = '-123123123', "<<LLONG_MIN<< " " << LLONG_MAX<<" "<< sizeof l1 << std::endl;
	std::cout << "unsigned long long l2 = '1123123',0.."<<ULLONG_MAX<<" " << sizeof l2 << std::endl;
	std::cout << "float f1 = '52.52232333', "<< FLT_MIN<< " " << FLT_MAX <<" байт:" << sizeof f1 << std::endl;
	std::cout << "double d1 = '52.522333223434' "<<DBL_MIN<<" "<< DBL_MAX << " байт:" << sizeof d1 << std::endl;
	std::cout << "long double ld1 = '52.52233322223233434'," <<LDBL_MIN<<" "<<LDBL_MAX<< " байт:" << sizeof ld1 << std::endl;
	std::cout << "bool b1 = 'True', байт:" << sizeof b1 << std::endl;
	
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
	x1 = x;
	y1 = y;
	sum1 = x + y;
	r1 = x - y;
	del1 = x / y;
	del2 = x1 / y1;
	um1 = x * y;
	std::cout << "Сумма x и y == " << sum1 << std::endl;
	std::cout << "Разность x и y == " << r1 << std::endl;
	std::cout << "Деление x на y == " << del1 << std::endl;
	std::cout << "Деление x на y (double) == " << del2 << std::endl;
	std::cout << "Умножение x на y == " << um1 << std::endl;

	
	return 0;

}