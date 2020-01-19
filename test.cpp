#include <stdio.h>
int main(){
	float a=0,b=0,t=0;
	scanf("%f%f", &a, &b);
	if(a > b) {
		t = a;
		a = b;
		b = t;
	}
	printf("%5.2f, %5.2f\n", a, b);
	return 0;
}