#include<stdio.h>

int main(){

	//While loop:��X�G�i�쪺N�̭����X�ӼƦr1 
	int n=157,count=0;
	while(n>0){
		if(n%2==1)
			count++;
		n=n/2;
	}
	
	printf("%d",count);
	return 0;
}
