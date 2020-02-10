#include<iostream>
#include<vectors>
#include<string>
#include<windows.h>
#include<iterator>
#include <fstream>
#include"main.h"
using namespace std;

class roadsystem_define
private:
    {
        string roadblock;
        int cost_perroadblock=500;
                                                        /* Price of the blocks */

        string roadblock()
        {return("RRRR\nRRRR")}                          /* Size of the blocks */
public:
    {
        string getroadblock()
        {return roadblock();}
        int getcost()                                  /* Public functions to get the private definitions*/
        {return cost_perroadblock}
    }
        };
class roadsystem_update : public roadsystem_define
public:
    {
        int Total_roadprice(int iblock)
        {
            if (iblock>7)
            {return 0;}
            else
            {int total;
            total=(getcost()*iblock);
            return total;}
        }
        string total_roadblock(int amount)
        {
            string x;
            x=getroadblock()
            x=x*amount
            return x
        }
    };

