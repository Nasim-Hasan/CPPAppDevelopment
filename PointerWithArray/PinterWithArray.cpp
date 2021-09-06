#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5] = {10,3,45,67,21 }, i;
	int* p;

	p=a; //..Addressing the Base Value of Array..//

	printf("The Values of the Array Are:\n");

	for(i =0;i<5;i++)
	{
		printf("%d\n",*p);
		*p++;

	}

}

 