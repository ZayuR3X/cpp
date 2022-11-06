#include <stdio.h>
#include <math.h>
//sinüs hesabı

int main () {
		
	int s,f=1,top=0,x,p,z;
	float sin,r;
	printf ("x: ");
	scanf("%d",&x);
	
	r = x * (3.14159 / 180.) ;
	 
	for (s=1; s<=7; s++){
		
		z = 2*s+1;
		for (int i = 1; i<=s; i++)
		{
		p=2*i+1;
		f = f*(p);
		}
		
		top = top + pow(-1,s)*pow(r,z) / f;
	}	
	sin = r - top; 
	printf("sin %0.1f",sin);
	

	return 0;
}
