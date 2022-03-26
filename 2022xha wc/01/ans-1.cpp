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
        int n,m,t,r;
        int  a[101][11]={0};
        in>>m>>n;
        out<<n/(1+m)<<endl;
        
        //解题程序结束。
        //cout<<fixed<<setprecision(5)<<a

        in.close();
        out.close();
    }

    return 0;
}