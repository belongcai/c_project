#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    // ÿ��getchar()���ζ���һ���ַ�
    while ((c=getchar())!='\n')
        printf("%c",c);  // ����ԭ�����
}