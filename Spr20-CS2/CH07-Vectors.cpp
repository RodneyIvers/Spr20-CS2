// Spr20-CS2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int numbers00[10];  //10 locations, 0-9

    vector<int> numbers01;              
    vector<int> numbers02(100);
    vector<int> numbers03(100, 99);
    vector<int> numbers04(numbers03);
    vector<int> numbers05{ 1,2,3,4,5 };

    cout << numbers03[50] << endl;
    numbers04[50] = 100;
    cout << numbers04[50] << endl;

    for (int val : numbers03)
        cout << val << endl;

    vector<string> names;
    //names[0] = "George";            //why does this break app?
    //names[1] = "Susan";
    //names[2] = "Jim";

    names.push_back("George");
    names.push_back("Susan");





}

