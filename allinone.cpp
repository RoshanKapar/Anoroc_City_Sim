#include<iostream>
#include<vector>
#include<windows.h>
#include<string>
#include<iterator>
#include<array>
#include<sstream>
#include <fstream>
using namespace std;

static HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
string City_costs = "1-->Small Apartments :$3,000,000\n2-->Medium Apartments:$10,000,000\n3-->Large Apartments:$50,000,000\n4-->Cost/roadblock=$500";
static vector<int>Roadstore;
static vector<int>Housestore1;
static vector<int>Housestore2;
static vector<int>Housestore3;
const int width = 100;
const int height = 30;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;


bool check(int x, int y, int z)
 {

    int b;
    string text,x1;
    ifstream file;
    file.open("pointers.txt");
    getline(file, text);
    ostringstream strg;
    strg<<x;
    x1=strg.str();
    b=text.find(x1);
  if (b>=0)
  {
        return false;
  }
  else
    {
        string text1;
        ofstream file;
        file.open("pointers.txt", std::ios_base::app);
        file << x << y;
        if (z==1)
        {Housestore1.push_back(x);
        Housestore1.push_back(y);
        return true;}
        else if(z==2)
        {Housestore2.push_back(x);
        Housestore2.push_back(y);
        return true;}
        else if(z==3)
        {Housestore3.push_back(x);
        Housestore3.push_back(y);
        return true;}
        {Roadstore.push_back(x);
        Roadstore.push_back(y);
        return true;}
    }


}
void Draw()
{
    for (int i = 0; i < width + 2; i++)
        cout << "_";
    cout << endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "_";
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }

            if (j == width - 1)
                cout << "_";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "_";
    cout << endl;
}



void definecoordinate(int x, int y)
{

    COORD coord = { 0,0 };
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void townhall_maker(string imap)
{
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
        definecoordinate(50, 10);
        SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "THTHTHTHTH" << endl;
}

bool dontexit(int x)
{
    if (x==1)
    {return true;}
    else
    {return false;}
}


void loadingmaker()
{
    cout << "Loading";
    Sleep(750);
    cout << ".";
    Sleep(750);
    cout << ".";
    Sleep(750);
    cout << "." << endl;

}
string welcometext(int x)
{
    string ab;
    ab = "Welcome to Anoroc City Builder ! You have been appointed as the mayor of the city. Let us start by building our city's Townhall\nTownhall is your workspace from where you govern the city . It is also a place that stores the current statistics of your city and its citizens\n\nYou currently hold 5000000 in your Treasury ., make good decisions to keep the City Happiness meter above 20%";
    return ab;
}
void Tutorials(int num)
{
    static HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    string Roadbrief, ApartmentBrief, CharacterBrief;
    bool Townhall_NotBuilt = true;
    while (Townhall_NotBuilt)
    {
        string x;
        cout << "-Enter townhall to build your townhall free of cost" << endl;
        cin >> x;
        if (x == "townhall")
        {
            loadingmaker();
            system("cls");
            cout << "-Congratulations ! You have successfully build a Townhall." << endl;
            cout << "Let me give you a brief about the city and its associated costs" << endl;
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << City_costs << endl;
            cout << "--Remember that your Citizens give you 20% tax for the services they use and income they earn per month." << endl;
            Townhall_NotBuilt = false;
        }
        else
        {
            cout << "Oh Chief ! Invalid input." << endl;
        }

    }
}
bool finance(int x)
{
    bool gos = true;
    if (x < 0)
    {
        gos = false;
        return gos;
    }
    else
    {
        return gos;
    }
}

void CityBuilder()
{
    bool l;
    int j,k;
    int w;
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout.width(120);
    cout<<"WELCOME TO THE CONSTRUCTION MENU"<<endl;
    SetConsoleTextAttribute(h, FOREGROUND_GREEN);
    cout<<City_costs<<endl;
    cout<<"Enter spectific Number"<<endl;
    cin>>w;
    cout<<"Enter Map Grid [Remember to keep the grid spaced out by a multiple of 5 to maintain happiness]"<<endl;
    cin>>j>>k;
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    l=check(j,k,w);
    if (l==false)
    {
    cout<<"Failed ! There exists a building/road. Try Again"<<endl;
    }
    else if (l==true)
    {
    cout<<"Congrats Building was placed at your specified position"<<endl;
    }


}
void smallApartment()
{       for(int i=0;i<Housestore1.size();i=i+2)
{
        definecoordinate(Housestore1[i],Housestore1[i+1]);
        SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "HHHHH" << endl;
}
}
void mediumApartmrnt()
{
        for(int i=0;i<Housestore2.size();i=i+2)
        {
        definecoordinate(Housestore2[i],Housestore2[i+1]);
        SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "HHHHHHHHH" << endl;
        }

}
void largeapartment()
{
        for(int i=0;i<Housestore3.size();i=i+2)
        {
        definecoordinate(Housestore3[i],Housestore3[i+1]);
        SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "HHHHHHHHHHH" << endl;
        }
}
int main()
{
    string x;
    bool gamenotover;
    cout << welcometext(5) << endl;
    Tutorials(3);
    gamenotover = finance(500);
    while (gamenotover)
    {
        cout << "\nWelcome back to the command line\n-To view map write map.\n-To view City statistics write stats\n-To go to construction menu\n-To clear screen write cls "<< endl;
        cin >> x;
        if (x == "map"){
        system("cls");
        Draw();
        townhall_maker(x);
        smallApartment();
        mediumApartmrnt();
        largeapartment();
        Sleep(5000);
        system("cls");
        }
        if (x=="cls")
        {
        system("cls");
        }
        if(x=="const")
            {
            loadingmaker();
            system("cls");
            CityBuilder();
            }

    }
    return 0;
}

