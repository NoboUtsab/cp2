#include<bits/stdc++.h>

using namespace std;

int main()
{
     int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo, i, k;
    cin>>sizeOne;

    for(i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    k = i;

    cin>>sizeTwo;

    for(i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
 sort(arrMerge,arrMerge+k);
    for(i=k-1; i>=0; i--)
        cout<<arrMerge[i]<<" ";
    cout<<endl;


}
