#include <stdio.h>  

#define SIZE 10  

int main() {
    int array[SIZE];
    int i, max, min, sum,max_i = 0,min_i = 0,ex = 0;
    double average;


    for (i = 0; i < SIZE; i++) {
        scanf_s("%d", &array[i]);
    }
    max = array[0];
    min = array[0];
    sum = 0;
    for (i = 0; i < SIZE; i++) {
        sum += array[i];
        if (array[i] > max) {
            max = array[i];
            max_i = i;
            
        }
        if (array[i] < min) {
            min = array[i];
            min_i = i;
            
        }
    }
    array[max_i] = -1000;
    array[min_i] = 1000;
    for (i = 0; i < SIZE; i++) {
        //sum += array[i];
        if (array[i] == max) {
            sum -= max;
            ex++;
        }
        if (array[i] == min) {
            sum -= min;
            ex++;
        }
    }
    sum = sum - max - min;
    average = 1.0 * sum / (SIZE - 2 - ex);

    printf("%.6lf", average);

    return 0;
}