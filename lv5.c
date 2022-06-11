// Nhập thư viện
#include <stdio.h>

// Nhập số phần tử của mảng với đk là số nguyên dương
int N()
{
    int n;
    printf("\nNhap so phan tu cho mang : ");
    do
    {
        scanf("%d", &n);
        if (n < 0)
            printf("\nNhap sai vui long nhap lai : ");
    } while (n < 0);
    return n;
}

// Nhập giá trị cho mảng
void NhapMang(char a[], int n)
{
    int i;
    printf("\nNhap gia tri cho mang : \n");
    for (i = 0; i < n; i++)
    {
        printf("\t\t\tphan tu [%d] = ", i);
        scanf("%s", &a[i]);
    }
}

// Nhập giá trị cho mảng
void maAscii(char a[], int n)
{
    int i;
    printf("\n\nIn maAscii : \n");
    for (i = 0; i < n; i++)
    {
        printf("\t\t\tphan tu [%d] = [%d]\n", i, a[i]);
    }
}

// In ra các giá trị của mảng
void XuatMang(char a[], int n)
{
    int i;
    printf("\nXuat mang : { ");
    for (i = 0; i < n; i++)
    {
        printf("%c", a[i]);
        (i < n - 1) ? printf(" , ") : printf("");
    }
    printf(" }");
}

// Sắp xếp mảng tăng dần
void MangTangDan(char a[], int n)
{
    int i, j;
    char sub;
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                sub = a[j];
                a[j] = a[j - 1];
                a[j - 1] = sub;
            }
        }
    }
    printf("\nMang moi tang dan { ");
    for (i = 0; i < n; i++)
    {
        printf("%c", a[i]);
        (i < n - 1) ? printf(" , ") : printf("");
    }
    printf(" }");
}

// main
int main()
{
    int n = N();
    char a[n];

    NhapMang(a, n);
    XuatMang(a, n);
    maAscii(a, n);

    MangTangDan(a, n);

    return 0;
}