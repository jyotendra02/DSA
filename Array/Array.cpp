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

int main()
{
    struct array arr = {{2,3,4,5,6},10,5};
    Display(arr);
    cout<<LinearSearch(&arr,15);
    return 0;
}