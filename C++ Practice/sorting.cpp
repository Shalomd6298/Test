#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void arr_print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Bubble(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    arr_print(arr,n);
}

void Insertion(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {   
        int j = i-1;
        int x = arr[i];
        while(j>-1 && arr[j]>x)
        {
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = x;
    }
    arr_print(arr,n);
}

void Selection(int arr[], int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k])
            {
                k = j;
            }
        }
        swap(arr[i],arr[k]);
    }
    arr_print(arr,n);
}

int main()
{
    int arr[8] = {9,5,7,3,4,11,13,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    Bubble(arr,n);
    Insertion(arr,n);
    Selection(arr,n);
    
    cout<<"Changes have been made"<<endl;
    return;
}