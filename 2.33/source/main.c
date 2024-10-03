#include <stdio.h>
#include <stdlib.h>
int main() {
    double total_mileage, fuel_price, fuel_efficiency, parking_fee, toll_fee;
    printf("請輸入一整天的總里程數(公里):");
    scanf("%lf",&total_mileage);

    printf("請輸入每公升/加侖汽油的價格:");
    scanf("%lf",&fuel_price);

    printf("請輸入每公升/加侖的行駛距離 (公里):");
    scanf("%lf",&fuel_efficiency);

    printf("請輸入一天的停車費:");
    scanf("%lf",&parking_fee);

    printf("請輸入一天的通行費 (過路費):");
    scanf("%lf",&toll_fee);

    double fuel_cost=(total_mileage/fuel_efficiency)*fuel_price;
    double total_cost=fuel_cost+parking_fee+toll_fee;

    printf("你一天開車去工作的花費為:%.2f元\n",total_cost);
    return 0;
}
