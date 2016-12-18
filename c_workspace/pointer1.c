#include <stdio.h>
int main(){
	int x;
	int *p;
	printf("enter value of num \n");
	scanf("%d",&x);
	p=&x;
	printf("printing value through pointer: %d",*p);

}
