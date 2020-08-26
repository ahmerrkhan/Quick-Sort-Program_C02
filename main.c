#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],n,i;

    printf("Enter Number of Terms :\n");
    scanf("%d",&n);

    printf("Enter %d Numbers : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //Logics
    QuickSort(arr,0,n-1);

    //After sorting
    printf("After Sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}
void QuickSort(int arr[],int lb, int ub)
{

    int loc;
    if(lb<ub)
    {
     loc=Partition(arr,lb,ub);
     QuickSort(arr,lb,loc-1);
     QuickSort(arr,loc+1,ub);
    }
}

int Partition(int arr[],int lb,int ub)
{
  int start,end,pivot,temp;
  start=lb;
  end=ub;
  pivot=lb;

  while(start<end)
  {
      while(arr[start]<=arr[pivot])
      {
          start++;
      }
      while(arr[end]>arr[pivot])
      {
          end--;
      }
      if(start<end)
      {
          temp=arr[start];
          arr[start]=arr[end];
          arr[end]=temp;
      }
  }
     temp=arr[pivot];
     arr[pivot]=arr[end];
     arr[end]=temp;

     return end;
}

