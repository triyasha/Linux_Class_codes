#include <stdio.h>
#include<string.h>

void my_memcopy(char *src, char * dest, int count){
	int i;
	for(i=0;i<count;i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
}

int main(){
	const char str1[10] = "linuxnew";
	const char str2[10];
	
	my_memcopy(str1, str2, 10);

	printf("String in str2 : %s\n", str2);
	return 0;
}
