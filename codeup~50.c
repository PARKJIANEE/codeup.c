/*//codeup 1001번
#include <stdio.h>
int main()
{
	printf("Hello");

	return 0;
}
*/

/*//codeup 1002번
#include <stdio.h>
int main()
{
	printf("Hello World");
	
	return 0;
}
*/

/*//codeup 1003번
#include <stdio.h>
int main() 
{
	printf("Hello\nWorld");

	return 0;
}
*/

/*//codeup 1004번 
#include <stdio.h>
int main()
{
	printf("\'Hello\'");

	return 0;
}
*/

/*// codeup 1005번
#include <stdio.h>
int main()
{
	printf("\"Hello World\"");
	
	return 0;
}
*/

/*//codeup 1006번
#include <stdio.h>
int main()
{
	printf("\"!@#$%%^&*()\"");

	return 0;
}
*/

/*// codeup 1007번
#include <stdio.h>
int main()
{
	printf("\"C:\\Download\\hello.cpp\"");

	return 0;
}
*/

/*//codeup 1008번
#include <stdio.h>
int main()
{
	printf("\u250C\u252C\u2510\n");
	printf("\u251C\u253C\u2524\n");
	printf("\u2514\u2534\u2518");
	return 0;
}
*/

/*//codeup 1010번
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

/*//codeup 1011번
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

/*//codeup 1012번
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

/*//codeup 1013번
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

/*//codeup 1014번
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

/*//codeup 1015번
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

/*//codeup 1017번
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

/*//codeup 1018번
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

/*//codeup 1019번
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

/*//codeup 1020번
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

/*//codeup 1021번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char data[51] = ""; //[51]처럼 글자 수를 지정하지 않으면 오버플로우 발생 가능.
	scanf("%s", &data); //ex) hello world처럼 띄어쓰기나 ,가 있을경우 hello 까지만 됨.
	printf("%s", data);

	return 0;
}
*/

/*//codeup 1022번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char data[2001]="";
	fgets(data, 2000, stdin); // stdin은 키보드 의미

	//scanf("%[^\n]s",&data); // %[^\n]s을 사용하면 공백을 포함한 문자열을 출력할 수 있음.
	printf("%s", data);

	return 0;
}
*/

/*//codeup 1023번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d.%d", &a, &b);
	//printf("%d\n%d", a, b); // 방법 1 여러가지 방법 있음.
	printf("%d\n", a);
	printf("%d", b);

	return 0;
}
*/

/*//codeup 1024번
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

/*//codeup 1025번
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

/*//codeup 1026번
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

/*//codeup 1027번
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

/*//codeup 1028번
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

/*//codeup 1029번
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

/*//codeup 1030번
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

/*//codeup 1031번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n); //10진수
	printf("%o", n); //8진수 octal=%o

	return 0;
}
*/

/*//codeup 1032번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n); //10진수
	printf("%x", n); //16진수 hexadecimal=%x

	return 0;
}
*/

/*//codeup 1033번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n); //10진수
	printf("%X", n); //16진수 hexadecimal=%x

	return 0;
}
*/

/*//codeup 1034번
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

/*//codeup 1035번
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

/*//codeup 1036번
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

/*//codeup 1037번
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

/*//codeup 1038번
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

/*//codeup 1039번
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

/*//codeup 1040번
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

/*//codeup 1041번
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

/*//codeup 1042번
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

/*//codeup 1043번
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

/*//codeup 1044번
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

/*//codeup 1045번
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
	printf("%.2f", (float)a / (float)b); // (float)으로 줄만 적용.

	return 0;
}
*/

/*//codeup 1046번
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

/*// 1047번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", a << 1); // <<1 2배, >>1 나누기 2, <<2 4배, >>2 나누기 4

	return 0;
}
*/

/*//codeup 1048번
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

/*//codeup 1049번
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

/*//codeup 1050번
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

//codeup 1050번 문제까지 풀이---------------------------------------------

