#include <iostream>

using namespace std;

int fnLinSearch(int [], int, int);



int main(void){

int iaArr[20], iNum,iKey;
int i,iPos=0;
cout<< "Enter the size of the array" <<endl;
cin>>iNum;
cout<< "Enter the elements of the array"<<endl;

for(i=0; i<iNum; i++)
{
cin>>iaArr[i];
}

cout<< "enter the key element"<<endl;
cin>>iKey;
iPos=fnLinSearch(iaArr,iKey,iNum);
if(iPos==-1){
cout<<"\nElement not found \n"<<endl;
}
else{
cout<<"\n"<<"Element found at position "<<iPos<<endl;

    return 0;
}
}

int fnLinSearch(int A[], int k, int iN)

{
if(iN==0)
{return -1;
}
else
{
if(k==A[iN-1])
{
return iN;
}

else{
return fnLinSearch(A,k,iN-1);
}

}
}







