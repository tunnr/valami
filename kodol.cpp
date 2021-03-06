#include "header.h"

int dekodol(string str)
{
    string szamok="01";
    int karkod=0;
    if(str[0] == '0')
    {
        str.erase(0, 1);
        for(int i=str.size()-1;i>=0;i--)
        {
            karkod+=pow(2,i)*szamok.find(str[str.size()-1-i]);
        }
    }
    if(str[0] == '1')
    {
        str.erase(0, 1);
        for(int i=str.size()-1;i>=0;i--)
        {
            karkod-=pow(2,i)*szamok.find(str[str.size()-1-i]);
        }
    }
    cout<<karkod<<endl;
    return karkod;
}

void kodbe(vector<string> &menu)
{
    ifstream fin("asd.txt");
    string fajlsor;
    string seged;
    int karakterertek=0;
    while(fin>>fajlsor)
    {
        string sor;
        do{
            seged=fajlsor.substr(0,9);
            karakterertek=dekodol(seged);
            fajlsor.erase(0,9);
            sor+=(char)karakterertek;
        }while(fajlsor!="");
        menu.push_back(sor);
    }
    fin.close();
}
