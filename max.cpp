#include <iostream>

using namespace std;

void fnRecMaxMin(int[],int, int ,int*,int*);
int main()
{
    int iaArr[500000],iNum,i;
    int iMax = 0,iMin = 0;
    cout<<"\nEnter the size of the array\n"<<endl;
    cin>> iNum;
    cout<<"\n Enter the element of the array"<<endl;
    for(i=0;i<iNum;i++){
    cin>>iaArr[i];
    }
    fnRecMaxMin(iaArr,0,iNum-1,&iMax,&iMin);

    cout<<"\n"<<"Max Element = "<<iMax<<endl;
    cout<<"\n"<<"Min Element = "<<iMin<<endl;


    return 0;
}

void fnRecMaxMin(int a[], int low, int high, int *max, int *min)
{int mid,max1,max2, min1,min2;
         if(high-low ==1){
         if(a[low]>a[high]){


         *max = a[low];
         *min = a[low];
         }
         else
         {
         *max = a[high];
         *min = a[low];
         }
         }
         else if(low==high)
         {
         *min = *max = a[low];
         }
         else if(low<high){
         mid = (low+high)/2;



           fnRecMaxMin(a,low,mid,&max1,&min1);
           fnRecMaxMin(a,mid+1, high,&max2,&min2);
           if(max1>max2){
           *max=max1;
           }
           else{
           *max=max2;
           }
           if(min1< min2){
             *min = min1;
           }
           else{
            *min = min2;
           }
           }
           }

