#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        if (i < n)
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
            for (int p = 1; p <= 2 * i - 1; p++)
            {
                if (p == 1 || p == 2 * i - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else{
            for(int p=1;p<=n;p++){
                printf("* ");
            }
        }
        i++;
    }
}

/* C++ */

#include<iostream>
using namespace std;
int main(){
 int n, i = 1;
    cin>>n;
    while (i <= n)
    {
        if (i < n)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout<<" ";
            }
            for (int p = 1; p <= 2 * i - 1; p++)
            {
                if (p == 1 || p == 2 * i - 1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        else{
            for(int p=1;p<=n;p++){
                cout<<"*"<<" ";
            }
        }
        i++;
    }
    return 0;
}