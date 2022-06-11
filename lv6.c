// Nhập thư viện
#include <stdio.h>
#include <math.h>

// đề bài
void deBai()
{
    printf("\n===****==****==== Ho ten : Tran Văn Hinh ===****==****===\n");
    printf("\n================= MENU LAM VIEC VOI MANG =================\n");
    printf("\n===       1 - Nhap mang                                ===");
    printf("\n===       2 - Xuat mang                                ===");
    printf("\n===       3 - Tim cac so nguyen to trong mang          ===");
    printf("\n===       4 - Tim Min - Max                            ===");
    printf("\n===       5 - Sap xep mang tang dan                    ===");
    printf("\n===       6 - Chen 1 phan tu vao mang                  ===");
    printf("\n===       7 - Thoat                                    ===");
}

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

// Bài 1 Nhập giá trị cho mảng
void NhapMang(int a[], int n)
{
    int i;
    printf("Nhap gia tri cho mang : \n");
    for (i = 0; i < n; i++)
    {
        printf("\t\t\tphan tu [%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// Bài 2 In ra các giá trị của mảng
void XuatMang(int a[], int n)
{
    int i;
    printf("{ ");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        (i < n - 1) ? printf(" , ") : printf("");
    }
    printf(" }");
}

// 3 Tìm các số nguyên tố trong mảng và in ra
// hàm kiểm tra số nguyên tố
int isNguyenTo(int param)
{
    if (param < 2)
        return 0;
    int i = 2;
    for (i; i <= sqrt(param); i++)
    {
        if (param % i == 0)
            return 0;
    }
    return 1;
}
// hàm in ra các số nguyên tố
void CacSoNguyenTo(int a[], int n)
{
    int i;
    printf("Cac so ng/to trong mang la : { ");
    for (i = 0; i < n; i++)
    {
        if (isNguyenTo(a[i]))
        {
            printf("%d ,", a[i]);
        }
    }
    printf(" }");
}

// Bài 4 Tìm số min , max
int Min(int a[], int n)
{
    int i;
    int min = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return min;
}
int Max(int a[], int n)
{
    int i;
    int max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

// Bài 5 Sắp xếp mảng tăng dần
void MangTangDan(int a[], int n)
{
    int i, j, sub;
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            // nếu a[cuối] < a[cuối-1] => đổi chỗ => a[cuối] phải lớn nhất
            if (a[j] < a[j - 1])
            {
                sub = a[j];
                a[j] = a[j - 1];
                a[j - 1] = sub;
            }
        }
    }
    printf("Mang moi tang dan { ");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        (i < n - 1) ? printf(" , ") : printf("");
    }
    printf(" }");
}

// Bài 6 Chèn một phần tử nhập từ bàn phím vào mảng
int NhapIndex(int n)
{
    int index;
    do
    {
        printf("\n\n\tNhap vi tri can them ( dk <= n ):");
        scanf("%d", &index);
        if (index > n || index < 0)
            printf("\n\n\tNhap lai ( dk <= n )");
    } while (index > n || index < 0);
    return index;
}
int NhapValue()
{
    int value;
    printf("\n\n\tNhap value: ");
    scanf("%d", &value);
    return value;
}
void ChenMang(int a[], int n)
{
    int i;
    int index = NhapIndex(n);
    int value = NhapValue();

    // Khai báo mảng mới + độ dài mới
    int length = n + 1;
    int newArr[length];

    // Sao chép mảng cũ ra mảng mới
    for (i = 0; i < n; i++)
    {
        newArr[i] = a[i];
    }

    // Tại vị trí chèn thêm phần tử trong mảng => đẩy lùi các ph/tu còn lại về sau
    for (i < n + 1; i >= index; i--)
    {
        newArr[i + 1] = newArr[i];
    }
    // Tại vị trí chèn thêm phần tử gán value vào
    newArr[index] = value;

    printf("\n=> => => Mang sau khi them %d vao vi tri %d : ", value, index);
    XuatMang(newArr, length);
}

// chọn bài tâp
int BaiTap()
{
    int chonBaiTap;
    printf("\n\nChon bai lam ( 2 - 7 ) : ");
    scanf("%d", &chonBaiTap);
    return chonBaiTap;
}
int main()
{
    // đề bài
    deBai();
    printf("\n\n");

    // khai báo mảng và số phần tử của mảng
    int n = N();
    int a[n];

    printf("\n1 : ");
    NhapMang(a, n);

    int chonBaiTap;

    do
    {
        chonBaiTap = BaiTap();

        switch (chonBaiTap)
        {
        case 2:
            printf("\n2 : In ra cac gia tri cua mang : ");
            XuatMang(a, n);
            break;
        case 3:
            printf("\n\n3 : ");
            CacSoNguyenTo(a, n);
            break;
        case 4:
            printf("\n\n4 : ");
            printf("So nho nhat là : %d", Min(a, n));
            printf("    &    ");
            printf("So lon nhat là : %d", Max(a, n));
            break;
        case 5:
            printf("\n\n5 : ");
            MangTangDan(a, n);
            break;
        case 6:
            printf("\n\n6 : Them mot phan tu vao mang");
            ChenMang(a, n);
            break;
        case 7:
            printf("\n\n============================  THOAT  ================================");
            printf("\n\n=====================================================================n\n\n\n\n");
            break;

        default:
            printf("\nBai tap khong ton tai => Chon lai \n");
            break;
        }
    } while (chonBaiTap != 7);

    return 0;
}