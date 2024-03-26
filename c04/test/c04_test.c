#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "test_tool/test_tool.c"

#include "../ex00/ft_strlen.c"
#include "../ex01/ft_putstr.c"
#include "../ex02/ft_putnbr.c"
#include "../ex03/ft_atoi.c"
#include "../ex04/ft_putnbr_base.c"
#include "../ex05/ft_atoi_base.c"



void ex00(int expect);
void ex01(int expect);
void ex02(int expect);
void ex03(int expect);
void ex04(int expect);
void ex05(int expect);

int main(){
    print_answer(0, "ft_strlen.c", ex00);
    print_answer(1, "ft_putstr.c", ex01);
    print_answer(2, "ft_putnbr.c", ex02);
    print_answer(3, "ft_atoi.c", ex03);
    print_answer(4, "ft_putnbr_base.c", ex04);
    print_answer(5, "ft_atoi_base.c", ex05);

    return 0;
}

void ex00(int expect)
{
    char *s1 = "asdfqwer";
    char *s2 = "";
    char *s3 = "asdfQw";

    if(expect == COMMON_DESCRIPTION)
    {

    }
    else if(expect == RIGHT_ANSWER)
    {
        printf("\"%s\" -> %d\n", s1, (int)strlen(s1));
        printf("\"%s\" -> %d\n", s2, (int)strlen(s2));
        printf("\"%s\" -> %d\n", s3, (int)strlen(s3));
    }
    else if (expect == USER_ANSWER)
    {
        printf("\"%s\" -> %d\n", s1, ft_strlen(s1));
        printf("\"%s\" -> %d\n", s2, ft_strlen(s2));
        printf("\"%s\" -> %d\n", s3, ft_strlen(s3));
    }
}

void ex01(int expect)
{
    char *s1 = "asdfqwer";
    char *s2 = "as   d";
    char *s3 = "asdfQw";

    if(expect == COMMON_DESCRIPTION)
    {
        
    }
    else if(expect == RIGHT_ANSWER)
    {
        printf("%s\n", s1);
        printf("%s\n", s2);
        printf("%s\n", s3);
    }
    else if(expect == USER_ANSWER)
    {
        ft_putstr(s1);
        printf("\n");

        ft_putstr(s2);
        printf("\n");
        
        ft_putstr(s3);
        printf("\n");
    }
}

void ex02(int expect)
{
    int a = 2147483647;
    int b = -2147483648;
    int c = -5;
    int d = 0;

    if(expect == COMMON_DESCRIPTION)
    {

    }
    else if(expect == RIGHT_ANSWER)
    {
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
        printf("%d\n",d);
    }
    else if (expect == USER_ANSWER)
    {
        ft_putnbr(a);
        printf("\n");
        ft_putnbr(b);
        printf("\n");
        ft_putnbr(c);
        printf("\n");
        ft_putnbr(d);
        printf("\n");
    }
}

void ex03(int expect)
{
    char s1[20] = "0";
    char s2[20] = "-+--12340";
    char s3[40] = " \t\v\n---+--+1234ab567";
    char s4[40] = "   -+--1230--44";
    char s5[30] = "  -+-+1233 231+";

    if(expect == COMMON_DESCRIPTION)
    {

    }
    else if(expect == RIGHT_ANSWER)
    {
        printf("\"%s\" -> %d\n", s1, atoi(s1));
        printf("\"%s\" -> %d\n", s2, -12340);
        printf("\"%s\" -> %d\n", s3, -1234);
        printf("\"%s\" -> %d\n", s4, -1230);
        printf("\"%s\" -> %d\n", s5, 1233);
    }
    else if (expect == USER_ANSWER)
    {
        printf("\"%s\" -> %d\n", s1, ft_atoi(s1));
        printf("\"%s\" -> %d\n", s2, ft_atoi(s2));
        printf("\"%s\" -> %d\n", s3, ft_atoi(s3));
        printf("\"%s\" -> %d\n", s4, ft_atoi(s4));
        printf("\"%s\" -> %d\n", s5, ft_atoi(s5));
    }
}

void ex04(int expect)
{
    char *b1 = "asdfgqwert";
    char *b2 = "01";
    char *b3 = "0123456789ABCDEF";
    char *b4 = "asdfq+wer";
    char *b5 = "asdfqwera";
    char *b6 = "2";

    int n = 123456789;
    int n2 = -123456789;
    int n3 = -2147483648;

    if(expect == COMMON_DESCRIPTION)
    {

    }
    else if(expect == RIGHT_ANSWER)
    {
        printf("number: %d, base: \"%s\" -> \n", n, b1);
        printf("%s\n\n", "sdfgqwert");

        printf("number: %d, base: \"%s\" -> \n", n, b2);
        printf("%s\n\n", "111010110111100110100010101");

        printf("number: %d, base: \"%s\" -> \n", n3, b1);
        printf("%s\n\n", "-dsgegrfwgr");

        printf("number: %d, base: \"%s\" -> \n", n2, b2);
        printf("%s\n\n", "-111010110111100110100010101");

        printf("number: %d, base: \"%s\" -> \n", n, b3);
        printf("%s\n\n", "75BCD15");
        
        printf("number: %d, base: \"%s\" -> \n", n, b4);
        printf("%s\n\n", "");

        printf("number: %d, base: \"%s\" -> \n", n, b5);
        printf("%s\n\n", "");

        printf("number: %d, base: \"%s\" -> \n", n, b6);
        printf("%s\n\n", "");
    }
    else if (expect == USER_ANSWER)
    {
        printf("number: %d, base: \"%s\" -> \n", n, b1);
        ft_putnbr_base(n, b1);
        printf("\n\n");

        printf("number: %d, base: \"%s\" -> \n", n, b2);
        ft_putnbr_base(n, b2);
        printf("\n\n");

        printf("number: %d, base: \"%s\" -> \n", n3, b1);
        ft_putnbr_base(n3, b1);
        printf("\n\n");

        printf("number: %d, base: \"%s\" -> \n", n2, b2);
        ft_putnbr_base(n2, b2);
        printf("\n\n");

        printf("number: %d, base: \"%s\" -> \n", n, b3);
        ft_putnbr_base(n, b3);
        printf("\n\n");

        printf("number: %d, base: \"%s\" -> \n", n, b4);
        ft_putnbr_base(n, b4);
        printf("\n\n");

        printf("number: %d, base: \"%s\" -> \n", n, b5);
        ft_putnbr_base(n, b5);
        printf("\n\n");

        printf("number: %d, base: \"%s\" -> \n", n, b6);
        ft_putnbr_base(n, b6);
        printf("\n\n");

    }
}

void ex05(int expect)
{
    char *b1 = "asdfgqwert";
    char *b2 = "01";
    char *b3 = "0123456789ABCDEF";
    char *b4 = "asdfq+wer";
    char *b5 = "asdfqwera";
    char *b6 = "2";

    char *s1 = "sdfgqwert";
    char *s2 = "111010110111100110100010101";
    char *s3 = "75BCD15";
    char *s4 = "asdf+qq";
    char *s5 = "aaaaaa";
    char *s6 = "22222222";

    int n = 123456789;

    if(expect == COMMON_DESCRIPTION)
    {

    }
    else if(expect == RIGHT_ANSWER)
    {
        printf("string: \"%s\", base: \"%s\" -> %d\n", s1, b1, n);
        printf("string: \"%s\", base: \"%s\" -> %d\n", s2, b2, n);
        printf("string: \"%s\", base: \"%s\" -> %d\n", s3, b3, n);
        printf("string: \"%s\", base: \"%s\" -> %d\n", s4, b4, 0);
        printf("string: \"%s\", base: \"%s\" -> %d\n", s5, b5, 0);
        printf("string: \"%s\", base: \"%s\" -> %d\n", s6, b6, 0);
    }
    else if (expect == USER_ANSWER)
    {
        printf("string: \"%s\", base: \"%s\" -> %d\n", s1, b1, ft_atoi_base(s1,b1));
        printf("string: \"%s\", base: \"%s\" -> %d\n", s2, b2, ft_atoi_base(s2,b2));
        printf("string: \"%s\", base: \"%s\" -> %d\n", s3, b3, ft_atoi_base(s3,b3));
        printf("string: \"%s\", base: \"%s\" -> %d\n", s4, b4, ft_atoi_base(s4,b4));
        printf("string: \"%s\", base: \"%s\" -> %d\n", s5, b5, ft_atoi_base(s5,b5));
        printf("string: \"%s\", base: \"%s\" -> %d\n", s6, b6, ft_atoi_base(s6,b6));
    }
}