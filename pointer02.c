#include <stdio.h>
int main()
{
	int a[]={10, 20, 30, 40, 50};  //배열 이름에는 배열의 시작 주소가 자동으로 할당 
	int *p, i=1;
	
	p=&i;
	
	printf("%d %x\n", i, p);
	
	p=a;  //배열이름에는 주소가 있기 때문에 포인터 변수에 대입이 가능함 
	printf("%d %x %x\n", a[10], a, p);
	printf("%d %d\n", a[0], *p);
	
	for(i=0; i<5; i++)
		printf("%d\n", a[i]);
	
	for(i=0; i<5; i++)
		printf("%d\n", *(p+i));

	for(i=0; i<5; i++)
		printf("%d\n", p[i]);
		
	return 0;
}
