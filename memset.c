#include <stdio.h>
#include <string.h>

int main(){
	const char str[] = "triyasha.sen";
	const char ch = '#';
	

	printf("String before set initialization is %s \n" , str);
	memset(str, ch, strlen(str));
	
	printf("String after set is %s \n", str);


return (0);


}
