#include<iostream>
#include<vectors>
#include<string>
#include<windows.h>
#include<iterator>
#include"main.h"
using namespace std;


class housingdefine
private:
{
    string Apt1,Apt2,Apt3;
    int Price_Apt1,Price_Apt2,Price_Apt3;
    int Population_Apt1,Population_Apt2,Population_Apt3;
    string Apartment1_MapSize,Apartment2_MapSize,Apartment3_MapSize;
    int Tax_Definition;
    int counter=0,maximum=10;
    int cnt ()
    {if (counter==maximum){return maximum};
    else
    {++counter;return counter;}}

    void definitionApt1()
    {
        Apt1="Small size apartments"
        Price_Apt1=3000000
        Population_Apt1=24
        Apartment1_MapSize=("HHHHH\n")*3
    }
    void definitionApt2()
    {
        Apt2="Medium size apartments"
        Price_Apt2=10000000
        Population_Apt2=120
        Apartment2_MapSize=("HHHHHHHHH\n")*3
    }
    void definitionApt3()
    {
        Apt3="Large size apartments"
        Price_Apt3=50000000
        Population_Apt3=1500
        Apartment3_MapSize=("HHHHHHHHHHH\n")*5
    }

public:
    float NumberofHousing,Tax=0.2;
    bool SideRoad;
    NumberofHousing=cnt()

    housingdefine() /*  A basic constructer for the code that explains the default settings */
    {
    cout<<"Welcome to the city housing services.\nTax has been set to 20 percent to all the families in the apartment\n We currently hold "<<NumberofHousing <<" Apartments"
    }

};
class housing_update : public housingdefine
public:
    {
        /*Can only to desined once the frame of all cpp files are done "*/
    };
