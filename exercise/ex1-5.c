#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP   20

float unitcelsius(int fahr);

int main(int argc, char *argv[])
{
	int fahr = UPPER;
	float celsius = 0.0;
	
	for ( ;fahr >= LOWER; fahr -= STEP) {
		celsius = unitcelsius(fahr);
		printf("华氏%d°   摄氏%3.1f°\n",fahr,celsius);
	}
	
	return 0;
}
float unitcelsius(int fahr)
{
	float celsius = 0.0;
	
	celsius = (5.0/9.0) * (fahr - 32.0);
	
	return celsius; 
}