#include<stdio.h>

int x=10;
int demo(int x);

int main()
{
	demo(x);
	printf("%d\n",x);  // x=10,global variable
	return 0;
}
int demo(int x)
{
	x=1;
	printf("%d\n",x);  // x=1,local variable 
	return 0;
}
