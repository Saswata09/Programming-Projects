#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    printf("ENTER THE CHOICE NUMBER OF YOUR LIKING OF BASE CONVERSION\n");
    printf("CASE 1: DECIMAL TO BINARY\n");
    printf("CASE 2: DECIMAL TO OCTAL\n");
    printf("CASE 3: DECIMAL TO HEXADECIMAL\n");
    printf("CASE 4: BINARY TO DECIMAL\n");
    printf("CASE 5: BINARY TO OCTAL\n");
    printf("CASE 6: BINARY TO HEXADECIMAL\n");
    printf("CASE 7: OCTAL TO BINARY\n");
    printf("CASE 8: OCTAL TO DECIMAL\n");
    printf("CASE 9: OCTAL TO HEXADECIMAL\n");
    printf("CASE 10: HEXADECIMAL TO BINARY\n");
    printf("CASE 11: HEXADECIMAL TO DECIMAL\n");
    printf("CASE 12: HEXADECIMAL TO OCTAL\n");
    printf("ENTER YOUR CHOICE\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        double num;
        printf("ENTER THE DECIMAL NUMBER\n");
        scanf("%lf", &num);
        int m = (int)num;
        double nym = num - m;
        char str[100];
        itoa(m, str, 10);
        char chr[100];
        int n = m;
        int i = 0;
        while (n > 0)
        {
            int d = n % 2;
            char ch = d + '0';
            chr[i] = ch;
            i = i + 1;
            n = n / 2;
        }
        chr[i] = '\0';
        int len = strlen(chr);
        char bin[100];
        int k1 = 0;
        for (int j = len - 1; j >= 0; j--)
        {
            bin[k1] = chr[j];
            k1 = k1 + 1;
        }
        bin[k1] = '\0';
        printf("THE BINARY EQUIVALENT IS %s", bin);
        double nm[10];
        int flag = 0;
        double h = nym;
        double nh;
        char chrw[100];
        chrw[0] = '.';
        int y = 1;
        int j = 0;
        while (flag == 0)
        {
            nh = h * 2;
            double nh1 = nh;
            int m = (int)nh1;
            nh = nh - m;
            char ch;
            ch = m + '0';
            chrw[y] = ch;
            y = y + 1;
            for (int k = 0; k < j; k++)
            {
                if (nh == nm[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                nm[j] = nh;
                j = j + 1;
                h = nh;
            }
            else if (flag == 1)
            {
                chrw[j + 1] = '\0';
                printf("%s", chrw);
            }
        }
        break;
    }
    case 2:
    {
        double num;
        printf("ENTER THE DECIMAL NUMBER\n");
        scanf("%lf", &num);
        int m = (int)num;
        double nym = num - m;
        char str[100];
        itoa(m, str, 10);
        char chr[100];
        int n = m;
        int i = 0;
        while (n > 0)
        {
            int d = n % 8;
            char ch = d + '0';
            chr[i] = ch;
            i = i + 1;
            n = n / 8;
        }
        chr[i] = '\0';
        int len = strlen(chr);
        char bin[100];
        int k1 = 0;
        for (int j = len - 1; j >= 0; j--)
        {
            bin[k1] = chr[j];
            k1 = k1 + 1;
        }
        bin[k1] = '\0';
        printf("THE OCTAL EQUIVALENT IS %s", bin);
        double nm[10];
        int flag = 0;
        double h = nym;
        double nh;
        char chrw[100];
        chrw[0] = '.';
        int y = 1;
        int j = 0;
        while (flag == 0)
        {
            nh = h * 8;
            double nh1 = nh;
            int m = (int)nh1;
            nh = nh - m;
            char ch;
            ch = m + '0';
            chrw[y] = ch;
            y = y + 1;
            for (int k = 0; k < j; k++)
            {
                if (nh == nm[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                nm[j] = nh;
                j = j + 1;
                h = nh;
            }
            else if (flag == 1)
            {
                chrw[j + 1] = '\0';
                printf("%s", chrw);
            }
        }
        break;
    }
    case 3:
    {
        double num;
        printf("ENTER THE DECIMAL NUMBER\n");
        scanf("%lf", &num);
        int m = (int)num;
        double nym = num - m;
        char hex[] = {'A', 'B', 'C', 'D', 'E', 'F'};
        char chr[100];
        int n = m;
        int i = 0;
        while (n > 0)
        {
            int d = n % 16;
            char ch;
            if (d > 9)
            {
                ch = hex[d - 10];
            }
            else
            {
                ch = d + '0';
            }
            chr[i] = ch;
            i = i + 1;
            n = n / 16;
        }
        chr[i] = '\0';
        int len = strlen(chr);
        char bin[100];
        int k = 0;
        for (int j = len - 1; j >= 0; j--)
        {
            bin[k] = chr[j];
            k = k + 1;
        }
        bin[k] = '\0';
        printf("THE HEXADECIMAL EQUIVALENT IS %s", bin);
        double nm[10];
        int flag = 0;
        double h = nym;
        double nh;
        char chrw1[100];
        chrw1[0] = '.';
        int i1 = 1;
        int j = 0;
        while (flag == 0)
        {
            nh = h * 16;
            double nh1 = nh;
            int m = (int)nh1;
            nh = nh - m;
            char ch;
            if (m > 9)
            {
                int q = m - 10;
                ch = hex[q];
            }
            else
            {
                ch = m + '0';
            }
            chrw1[i1] = ch;
            i1 = i1 + 1;
            for (int k = 0; k < j; k++)
            {
                if (nh == nm[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                nm[j] = nh;
                j = j + 1;
                h = nh;
            }
            else if (flag == 1)
            {
                chrw1[j + 1] = '\0';
                printf("%s", chrw1);
            }
        }
        break;
    }
    case 4:
    {
        char nm[100];
        printf("ENTER THE BINARY NUMBER\n");
        scanf("%s", &nm);
        int leng = strlen(nm);
        double sum = 0;
        int fl = 0;
        int v = 0;
        int c = 0;
        for (int i = 0; i < leng; i++)
        {
            if (nm[i - 1] == '.')
            {
                v = c;
            }
            c = c + 1;
        }
        int j = v - 2;
        for (int i = 0; i < leng; i++)
        {
            if (nm[i] == '.')
            {
                fl = 1;
            }
            else
            {
                int val = nm[i] - '0';
                double b = pow(2, j);
                j = j - 1;
                b = b * val;
                sum = sum + b;
            }
        }
        printf("THE DECIMAL EQUIVALENT %lf", sum);
        break;
    }
    case 5:
    {
        char nm1[100];
        printf("ENTER THE BINARY NUMBER\n");
        scanf("%s", &nm1);
        int leng = strlen(nm1);
        double sum = 0;
        int fl = 0;
        int v = 0;
        int c = 0;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i - 1] == '.')
            {
                v = c;
            }
            c = c + 1;
        }
        int j1 = v - 2;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i] == '.')
            {
                fl = 1;
            }
            else
            {
                int val = nm1[i] - '0';
                double b = pow(2, j1);
                j1 = j1 - 1;
                b = b * val;
                sum = sum + b;
            }
        }
        int m = (int)sum;
        double nym = sum - m;
        char str[100];
        itoa(m, str, 10);
        char chr[100];
        int n = m;
        int i = 0;
        while (n > 0)
        {
            int d = n % 8;
            char ch = d + '0';
            chr[i] = ch;
            i = i + 1;
            n = n / 8;
        }
        chr[i] = '\0';
        int len = strlen(chr);
        char bin[100];
        int k1 = 0;
        for (int j = len - 1; j >= 0; j--)
        {
            bin[k1] = chr[j];
            k1 = k1 + 1;
        }
        bin[k1] = '\0';
        printf("THE OCTAL EQUIVALENT IS %s", bin);
        double nm[10];
        int flag = 0;
        double h = nym;
        double nh;
        char chrw[100];
        chrw[0] = '.';
        int y = 1;
        int j = 0;
        while (flag == 0)
        {
            nh = h * 8;
            double nh1 = nh;
            int m = (int)nh1;
            nh = nh - m;
            char ch;
            ch = m + '0';
            chrw[y] = ch;
            y = y + 1;
            for (int k = 0; k < j; k++)
            {
                if (nh == nm[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                nm[j] = nh;
                j = j + 1;
                h = nh;
            }
            else if (flag == 1)
            {
                chrw[j + 1] = '\0';
                printf("%s", chrw);
            }
        }
        break;
    }
    case 6:
    {
        char nm1[100];
        printf("ENTER THE BINARY NUMBER\n");
        scanf("%s", &nm1);
        int leng = strlen(nm1);
        double sum = 0;
        int fl = 0;
        int v = 0;
        int c = 0;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i - 1] == '.')
            {
                v = c;
            }
            c = c + 1;
        }
        int j1 = v - 2;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i] == '.')
            {
                fl = 1;
            }
            else
            {
                int val = nm1[i] - '0';
                double b = pow(2, j1);
                j1 = j1 - 1;
                b = b * val;
                sum = sum + b;
            }
        }
        int m = (int)sum;
        double nym = sum - m;
        char hex[] = {'A', 'B', 'C', 'D', 'E', 'F'};
        char chr[100];
        int n = m;
        int i = 0;
        while (n > 0)
        {
            int d = n % 16;
            char ch;
            if (d > 9)
            {
                ch = hex[d - 10];
            }
            else
            {
                ch = d + '0';
            }
            chr[i] = ch;
            i = i + 1;
            n = n / 16;
        }
        chr[i] = '\0';
        int len = strlen(chr);
        char bin[100];
        int k = 0;
        for (int j = len - 1; j >= 0; j--)
        {
            bin[k] = chr[j];
            k = k + 1;
        }
        bin[k] = '\0';
        printf("THE HEXADECIMAL EQUIVALENT IS %s", bin);
        double nm[10];
        int flag = 0;
        double h = nym;
        double nh;
        char chrw1[100];
        chrw1[0] = '.';
        int i1 = 1;
        int j = 0;
        while (flag == 0)
        {
            nh = h * 16;
            double nh1 = nh;
            int m = (int)nh1;
            nh = nh - m;
            char ch;
            if (m > 9)
            {
                int q = m - 10;
                ch = hex[q];
            }
            else
            {
                ch = m + '0';
            }
            chrw1[i1] = ch;
            i1 = i1 + 1;
            for (int k = 0; k < j; k++)
            {
                if (nh == nm[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                nm[j] = nh;
                j = j + 1;
                h = nh;
            }
            else if (flag == 1)
            {
                chrw1[j + 1] = '\0';
                printf("%s", chrw1);
            }
        }
        break;
    }
    case 7:
    {
        char nm1[100];
        printf("ENTER THE OCTAL NUMBER\n");
        scanf("%s", &nm1);
        int leng = strlen(nm1);
        double sum = 0;
        int fl = 0;
        int v = 0;
        int c = 0;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i - 1] == '.')
            {
                v = c;
            }
            c = c + 1;
        }
        int j1 = v - 2;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i] == '.')
            {
                fl = 1;
            }
            else
            {
                int val = nm1[i] - '0';
                double b = pow(8, j1);
                j1 = j1 - 1;
                b = b * val;
                sum = sum + b;
            }
        }
        int m = (int)sum;
        double nym = sum - m;
        char str[100];
        itoa(m, str, 10);
        char chr[100];
        int n = m;
        int i = 0;
        while (n > 0)
        {
            int d = n % 2;
            char ch = d + '0';
            chr[i] = ch;
            i = i + 1;
            n = n / 2;
        }
        chr[i] = '\0';
        int len = strlen(chr);
        char bin[100];
        int k1 = 0;
        for (int j = len - 1; j >= 0; j--)
        {
            bin[k1] = chr[j];
            k1 = k1 + 1;
        }
        bin[k1] = '\0';
        printf("THE BINARY EQUIVALENT IS %s", bin);
        double nm[10];
        int flag = 0;
        double h = nym;
        double nh;
        char chrw[100];
        chrw[0] = '.';
        int y = 1;
        int j = 0;
        while (flag == 0)
        {
            nh = h * 2;
            double nh1 = nh;
            int m = (int)nh1;
            nh = nh - m;
            char ch;
            ch = m + '0';
            chrw[y] = ch;
            y = y + 1;
            for (int k = 0; k < j; k++)
            {
                if (nh == nm[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                nm[j] = nh;
                j = j + 1;
                h = nh;
            }
            else if (flag == 1)
            {
                chrw[j + 1] = '\0';
                printf("%s", chrw);
            }
        }
        break;
    }
    case 8:
    {
        char nm[100];
        printf("ENTER THE OCTAL NUMBER\n");
        scanf("%s", &nm);
        int leng = strlen(nm);
        double sum = 0;
        int fl = 0;
        int v = 0;
        int c = 0;
        for (int i = 0; i < leng; i++)
        {
            if (nm[i - 1] == '.')
            {
                v = c;
            }
            c = c + 1;
        }
        int j = v - 2;
        for (int i = 0; i < leng; i++)
        {
            if (nm[i] == '.')
            {
                fl = 1;
            }
            else
            {
                int val = nm[i] - '0';
                double b = pow(8, j);
                j = j - 1;
                b = b * val;
                sum = sum + b;
            }
        }
        printf("THE DECIMAL EQUIVALENT %lf", sum);
        break;
    }
    case 9:
    {
        char nm1[100];
        printf("ENTER THE OCTAL NUMBER\n");
        scanf("%s", &nm1);
        int leng = strlen(nm1);
        double sum = 0;
        int fl = 0;
        int v = 0;
        int c = 0;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i - 1] == '.')
            {
                v = c;
            }
            c = c + 1;
        }
        int j1 = v - 2;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i] == '.')
            {
                fl = 1;
            }
            else
            {
                int val = nm1[i] - '0';
                double b = pow(8, j1);
                j1 = j1 - 1;
                b = b * val;
                sum = sum + b;
            }
        }
        int m = (int)sum;
        double nym = sum - m;
        char hex[] = {'A', 'B', 'C', 'D', 'E', 'F'};
        char chr[100];
        int n = m;
        int i = 0;
        while (n > 0)
        {
            int d = n % 16;
            char ch;
            if (d > 9)
            {
                ch = hex[d - 10];
            }
            else
            {
                ch = d + '0';
            }
            chr[i] = ch;
            i = i + 1;
            n = n / 16;
        }
        chr[i] = '\0';
        int len = strlen(chr);
        char bin[100];
        int k = 0;
        for (int j = len - 1; j >= 0; j--)
        {
            bin[k] = chr[j];
            k = k + 1;
        }
        bin[k] = '\0';
        printf("THE HEXADECIMAL EQUIVALENT IS %s", bin);
        double nm[10];
        int flag = 0;
        double h = nym;
        double nh;
        char chrw1[100];
        chrw1[0] = '.';
        int i1 = 1;
        int j = 0;
        while (flag == 0)
        {
            nh = h * 16;
            double nh1 = nh;
            int m = (int)nh1;
            nh = nh - m;
            char ch;
            if (m > 9)
            {
                int q = m - 10;
                ch = hex[q];
            }
            else
            {
                ch = m + '0';
            }
            chrw1[i1] = ch;
            i1 = i1 + 1;
            for (int k = 0; k < j; k++)
            {
                if (nh == nm[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                nm[j] = nh;
                j = j + 1;
                h = nh;
            }
            else if (flag == 1)
            {
                chrw1[j + 1] = '\0';
                printf("%s", chrw1);
            }
        }
        break;
    }
    case 10:
    {
        char nm1[100];
        printf("ENTER THE HEXADECIMAL NUMBER\n");
        scanf("%s", &nm1);
        int leng = strlen(nm1);
        double sum = 0;
        int fl = 0;
        int v = 0;
        int c = 0;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i - 1] == '.')
            {
                v = c;
            }
            c = c + 1;
        }
        int j1 = v - 2;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i] == '.')
            {
                fl = 1;
            }
            else
            {
                int val;
                if (nm1[i] == 'A')
                {
                    val = 10;
                }
                else if (nm1[i] == 'B')
                {
                    val = 11;
                }
                else if (nm1[i] == 'C')
                {
                    val = 12;
                }
                else if (nm1[i] == 'D')
                {
                    val = 13;
                }
                else if (nm1[i] == 'E')
                {
                    val = 14;
                }
                else if (nm1[i] == 'F')
                {
                    val = 15;
                }
                else
                {
                    val = nm1[i] - '0';
                }
                double b = pow(16, j1);
                j1 = j1 - 1;
                b = b * val;
                sum = sum + b;
            }
        }
        int m = (int)sum;
        double nym = sum - m;
        char str[100];
        itoa(m, str, 10);
        char chr[100];
        int n = m;
        int i = 0;
        while (n > 0)
        {
            int d = n % 2;
            char ch = d + '0';
            chr[i] = ch;
            i = i + 1;
            n = n / 2;
        }
        chr[i] = '\0';
        int len = strlen(chr);
        char bin[100];
        int k1 = 0;
        for (int j = len - 1; j >= 0; j--)
        {
            bin[k1] = chr[j];
            k1 = k1 + 1;
        }
        bin[k1] = '\0';
        printf("THE BINARY EQUIVALENT IS %s", bin);
        double nm[10];
        int flag = 0;
        double h = nym;
        double nh;
        char chrw[100];
        chrw[0] = '.';
        int y = 1;
        int j = 0;
        while (flag == 0)
        {
            nh = h * 2;
            double nh1 = nh;
            int m = (int)nh1;
            nh = nh - m;
            char ch;
            ch = m + '0';
            chrw[y] = ch;
            y = y + 1;
            for (int k = 0; k < j; k++)
            {
                if (nh == nm[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                nm[j] = nh;
                j = j + 1;
                h = nh;
            }
            else if (flag == 1)
            {
                chrw[j + 1] = '\0';
                printf("%s", chrw);
            }
        }
        break;
    }
    case 11:
    {
        char nm[100];
        printf("ENTER THE HEXADECIMAL NUMBER\n");
        scanf("%s", &nm);
        int leng = strlen(nm);
        double sum = 0;
        int fl = 0;
        int v = 0;
        int c = 0;
        for (int i = 0; i < leng; i++)
        {
            if (nm[i - 1] == '.')
            {
                v = c;
            }
            c = c + 1;
        }
        int j = v - 2;
        for (int i = 0; i < leng; i++)
        {
            if (nm[i] == '.')
            {
                fl = 1;
            }
            else
            {
                int val;
                if (nm[i] == 'A')
                {
                    val = 10;
                }
                else if (nm[i] == 'B')
                {
                    val = 11;
                }
                else if (nm[i] == 'C')
                {
                    val = 12;
                }
                else if (nm[i] == 'D')
                {
                    val = 13;
                }
                else if (nm[i] == 'E')
                {
                    val = 14;
                }
                else if (nm[i] == 'F')
                {
                    val = 15;
                }
                else
                {
                    val = nm[i] - '0';
                }
                double b = pow(16, j);
                j = j - 1;
                b = b * val;
                sum = sum + b;
            }
        }
        printf("THE DECIMAL EQUIVALENT %lf", sum);
        break;
    }
    case 12:
    {
        char nm1[100];
        printf("ENTER THE HEXADECIMAL NUMBER\n");
        scanf("%s", &nm1);
        int leng = strlen(nm1);
        double sum = 0;
        int fl = 0;
        int v = 0;
        int c = 0;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i - 1] == '.')
            {
                v = c;
            }
            c = c + 1;
        }
        int j1 = v - 2;
        for (int i = 0; i < leng; i++)
        {
            if (nm1[i] == '.')
            {
                fl = 1;
            }
            else
            {
                int val;
                if (nm1[i] == 'A')
                {
                    val = 10;
                }
                else if (nm1[i] == 'B')
                {
                    val = 11;
                }
                else if (nm1[i] == 'C')
                {
                    val = 12;
                }
                else if (nm1[i] == 'D')
                {
                    val = 13;
                }
                else if (nm1[i] == 'E')
                {
                    val = 14;
                }
                else if (nm1[i] == 'F')
                {
                    val = 15;
                }
                else
                {
                    val = nm1[i] - '0';
                }
                double b = pow(16, j1);
                j1 = j1 - 1;
                b = b * val;
                sum = sum + b;
            }
        }
        int m = (int)sum;
        double nym = sum - m;
        char str[100];
        itoa(m, str, 10);
        char chr[100];
        int n = m;
        int i = 0;
        while (n > 0)
        {
            int d = n % 8;
            char ch = d + '0';
            chr[i] = ch;
            i = i + 1;
            n = n / 8;
        }
        chr[i] = '\0';
        int len = strlen(chr);
        char bin[100];
        int k1 = 0;
        for (int j = len - 1; j >= 0; j--)
        {
            bin[k1] = chr[j];
            k1 = k1 + 1;
        }
        bin[k1] = '\0';
        printf("THE OCTAL EQUIVALENT IS %s", bin);
        double nm[10];
        int flag = 0;
        double h = nym;
        double nh;
        char chrw[100];
        chrw[0] = '.';
        int y = 1;
        int j = 0;
        while (flag == 0)
        {
            nh = h * 8;
            double nh1 = nh;
            int m = (int)nh1;
            nh = nh - m;
            char ch;
            ch = m + '0';
            chrw[y] = ch;
            y = y + 1;
            for (int k = 0; k < j; k++)
            {
                if (nh == nm[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                nm[j] = nh;
                j = j + 1;
                h = nh;
            }
            else if (flag == 1)
            {
                chrw[j + 1] = '\0';
                printf("%s", chrw);
            }
        }
        break;
    }
    default:
    {
        printf("WRONG INPUT\n");
        break;
    }
    }
}