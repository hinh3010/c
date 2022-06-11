
#include <stdio.h>

int binary_search(int a[], int n, int x)
{
    int l = 0, r = n - 1, m;
    do
    {
        m = (l + r) / 2;
        if (a[m] == x)
            return 1;
        else if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    } while (l <= r);
    return 0;
}

void bai1()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int x;
    printf("Nhap so muon tim : ");
    scanf("%d", &x);
    if (binary_search(a, n, x) == 0)
        printf("Ko tim thay");
    else
        printf("Tim thay");
}

int main()
{
    bai1();
    return 0;
}
