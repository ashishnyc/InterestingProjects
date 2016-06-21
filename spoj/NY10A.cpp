#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
std::map<std::string,int> g_allCombos;
void genAllCombos()
{
    g_allCombos["TTT"]=0;
    g_allCombos["TTH"]=0;
    g_allCombos["THT"]=0;
    g_allCombos["THH"]=0;
    g_allCombos["HTT"]=0;
    g_allCombos["HTH"]=0;
    g_allCombos["HHT"]=0;
    g_allCombos["HHH"]=0;
}
int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n;
        std::cin >> n;
        char HandT[41];
        std::cin >> HandT;
        genAllCombos();
        for(int j=0;j<38;j++)
        {
            std::string combo="";
            combo += HandT[j];
            combo += HandT[j+1];
            combo += HandT[j+2];
            g_allCombos[combo] += 1;
        }
        std::cout << n;
        std::map<std::string,int>::reverse_iterator it;
        for(it=g_allCombos.rbegin(); it!=g_allCombos.rend();++it)
            std::cout << " " << it->second;
        std::cout << "\n";
    }
}
