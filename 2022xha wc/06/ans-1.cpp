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
        int n,j=0,y=0,t=0,num=0;
        int jp=0,yp=0,tp=0;
        int  a[101][11]={0};
        in>>n;
        for (int i =0;i<n; i++){
            in>>j>>y>>t;
            jp=jp+j;
            yp=yp+y;
            tp=tp+t;
        }
        num=jp+yp+tp;
        out<<jp<<' '<<yp<<' '<<tp<<' '<<num<<endl;

        
        //解题程序结束。
        //cout<<fixed<<setprecision(5)<<a

        in.close();
        out.close();
    }

    return 0;
}