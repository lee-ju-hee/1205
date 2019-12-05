#include <stdio.h>
int main()
{
	char a[4]={'a','b','c','\0'};
	char b[]="abc";
	char c[8]="abcdefg";
	char *p="abcdefg";
	char q[20];
	int i;
	
	printf("%s\n", a);
	printf("%s b배열의 크기 = %d\n", b, sizeof(b));
	printf("%s\n", c);
	printf(p);
	printf("\n");
	
	for(i=0; i<8; i++)
		printf("%c", p[i]);   // = printf("%c", *(p+i));
		
	printf("이름 입력: ");
	scanf("%s", q);  //배열명에는 &를 붙이지 않는다. 
	
	printf("%c\n", q[0]);
	printf("%s님 반갑습니다.\n", q);
	
	return 0;
}
