#include <stdio.h>
int main()
{
    char HoLot[30], Ten[12];
    printf("Nhap Ho Lot: ");
    gets(HoLot);
    printf("Nhap Ten: ");
    gets(Ten);
    strcat(HoLot, Ten); /* Ghep Ten vao HoLot*/
    printf("Ho ten la: ");
    puts(HoLot);
    getch();
    return 0;
}