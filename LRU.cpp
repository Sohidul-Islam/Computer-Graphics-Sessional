
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int findProcess(int fram[],int pro[],int j,int s);
void show(int arr[],int n);
int frameCheck(int c,int ar[],int n);
int findProcess(int fram[],int pro[],int j,int s)
{

    for(int i =0 ; i<s; i++)
    {
        if(pro[j]==fram[i])
        {
            return 1;
        }
    }
    return 0;
}

void show(int arr[],int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Fram: "<<i<<"--> "<<arr[i]<<endl;
    }

    cout<<endl;
}

int frameCheck(int c,int ar[],int n)
{

    for(int i = 0 ; i < n; i++)
    {
        if(ar[i]==1)
        {
            c++;
        }
    }

    if(c==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int fn,pn,j=0,i,f=0,hit=0,fault = 0,l;
    cout<<"Enter number frame: "<<endl;
    cin>>fn;
    cout<<"Enter number of process "<<endl;
    cin>>pn;
    cout<<"Enter processes "<<endl;
    int pro[pn],fram[fn]= {-1},flag[fn]= {0};
    int gchart[fn][pn];
    for(int i = 0 ; i < pn; i++)
    {
        cin>>pro[i];

    }
    cout<<"processes: "<<endl;
    for(int i = 0 ; i < pn; i++)
    {
        cout<<pro[i]<<" ";

    }
    cout<<endl;
    int d = 0,a= -1;
    for(int i = 0 ; i < fn; i++)
    {
        fram[i] = -1;

    }
    show(fram,fn);
    while(j<pn)
    {

        f = findProcess(fram,pro,j,fn);

        if(f==0)
        {
            fault++;
            if(fram[d]==-1 && d<fn)
            {
                fram[d] = pro[j];
                show(fram,fn);
                d++;
            }
            else
            {

                for(int i = 0; i<fn; i++)
                {
                    flag[i] = 0;
                }

                for(int k = j-1; k>=0; k--)
                {
                    for(int i = 0 ; i < fn ; i++)
                    {
                        if(pro[k]==fram[i] && frameCheck(0,flag,fn)==0)
                        {
                            a = i;
//
                            flag[a] = 1;
                        }
                    }

                }
                fram[a] = pro[j];


            }

        }
        else
        {
            hit++;

        }
          show(fram,fn);
        for(int i = 0; i<fn ; i++)
        {
            gchart[i][j] = fram[i];
        }
j++;




    }
      for(i = 0; i < fn ; i++)
    {
        cout<<"Frame "<<i+1<<":";
        for(j=0; j<pn ; j++)
        {
            if(gchart[i][j]==-1){
               cout<<" E";
            }
            else
            cout<<" "<<gchart[i][j];
        }
        cout<<endl;
    }

    cout<<"Hit: "<<hit<<" Fault: "<<fault<<endl;

}

