#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5] = {10,3,45,67,21 }, i;
	int* p;

	p=a; //..Addressing the Base Value of Array..//

	for(i =0;i<5;i++)
	{
		//...Printing Addresses of the Array Elements
		printf("The Adress of the Array Element Is:\n");
		printf("%x\n",p);
		p++;
		
		//..Printing Values of the Array Elements
		printf("The Value of the Array Element Is:\n");
		printf("%d\n",*p);
		*p++;
		
	}

}

 