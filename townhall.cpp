#include<iostream>
#include<stdio.h>
#include<thread>
#include<unistd.h>
#include<Windows.h>
#include<stdlib.h>
#include<string>


using namespace std;

void example()
{
    while (true)
    {
        cout << "Hello";
    }
}

void example2()
{
    while (true)
    {
        cout << "There";
    }
}

void allthings{
thread t1(example);
    thread t2(example2);
    t1.join();
    t2.join();
    return 0;
}
int main()
{
    allthings();
    return 0;
}

