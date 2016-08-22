/* 
 * File:   main.cpp
 * Author: Rugal Bernstein
 *
 * Created on August 21, 2016, 7:06 PM
 */

#include <iostream>

using namespace std;

void testInt()
{
    int data = 136;
    int *p = &data;
    //--------------------------
    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&data<<endl;
    cout<<data<<endl;
    //cout<<*data<<endl;  //why?
}

void testArray()
{
    int array[] = {7,8,9,10};
    int *p = &array;
    //--------------------------
    cout<<array[0]<<endl;
    cout<<p+1<<endl;
    cout<<array+2<<endl;
    //--------------------------
    p = &array[2];
    cout<<p+1<<endl;
    //cout<<p+2<<endl;  why?
}

void testFunction(int data, int* pdata)
{
    data = 0;
    *pdata = 9;
    pdata = &data;
    *pdata = 8;
}

/*
 * 
 */
int main(int argc, char** argv)
{
    testInt();
    testArray();
    //---------------------------
    int anyNameYouWant = 123;
    cout<<anyNameYouWant<<endl;
    testFunction(anyNameYouWant, &anyNameYouWant);
    cout<<anyNameYouWant<<endl;
    return 0;
}

