#include <stdio.h>
int main()
{
	int i=6;
	int *p;		//포인터 변수는 주소를 담기 때문에  
	int **dp;	//타입에 상관없이 크기(size)가 4바이트입니다. 
	
	p=&i;     //i ≡*p
	dp=&p;    //p ≡*dp 
	
	printf("%x %x %x\n", &i, &p, &dp);
	printf("%x %x %x\n", i, p, dp);
	printf("%d %d %d\n", i, *p, **dp);
	printf("%x %x\n", p+1, p-1); 
	
	return 0;
}
