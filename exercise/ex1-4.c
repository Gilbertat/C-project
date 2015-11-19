#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP   20

/*注意单位问题*/

float unitfahr(float celsius);

int main(int argc, char *argv[])
{
    float celsius = LOWER;
	
	float fahr = 0;
	
	for ( ;celsius <= UPPER; celsius += STEP) {
		fahr = unitfahr(celsius);
		
		printf("摄氏温度:%3.1f°\t   华氏温度:%6.1f°\n",fahr, celsius);
	}	
	
	return 0;
	
}
float unitfahr(float celsius)
{
	float fahr = 0;
	
	fahr = (5.0 / 9.0) * (celsius + 32.0);
	
	return fahr;
}