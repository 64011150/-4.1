#include<stdio.h>
int main(){
int a,b,c,d,e,f;
scanf_s("%d", &a);
scanf_s("%d",&b);
scanf_s("%d",&c);
if (a < b && a < c) 
	d = a;
else if (a < b && a > c) 
	d = a;
else if (a < c && a > b) 
	d = a;
if (b < c) 
	e = b;
else if (c < b)
	e = c;

f = d + e;
printf("%d", f);
	return 0;
}