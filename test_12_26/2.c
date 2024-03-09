#include <stdio.h>
// 定义自行车结构体
struct Bicycle 
{
    int nbWheels;
};
// 定义汽车结构体
struct Car {
    int nbSeats;
    double nbKms;
};
// 计算租金的函数
double CostToRent(struct Bicycle* b) 
{
    return 5 * b->nbWheels;
}
double CostToRentCar(struct Car* c) 
{
    return 90 * c->nbSeats + c->nbKms;
}
// 主函数
int main() {
    // 创建自行车对象
    struct Bicycle b1 = { 4 };
    // 创建汽车对象
    struct Car c1 = { 6, 50 };

    // 调用计算租金的函数并打印结果
    printf("%f\n", CostToRent(&b1));
    printf("%f\n", CostToRentCar(&c1));
    return 0;
}


