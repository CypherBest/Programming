#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_CTYPE,"");
	double result = 0, e;
	printf("������� �\n");
	double x;
	scanf("%lf", &x);
	printf("x = %lf\n", x);
	printf("������� �=");
	scanf("%lf",&e);
	int i = 0;
     double d=x,d2;
	do
	{

		i++;
        d*=x/i;
        d2=(i+1)*2*d;
        result +=d2;
		printf("��������� ����� %d-�� ����� = %lf\n", i, result);
	}
	while(fabs(d2)>e);
	printf("����� %d ������ = %lf", i, result);
	return 0;
}
