#include <stdio.h>
// �������г��ṹ��
struct Bicycle 
{
    int nbWheels;
};
// ���������ṹ��
struct Car {
    int nbSeats;
    double nbKms;
};
// �������ĺ���
double CostToRent(struct Bicycle* b) 
{
    return 5 * b->nbWheels;
}
double CostToRentCar(struct Car* c) 
{
    return 90 * c->nbSeats + c->nbKms;
}
// ������
int main() {
    // �������г�����
    struct Bicycle b1 = { 4 };
    // ������������
    struct Car c1 = { 6, 50 };

    // ���ü������ĺ�������ӡ���
    printf("%f\n", CostToRent(&b1));
    printf("%f\n", CostToRentCar(&c1));
    return 0;
}


