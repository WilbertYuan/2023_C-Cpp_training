#include <stdio.h>

struct RentVehicle {
    double baseFee;
};

struct Car {
    struct RentVehicle super;
    double nbKms;
    int nbSeats;
};

void Car_init(struct Car* this, int nbSeats, double nbKms) {
    RentVehicle_init(&this->super, 90);
    this->nbKms = nbKms;
    this->nbSeats = nbSeats;
}

void Car_defaultInit(struct Car* this) {
    RentVehicle_init(&this->super, 90);
    this->nbKms = 0;
    this->nbSeats = 0;
}

double Car_getnbKms(struct Car* this) {
    return this->nbKms;
}

void Car_setnbKms(struct Car* this, double nbKms1) {
    this->nbKms = nbKms1;
}

int Car_getnbSeats(struct Car* this) {
    return this->nbSeats;
}

void Car_setnbSeats(struct Car* this, int nbSeat1) {
    this->nbSeats = nbSeat1;
}

double Car_getMileageFees(struct Car* this) {
    if (this->nbKms < 100)
        return 0.2 * this->nbKms;
    if (this->nbKms >= 100 && this->nbKms <= 400)
        return 0.3 * this->nbKms;
    if (this->nbKms > 400)
        return 0.4 * this->nbKms + 0.5 * (this->nbKms - 400);
    return this->nbKms;
}

double Car_CostTORent(struct Car* this) {
    return this->super.baseFee * this->nbSeats + Car_getMileageFees(this);
}