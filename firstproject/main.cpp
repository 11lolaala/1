#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	char c1; //1 ���� - 256 �������� -128...127
	unsigned char c2; //1 ���� - 256 �������� 0..255
	short s1; //2 ����� - 65536 �������� -32768..32767 
	unsigned short s2; //2 ����� - 65536 �������� 0..65536
	int i1; //4 ���� - 4_294_967_296 �������� -2_147_483_648...2_147_483_647
	unsigned int i2; // 4 ����� - 4_294_967_296 �������� 0..4_294_967_296
	long long l1; //8 ���� - 2^^64 �������� - 2^^63...2^^63 - 1
	unsigned long long l2; //8 ���� - 2^^64 �������� - 0...2^^64


	float f1; //4 ����� ��������� ����� � ��������� +/- 3.4E-38 �� 3.4E+38
	double d1; //8 ����� ��������� ����� � ��������� +/- 1.7E-308 �� 1.7E+308
	long double ld1; // >8 ����

	char ch1; // 1 ���� -128..127 ��� 0..255
	wchar_t wc1; // 2 ���� 0...65 535
	char8_t ch8; // 1 ���� 0..256
	char16_t ch16; // 2 ���� 0..65535
	char32_t ch32; // 2 ���� 0..2^^32-1

	bool b1; //True or False 1 ����
	std::cout << "char c1 = 'A' "<< CHAR_MIN << " " << CHAR_MAX << " " << "����:" << sizeof c1 << std::endl;
	std::cout << "unsignedchar c2 = '�',0.." << UCHAR_MAX<<" ����:" << sizeof c2 << std::endl;
	std::cout << "short s1 = '-24343' " <<SHRT_MIN << " " <<SHRT_MAX<<" ����:" << sizeof s1 << std::endl;
	std::cout << "unsigned short s2 = '12312',0.."<<SHRT_MAX<<" "<< "����:" << sizeof s2 << std::endl;
	std::cout << "int i1 = '-444444 ',����:" << sizeof i1 << " " << INT_MIN << " " <<INT_MAX << std::endl;
	std::cout << "unsigned int i2 = '123123',0.."<<UINT_MAX<< " " <<" ����:" << sizeof i2 << std::endl;
	std::cout << "long long l1 = '-123123123', "<<LLONG_MIN<< " " << LLONG_MAX<<" "<< sizeof l1 << std::endl;
	std::cout << "unsigned long long l2 = '1123123',0.."<<ULLONG_MAX<<" " << sizeof l2 << std::endl;
	std::cout << "float f1 = '52.52232333', "<< FLT_MIN<< " " << FLT_MAX <<" ����:" << sizeof f1 << std::endl;
	std::cout << "double d1 = '52.522333223434' "<<DBL_MIN<<" "<< DBL_MAX << " ����:" << sizeof d1 << std::endl;
	std::cout << "long double ld1 = '52.52233322223233434'," <<LDBL_MIN<<" "<<LDBL_MAX<< " ����:" << sizeof ld1 << std::endl;
	std::cout << "bool b1 = 'True', ����:" << sizeof b1 << std::endl;
	
	/*int i3;
	std::cout << "������� ����� x __\n";
	std::cin >> i3;
	i3 += 105;
	std::cout << "���� ����� ������ == " << i3 << std::endl;*/
	int x;
	double x1;
	int y;
	double y1;
	int sum1;
	int r1;
	int del1;
	double del2;
	int um1;
	std::cout << "������� ����� x __\n";
	std::cin >> x;
	std::cout << "������� ����� y __\n";
	std::cin >> y;
	x1 = x;
	y1 = y;
	sum1 = x + y;
	r1 = x - y;
	del1 = x / y;
	del2 = x1 / y1;
	um1 = x * y;
	std::cout << "����� x � y == " << sum1 << std::endl;
	std::cout << "�������� x � y == " << r1 << std::endl;
	std::cout << "������� x �� y == " << del1 << std::endl;
	std::cout << "������� x �� y (double) == " << del2 << std::endl;
	std::cout << "��������� x �� y == " << um1 << std::endl;

	
	return 0;

}