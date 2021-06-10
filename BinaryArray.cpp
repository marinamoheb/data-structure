#include<iostream>

using namespace std;

void Sort1(int a[] , int n)
{
    int numberOfZeros = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(a[i]==0)
            numberOfZeros++;
    }

    for(int i = 0 ; i < numberOfZeros ; i++)
    {
        a[i]=0;
    }

    for(int i = numberOfZeros ; i<n ; i++)
    {
        a[i]=1;
    }
}

void Sort2(int a[] , int n)
{
    /*int sum = 0 ;

    for(int i = 0 ; i < n ; i++)
        sum+=a[i];

    for(int i = 0 ; i <(n-sum) ; i++)
        a[i]=0;

    for(int i = (n-sum) ; i<n ; i++)
        a[i]=1;
        */
    int pivot = 1;
    int e = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] < pivot)
        {
            int temp = a[i];
            a[i] = a[e];
            a[e] = temp;
            e++;
        }
    }
}

void Sort3(int a[] , int n )
{
    int p1 = 0;
    int p2 = n - 1;

    while(p1 < p2)
    {
        if(a[p1] == 1)
        {
            int temp = a[p1];
            a[p1] = a[p2];
            a[p2] = temp;
            p2--;
        }
        else
        {
            p1++;
        }
    }
}

int main()
{
    int a[]={1,0,1,0,1,0,0,1,0};
    Sort2(a,9);
    for(int i = 0 ; i < 9 ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    Sort2(a,9);
    for(int i = 0 ; i < 9 ; i++)
    {
        cout<<a[i]<<" ";
    }
     cout<<endl;
    Sort3(a,9);
    for(int i = 0 ; i < 9 ; i++)
    {
        cout<<a[i]<<" ";
    }
}