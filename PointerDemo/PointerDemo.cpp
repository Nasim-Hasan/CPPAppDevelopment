#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 10;    //variable declaration
	int* p;      //pointer variable declaration
	p = &a;        //store address of variable a in pointer p
	printf("Address stored in a variable p is:%x\n", p);  //accessing the address
	printf("Value stored in a variable p is:%d\n", *p);   //accessing the value
	


}