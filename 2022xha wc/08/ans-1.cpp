#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    int fidx = 0;
    int fn;
    cin >> fn;
    for (fidx = 1; fidx <= fn; fidx++)
    {
        string fin = to_string(fidx) + ".in";
        string fout = to_string(fidx) + ".out";
        ifstream in(fin);
        ofstream out(fout);

        //解题程序开始
        int month;
        int money=0,fee;
        int save=0;
        int f =0;
        for(month=1;month<=12;month++)
        {
                money=money+300;
                in>>fee;
                money=money-fee;
                if(money<0)
                {
                    f =-month;
                    break;
                }
                save=save+money/100;
                money=money%100;//这是刚写的 
        }
        if(f<0){
            out<<f<<endl;
        }else{
            out<<money+save*1.2*100;
        }
        

        
        //解题程序结束。
        //cout<<fixed<<setprecision(5)<<a

        in.close();
        out.close();
    }

    return 0;
}