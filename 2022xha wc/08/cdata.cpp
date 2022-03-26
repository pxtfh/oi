#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[100000010];
int main()
{
    int fidx = 0;
    int fn, n = 0, m = 0;
    cin >> fn;

    unsigned seed = time(0);
    srand(seed);
    for (fidx = 1; fidx <= fn; fidx++)
    {
        string fname = to_string(fidx) + ".in";
        ofstream out(fname);

        if (out.is_open())
        {

            //数据生成代码开始
            int a;
            for(int i =0;i <12;i++){
                a = 10+rand()%341;
                out<<a<<endl;                
            }
            

            //数据生成代码结束
        }
        out.close();
    }

    return 0;
}