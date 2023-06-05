#include <iostream>
using namespace std;

int main()
{
    int tc, n, a[300];
    cin>>tc;
    for (int i=0; i<tc; i++)
    {
        int l=0, max=0;
        cin>>n;
        for (int j=0; j<n; j++)
        {
            cin>>a[j];
            if (a[j]==0)
            {
                l++;
                if (l>max)
                    max=l;
            }
            else
                l=0;
        }
        cout<<max<<endl;
    }
    return 0;
}
