#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void findANDreplace(char* str, char* resault);
void convert(float y, float z, char* str);

int main()
{
	setlocale(LC_ALL, "RUS");
	float y, z;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
	char res[500];
	convert(y, z, res);
	cout << res << endl;
	char* str1 = new char[2500];
	char* str2 = new char[2500];
	strcpy(str1, "1 2 3 4 5 6 7 8 9 0");
	findANDreplace(str1, str2);
	cout << str1 << endl;
	cout << str2 << endl;
	delete[]str1;
	delete[]str2;
}
void convert(float y, float z, char* str)
{
	double x = y-3.0/z;  //X= Y-3.0/Z.
	sprintf(str, "%5f = %5f-3.0/%5f", x, y, z);
}

void findANDreplace(char* str_l, char* resault_l) {
	memset(resault_l, 0, sizeof(char) * 2500);
	
	char result[2500] = {};
	for (int i = 0; i < strlen(str_l); i++) {
		switch (str_l[i])
		{
		case '0':
			strcat(result, "zero");
			break;
		case '1':
			strcat(result, "one");
			break;
		case '2':
			strcat(result, "two");
			break;
		case '3':
			strcat(result, "three");
			break;
		case '4':
			strcat(result, "four");
			break;
		case '5':
			strcat(result, "five");
			break;
		case '6':
			strcat(result, "six");
			break;
		case '7':
			strcat(result, "seven");
			break;
		case '8':
			strcat(result, "eight");
			break;
		case '9':
			strcat(result, "nine");
			break;
		default:
			strncat(result, &str_l[i], 1);
			break;
		}
	}
	for (int i = 0; i < strlen(result); i++) {
		resault_l[i] = result[i];
	}
}