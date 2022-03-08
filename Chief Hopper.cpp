#include <stdio.h>
#include <math.h>

//https://www.hackerrank.com/challenges/chief-hopper/problem

int chiefHopper(int arr_count, int* arr) {
    float need=0;
    for(int i=arr_count-1;i>=0;i--)
    {
        need = ceil((need + arr[i])/2);
    }
    return need;
}
