#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b;
	
	float num;
	
	
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d",&a);
	
	printf("�и� �Է��ϼ���:");
	scanf("%d",&b);
	
	num = (float)a/b;
	printf("�������� �����%f",num);
	
	return 0;
}
