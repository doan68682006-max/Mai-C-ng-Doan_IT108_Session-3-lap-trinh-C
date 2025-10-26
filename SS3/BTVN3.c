#include<stdio.h> 
#include<math.h> 
int main () {
	float r, s, c;
	const float PI = 3.14;
	printf ("ban kinh hinh tron :") ;
	scanf ("%f",&r) ;
	s = pow (r,2) * PI;
	c = 2*PI * r ;
	printf ("dien tich hinh tron : %.2f\n",s) ;
	printf ("chu vi hinh tron : %.2f ",c) ;
	return 0; 
	
	
	
	
	
}
