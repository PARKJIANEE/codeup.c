/*//codeup 1001��
#include <stdio.h>
int main()
{
	printf("Hello");

	return 0;
}
*/

/*//codeup 1002��
#include <stdio.h>
int main()
{
	printf("Hello World");
	
	return 0;
}
*/

/*//codeup 1003��
#include <stdio.h>
int main() 
{
	printf("Hello\nWorld");

	return 0;
}
*/

/*//codeup 1004�� 
#include <stdio.h>
int main()
{
	printf("\'Hello\'");

	return 0;
}
*/

/*// codeup 1005��
#include <stdio.h>
int main()
{
	printf("\"Hello World\"");
	
	return 0;
}
*/

/*//codeup 1006��
#include <stdio.h>
int main()
{
	printf("\"!@#$%%^&*()\"");

	return 0;
}
*/

/*// codeup 1007��
#include <stdio.h>
int main()
{
	printf("\"C:\\Download\\hello.cpp\"");

	return 0;
}
*/

/*//codeup 1008��
#include <stdio.h>
int main()
{
	printf("\u250C\u252C\u2510\n");
	printf("\u251C\u253C\u2524\n");
	printf("\u2514\u2534\u2518");
	return 0;
}
*/

/*//codeup 1010��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", n);

	return 0;
}
*/

/*//codeup 1011��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char x;
	scanf("%c", &x);
	printf("%c", x);

	return 0;
}
*/

/*//codeup 1012��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float x;
	scanf("%f", &x);
	printf("%f", x);

	return 0;
}
*/

/*//codeup 1013��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d", a, b);

	return 0;
}
*/

/*//codeup 1014��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char x, y;
	scanf("%c %c", &x, &y);
	printf("%c %c", y, x);

	return 0;
}
*/

/*//codeup 1015��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	printf("%.2f", a);

	return 0;
}
*/

/*//codeup 1017��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d %d %d", a, a, a);

	return 0;
}
*/

/*//codeup 1018��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int h, m;
	scanf("%d:%d", &h, &m);
	printf("%d:%d", h, m);

	return 0;
}
*/

/*//codeup 1019��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int y, m, d;
	scanf("%04d.%02d.%02d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d);

	return 0;
}
*/

/*//codeup 1020��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int y, m, d;
	scanf("%06d-%07d", &y, &m, &d);
	printf("%06d%07d", y, m, d);

	return 0;
}
*/

/*//codeup 1021��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char data[51] = ""; //[51]ó�� ���� ���� �������� ������ �����÷ο� �߻� ����.
	scanf("%s", &data); //ex) hello worldó�� ���⳪ ,�� ������� hello ������ ��.
	printf("%s", data);

	return 0;
}
*/

/*//codeup 1022��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char data[2001]="";
	fgets(data, 2000, stdin); // stdin�� Ű���� �ǹ�

	//scanf("%[^\n]s",&data); // %[^\n]s�� ����ϸ� ������ ������ ���ڿ��� ����� �� ����.
	printf("%s", data);

	return 0;
}
*/

/*//codeup 1023��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d.%d", &a, &b);
	//printf("%d\n%d", a, b); // ��� 1 �������� ��� ����.
	printf("%d\n", a);
	printf("%d", b);

	return 0;
}
*/

/*//codeup 1024��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char txt[30] = "";
	scanf("%s", &txt);
	for (int i = 0; txt[i] != '\0'; i++) { // \0 = NULL
		printf("\'%c\'\n", txt[i]);
	}
	return 0;
}
*/

/*//codeup 1025��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]", a*10000,b*1000,c*100,d*10,e);

	return 0;
}
*/

/*//codeup 1026��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int h, m, s;
	scanf("%02d:%02d:%02d", &h, &m, &s);
	printf("%d", m);

	return 0;
}
*/

/*//codeup 1027��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int y, m, d;
	scanf("%04d.%02d.%02d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);

	return 0;
}
*/

/*//codeup 1028��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	unsigned int n;
	scanf("%u", &n);
	printf("%u", n);

	return 0;
}
*/

/*//codeup 1029��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double n;
	scanf("%lf", &n);
	printf("%.11lf", n);

	return 0;
}
*/

/*//codeup 1030��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int n;
	scanf("%lld", &n);
	printf("%lld", n);

	return 0;
}
*/

/*//codeup 1031��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n); //10����
	printf("%o", n); //8���� octal=%o

	return 0;
}
*/

/*//codeup 1032��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n); //10����
	printf("%x", n); //16���� hexadecimal=%x

	return 0;
}
*/

/*//codeup 1033��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n); //10����
	printf("%X", n); //16���� hexadecimal=%x

	return 0;
}
*/

/*//codeup 1034��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%o", &n);
	printf("%d", n);

	return 0;
}
*/

/*//codeup 1035��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%x", &n);
	printf("%o", n);

	return 0;
}
*/

/*//codeup 1036��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char n;
	scanf("%c", &n);
	printf("%d", n);

	return 0;
}
*/

/*//codeup 1037��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%c", n);

	return 0;
}
*/

/*//codeup 1038��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", a + b);

	return 0;
}
*/

/*//codeup 1039��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", a + b);

	return 0;
}
*/

/*//codeup 1040��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", -n); // - - => + | - => + | + => -

	return 0;
}
*/

/*//codeup 1041��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a;
	scanf("%c", &a);
	printf("%c", a + 1);

	return 0;
}
*/

/*//codeup 1042��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a / b);

	return 0;
}
*/

/*//codeup 1043��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a % b);

	return 0;
}
*/

/*//codeup 1044��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int a;
	scanf("%lld", &a);
	printf("%lld", a + 1);

	return 0;
}
*/

/*//codeup 1045��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2f", (float)a / (float)b); // (float)���� �ٸ� ����.

	return 0;
}
*/

/*//codeup 1046��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a + b + c);
	printf("%.1f\n", (float)(a + b + c) / 3);

	return 0;
}
*/

/*// 1047��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", a << 1); // <<1 2��, >>1 ������ 2, <<2 4��, >>2 ������ 4

	return 0;
}
*/

/*//codeup 1048��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a << b); //  a<<b = 2^b

	return 0;
}
*/

/*//codeup 1049��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a > b);

	return 0;
}
*/

/*//codeup 1050��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a == b);

	return 0;
}
*/

//codeup 1050�� �������� Ǯ��---------------------------------------------

