include<iostream>
using namespace std;
void merge(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int b[100];
    int k=0;
    while(i<=mid && j<=ub)
    {
        if(a[i]>=a[j])
        {
            b[k]=a[j];
            j++;
        }
        else
        {
            b[k]=a[i];
            i++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++,k++;
        }
    }
    if(j>ub)
    {
       while(i<=mid)
       {
           b[k]=a[i];
           i++,k++;
       }
    }
    for(int i = lb, k = 0; i <= ub;i++, k++)
    {
        a[i] = b[k];
    }

}
void merge_sort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid = (lb+ub)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main()     
{
    int a[100],lb,ub;
    cout<<"enter lower bound : ";
    cin>>lb;
    cout<<"enter upper bound : ";
    cin>>ub;
    cout<<"enter array elements....ok?"<<endl;
    for(int i=lb;i<=ub;i++)
    {
        cout<<"at position "<<i<<" : ";
        cin>>a[i];
        cout<<endl;
    }
    merge_sort(a,lb,ub);
    cout<<"sorted array ";
    for(int i=lb;i<=ub;i++)
    {
        cout<<a[i]<<",";
    }
    return 0;
}
