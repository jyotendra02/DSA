#include<iostream>
using namespace std;

struct array 
{
    int a[10];
    int size;
    int length;
};

void Display(struct array arr)
{
    int i;
    cout<<"Elements in array: ";
    for(i = 0;i < arr.length;i++)
    {
       cout<<arr.a[i]<<" ";
    }cout<<endl;
}

void swap(int *x,int *y)
{
  int temp = *x;
  *x=*y;
  *y = temp;
}

void Append(struct array *arr,int element )
{
     if(arr->length < arr->size)
       arr->a[arr->length++] = element;
}

void Insert(struct array *arr, int index , int element)
{
    int i;
    if( index >= 0 && index < arr->length )
    {

        for( i = arr->length; i>index;i--)
          arr->a[i] = arr->a[i-1];
         arr->a[index]=element;
         arr->length++; 
         //what if length exceeds size of array??
    }
}
int Delete(struct array *arr,int index)
{
    int i,x=0;
    if(index >= 0 && index < arr->length)
    {
         x = arr->a[index];
        for(i = index ;i<arr->length-1;i++)
           arr->a[i] = arr->a[i+1];
         arr->length--;
         return x;    
    } 
    return -1;
}

int LinearSearch(struct array *arr,int key)
{
  int i;
  for(i=0;i<arr->length;i++)
  {
    if(arr->a[i]==key)
      return i;
  }
  return -1;
}

int LinearTrans(struct array *arr,int key)
{
  int i;
  for(i=0;i<arr->length;i++)
  {
    if(key==arr->a[i])
    {
      if(i!=0) //Improvement In lineear Transposition 
      { 
       swap(&arr->a[i],&arr->a[i-1]);
       return i;
      }
      return i;
    }
  }
}

int LinearFront(struct array *arr,int key)
{
  int i;
  for(i=0;i<arr->length;i++)
  {
    if(key==arr->a[i])
    {
      if(i!=0) //Improvement In lineear Transposition 
      { 
       swap(&arr->a[i],&arr->a[0]);
       return i;
      }
      return i;
    }
  }
}

int BinarySearch(struct array arr,int key)
{
  int low ,high, mid;
  low =0;
  high=arr.length-1;
  
  while(low <=high)
  {
    mid = (low + high)/2;
    if(key==arr.a[mid])
     return mid;
    else if(key<arr.a[mid])
     return high = mid-1;
    else 
     return low = mid +1;
  }
  return -1;
}

int GetIndex(struct array arr,int index)
{
  if(index>=0 && index<arr.length)
   return arr.a[index];
}

void SetIndex(struct array *arr, int index, int key )
{ 
  if(index>=0 && index<arr->length)
   arr->a[index]=key;
}

int Max(struct array arr)
{
  int max = 0;

  for(int i = 0;i<arr.length;i++)
  {
    if (arr.a[i]>max)
     max = arr.a[i];
  }
  return max;
}

int Min(struct array arr)
{
  int min = arr.a[0];

  for(int i = 1;i<arr.length;i++)
  {
    if (arr.a[i]<min)
     min = arr.a[i];
  }
  return min;
}

int Sum(struct array arr)
{
  int total=0;
  for(int i =0;i<arr.length;i++)
       total += arr.a[i];
  return total;     
}
float Average(struct array arr)
{
  return Sum(arr)/(float)arr.length;
} 

int main()
{
    struct array arr = {{3,4,5,6,2},10,5};
    Display(arr);
    SetIndex(&arr,3,18);
    Display(arr);
    cout<<Average(arr);
    return 0;
}