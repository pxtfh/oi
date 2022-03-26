#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <cmath>
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
        int p,w,s,fee = 0;
        in>>p>>w>>s;
        fee = p*w*s;
        if(s<250){
            fee= fee*95/100;
        }
        else{
            if(s<1000){
                fee = fee*90/100;
            }
            else{
                fee = fee*80/100;
            }
        }
        
        out<<fee<<endl;

        
        //解题程序结束。
        //cout<<fixed<<setprecision(5)<<a

        in.close();
        out.close();
    }

    return 0;
}
