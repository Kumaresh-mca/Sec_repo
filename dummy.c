#include <stdio.h>

int main(){
	int x,y,z;
	x = 5;
	y = ++x * x--;
	z = ++y + --y;
	printf("%d %d %d",x,y,z);
	printf("Answer printed");
	return 0;
}
