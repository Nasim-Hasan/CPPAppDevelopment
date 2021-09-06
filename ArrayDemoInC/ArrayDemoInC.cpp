#include<stdio.h>
#include<conio.h>

void show(char b[100])
{
	int i;

	for (i=0;i<5;i++)
	{
	      printf("%c",b[i]);
	}


}


void main()
{
	char a[100];
	int i;

	printf("Input Characters:\n");

	for (i=0;i<5;i++)
	{
		scanf_s("%c", &a[i]);
	}

	show(a);


}