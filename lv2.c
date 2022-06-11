
#include <stdio.h>

void bai1()
{
    int a[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int i, soMon = 4, monHoc, sv;
    for (i = 0; i < 12; i++)
    {
        sv = i / soMon;
        monHoc = i % soMon;

        printf("Diem mon %d cua sinh vien %d la %d ", monHoc, sv, a[i]);
        printf("\n\n");
    }
}

void bai2()
{
    int a[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    int i, j, soMon = 4, sv = 3;
    for (i = 0; i < sv; i++)
    {
        for (j = 0; j < soMon; j++)
        {
            printf("Diem mon %d cua sv %d la %d ", j, i, a[i][j]);
            printf("\n\n");
        }
        printf("----------------------------------------------------------------\n");
    }
}

int main()
{
    // bai1();
    bai2();

    return 0;
}
