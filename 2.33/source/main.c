#include <stdio.h>
#include <stdlib.h>
int main() {
    double total_mileage, fuel_price, fuel_efficiency, parking_fee, toll_fee;
    printf("�п�J�@��Ѫ��`���{��(����):");
    scanf("%lf",&total_mileage);

    printf("�п�J�C����/�[�ڨT�o������:");
    scanf("%lf",&fuel_price);

    printf("�п�J�C����/�[�ڪ���p�Z�� (����):");
    scanf("%lf",&fuel_efficiency);

    printf("�п�J�@�Ѫ������O:");
    scanf("%lf",&parking_fee);

    printf("�п�J�@�Ѫ��q��O (�L���O):");
    scanf("%lf",&toll_fee);

    double fuel_cost=(total_mileage/fuel_efficiency)*fuel_price;
    double total_cost=fuel_cost+parking_fee+toll_fee;

    printf("�A�@�Ѷ}���h�u�@����O��:%.2f��\n",total_cost);
    return 0;
}
