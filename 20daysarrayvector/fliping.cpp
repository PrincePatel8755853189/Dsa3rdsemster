#include <iostream>
using namespace std;
#include <vector>

void flip(vector<vector<int>> &v)
{
    int row = v.size();
    int coll = v[0].size();

    for (int i = 0; i < row; i++)
    {
        if (v[i][0] == 0)
        {
            for (int j = 0; j < coll; j++)
            {
                if (v[i][j] == 0)
                {
                    v[i][j] == 1;
                }
                else v[i][j] == 0;
            }
        }
    }
int zero =0;
int one =0;
if (zero>one){
for (int i = 0; i <row; i++)
{
   for (int  j = 0; j < coll; ++)
   {
    if
   }
   
}

}

    return;
}
int main()
{
    vector<vector<int>> v;

    vector<int> v1;
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);

    vector<int> v3;
    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(0);


flip (v);
for (int i = 0; i <v.size(); i++)
{
    for (int j = 0; i < v[0].size(); i++)
    {
       cout<<v[i][j]<<" "; 
    }
    
}

    
}