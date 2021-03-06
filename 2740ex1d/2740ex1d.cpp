// 2740ex1d.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ENTERITEM "Enter Item information:\n"
#define DISPLAYITEM "\nYour item:\n"
#define ITEMNUMBER "Item Number:\t"
#define DESCRIPTION "Description:\t"
#define QUANTITY "Quantity:\t"
#define PRICE "Price:\t\t"
#define VALUE "Value:\t\t"

void numericTypeRanges() {
	char c1, c2;
	unsigned char uc1, uc2;
	short s1, s2;
	unsigned short us1, us2;
	int i1, i2;
	unsigned int ui1, ui2;
	long l1, l2;
	float f1, f2;
	double d1, d2;
	
	// char
	c1 = 127;
	c2 = c1 + 1;
	printf("char: %d %d\n", c1, c2);
	printf("hex: %x %x\n", c1, c2);
	printf("char: %c %c\n", c1, c2);

	// unsigned char: %u
	uc1 = 255;
	uc2 = uc1 + 1;
	printf("unsigned char: %u %u\n", uc1, uc2);
	
	// short: %d
	s1 = 32767;
	s2 = s1 + 1;
	printf("short: %d %d\n", s1, s2);

	// unsigned short: %u
	us1 = 65535;
	us2 = us1 + 1;
	printf("unsigned short: %u %u\n", us1, us2);

	// int: %d
	i1 = 2147483647;
	i2 = i1 + 1;
	printf("int: %d %d\n", i1, i2);

	// int (hexadecimal): %x
	printf("int hex: %x %x\n", i1, i2);

	// unsigned int: %u
	ui1 = 4294967295;
	ui2 = ui1 + 1;
	printf("unsigned int: %u %u\n", ui1, ui2);

	// long: %ld
	l1 = 2147483647;
	l2 = l1 + 1;
	printf("long: %ld %ld\n", l1, l2);

	// float: %f
	f1 = 7654321.0f;
	f2 = f1 + 0.1f;
	printf("float: %f %f\n", f1, f2);

	// double: %lf
	d1 = 9876543210987654.0;
	d2 = d1 + 0.1;
	printf("double: %lf %lf\n", d1, d2);

}

void consoleInput()
{
	int itemNum, quantity;
	char description[20];
	double price;
	char input[20];

	//// Read console input
	printf("\n");
	printf(ENTERITEM);
	printf(ITEMNUMBER);
	scanf_s("%d", &itemNum);
	
	//// Add code to read description, quantity, and price from keyboard
	printf(DESCRIPTION);
	scanf_s("%s", description, 20);
	
	printf(QUANTITY);
	scanf_s("%d", &quantity);

	printf(PRICE);
	scanf_s("%lf", &price);

	//// Display results
	printf(DISPLAYITEM);
	printf("%s%7d\n", ITEMNUMBER, itemNum);

	//// Add code to display description, quantity, price, and total value
	printf("%s%s\n", DESCRIPTION, description);

	printf("%s%7d\n", QUANTITY, quantity);

	printf("%s%7.2f\n", PRICE, price);


	printf("\nPress <Enter> to continue:");
	_getch();
}

int main()
{
	numericTypeRanges();
	consoleInput();

	return 0;
}

/*
Dec Binary Hex
00 00000000 00
01 00000001 01
02 00000010 02
03 00000011 03
04 00000100 04
05 00000101 05
06 00000110 06
07 00000111 07
08 00001000 08
09 00001001 09
10 00001010 0A
11 00001011 0B
12 00001100 0C
13 00001101 0D
14 00001110 0E
15 00001111 0F
16 00010000 10
*/

