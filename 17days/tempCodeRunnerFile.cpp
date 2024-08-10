
void sort10m2(vector<int> & v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j){
        if (v[i] == 0) i++;
        if (v[j] == 1) j--;
        if(i>j) break;
        if (v[i] == 1 && v[j] == 0) {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}