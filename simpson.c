#include <stdio.h>
#include <math.h>

#define f(x) sin(x)
#define PI 3.14159

int main() {
	
	int i, n = 16;
	float a = 0, b = PI, s1, s2, s3, s;
	float h = (b-a)/n;
	s1 = f(a) + f(b);
	s2 = 0;
	
	for(i=1;i<n-1;i=i+2){
		s2 = s2 + 4*f(a + i*h);
	}
		
	s3 = 0;
	
	for(i=2;i<n-2;i=i+2){
		s3 = s3 + 2*f(a + i*h);
	}
	
	s = (s1 + s2 + s3) * h/3;
	
	printf("Required Integrational Value = %f", s);
	
	return 0;
	
}
