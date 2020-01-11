// Ch09-Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void test(int x);
void test2(int &x);

void average(int arr[], int size);

void average(int arr[5])
{
    arr[1] = 100;
}

void test(int x)
{
    x = x * x;
}

void test2(int& x)
{
    x = x * x;
}

int main()
{
    int val = 10;
    int* ptr = &val;

    *ptr = 20;  //





    test(val);
    test2(val);

    int ages[5];
    int ages2[5] = { 6,7,8,9,10 };

    average(ages2);

    std::cout << "Hello World!\n";
}

