#include <stdio.h>
#include <string.h>

int main(){
	char buf1[10];
	char buf2[10];
	int ret;
	
	memcpy(buf1, "madam", 6);
	memcpy(buf2, "madam", 6);

	ret = memcmp(buf1, buf2, 6);
	
	if(ret > 0){
		printf("buf1 is greater than buf2\n");
	}
	else if(ret <0){
		printf("buf1 is less than buf2\n");
	}
	else{
		printf("buf1 is equal buf2\n");
	}


return (0);


}
