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
        int a,b;
        in>>a>>b;
        for(int i =a ;i <=b;i++){
            int f=0;
            if(i<2)continue;
            for(int j =2;j*j<=i;j++){
                if(i%j==0){
                    f=1;
                    break;
                }
            }
            if(f ==0){
                out<<i<<' ';
            }
        }

        
        //解题程序结束。
        //cout<<fixed<<setprecision(5)<<a

        in.close();
        out.close();
    }

    return 0;
}