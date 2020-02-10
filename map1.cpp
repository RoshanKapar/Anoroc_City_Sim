#include<iostream>
#include<vectors>
#include<string>
#include<windows.h>
#include<iterator>
#include"main.h"
using namespace std;

function checker(int x, int y)
{
    static vector<int>store;
    for(auto iterator=begin(store),iterator<=end(store),++iterator)
    {
        if (iterator==x || iterator==y)
        {
            cout<<"Opps Chief ! Building already exists"<<endl;
        }
        else
        {
            push_back(x);
            push_back(y);
        }
    }


}
