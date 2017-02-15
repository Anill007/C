#include <stdio.h>

int sum ();

int add=0;	
int count=0;
	
int main(){
	
	printf("THE sum of natural number upto 10 is %d ",sum());
	
	return 0;
}

int sum(){
	++count;
	add+=count;
	if(count<10){
		sum();
	}
	else{
		return add;
	}
}
