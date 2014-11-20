#include "header.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"hun");
    vector<string> menu;
    kodbe(menu);
    int ch;
    int i=0;
    menu[i]=hozzafuzianyilat(i,menu[i]);
    kiir(i,menu);
    do{
        ch=bekerekegykarakter();
        gotoxy(i,menu[i].size());
        lepkedamenuben(ch,i,menu);
        if(ch==13 and i!=menu.size()-1)
        {
            system("cls");
            switch(i)
            {
                case 0:
                    cout<<"Benne az elsõ menüpontban!"<<endl;
                    break;
                case 1:
                    cout<<"Benne az 2. menüpontban!"<<endl;
                    break;
                case 2:
                    cout<<"Benne az 3. menüpontban!"<<endl;
                    break;
                case 3:
                    cout<<"Majd lesz vmi!"<<endl;
                    break;
                case 4:
                    cout<<"Laci!"<<endl;
                    break;
            }
            system("pause");
            kiir(i, menu);
        }
    }while((ch!=13 or i!=menu.size()-1) and ch!=27);
    return 0;
}

int bekerekegykarakter()
{
    int ch=getch();
    if(ch==0x00 or ch==0xE0)
    {
        ch=getch();
    }
    return ch;
}

string hozzafuzianyilat(int i, string seged)
{
    string nyil=" <--";
    seged+=nyil;
    return seged;
}

void kiir(int merre, vector<string> menu)
{
    system("cls");
    for(int i=0;i<menu.size();i++)
    {
        if(i==merre)
        {
            textcolor(BLACK);
            textbackground(WHITE);
            cout<<menu[i]<<endl;
            textcolor(WHITE);
            textbackground(BLACK);
        }
        else
        {
            cout<<menu[i]<<endl;
        }
    }
}

void lepkedamenuben(int ch, int &i,vector<string> &menu)
{
    if(ch==72 and i-1>=0)
    {
        menu[i].erase(menu[i].size()-4,4);
        i--;
        menu[i]=hozzafuzianyilat(i,menu[i]);
        kiir(i,menu);
    }
    if(ch==80 and i+1<=menu.size()-1)
    {
        menu[i].erase(menu[i].size()-4,4);
        i++;
        menu[i]=hozzafuzianyilat(i,menu[i]);
        kiir(i, menu);
    }
}
