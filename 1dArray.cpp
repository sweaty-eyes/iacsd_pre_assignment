#include <ctype.h>
#include <iostream>

// 1D Array

//Sol-1
int main(){
   int n;
   std::cin>>n;
   int arr[n];
   for (int i =0; i<n;i++){
       std::cin>>arr[i];
   }
   int min=arr[0], max=arr[0];
   for (int i=0;i<n;i++){
       if(arr[i]<min){
           min=arr[i];
       }
       if(arr[i]>max){
           max=arr[i];
       }
   }
   std::cout<<"min "<<min<<" max"<<max;
}

//Sol-2
int main(){
   int size;
   std::cin>>size;
   int arr[size];
   for (int i =0 ; i<size;i++){
       std::cin>>arr[i];
   }
   int key;
   std::cin>>key;
   for (int i =0; i<size;i++){
       if(key==arr[i]){
           std::cout<<"keys is present";
           break;
       }
   }
}

//Sol-3
int main(){
   int res = 0;
   int n;
   int arr[n];
   int key;
   for (int i=0; i<n; i++)
       if (key == arr[i])
           res++;
   return res;
}

//Sol-4
int main(){
   int size;
   std::cin>>size;
   int arr[size];
   int temp;
   for (int i =0 ; i<size;i++){
       std::cin>>arr[i];
   }
   for(int i=0;i<size;i++)
   {
       for(int j=i+1;j<size;j++)
       {
           if(arr[i]<arr[j])
           {
               temp =arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
}

//Sol-5
int main(){
   int size;
   int arr[size];
   std::cin>>size;
   for(int i=0; size>0; i++)
   {
       arr[i]=size%2;
       size= size/2;
   }
   std::cout<<"Binary of the given number= ";
   for(int i=i-1 ;i>=0 ;i--)
   {
       std::cout<<arr[i];
   }
}

