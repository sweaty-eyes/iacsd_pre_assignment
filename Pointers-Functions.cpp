#include <iostream>
//SOl-1

//int main(){
//    int size;
//    std::cin>>size;
//    int arr[size];
//    int *ptr = arr;
//    for(int i =0;i<size;i++){
//        std::cin>>arr[i];
//    }
//    int sum_o=0, sum_e=0;
//    for(int i =0 ;i<size;i++){
//        if(*ptr+i %2 ==0){
//            sum_e+=*ptr+i;
//        }
//        else{
//            sum_o+=*ptr+i;
//        }
//    }
//}

//Sol-2
//char* isEven(int number){
//    if (number%2){
//        return "odd";
//    }
//    else return "even";
//}
//int main(){
//    int size;
//    std::cin>>size;
//    int arr[size];
//    for(int i=0; i<size;i++){
//        std::cin>>arr[i];
//        std::cout<<isEven(arr[i]);
//    }
//}

//Sol-3
//char* isPrime(int number){
//    if (number == 1 ){
//        return "neither";
//    }
//    if(number ==2){
//        return "prime";
//    }
//    for(int i =2; i<number;i++){
//        if (number%i == 0){
//            return "not prime";
//        }
//    }
//    return "prime";
//}
//int main(){
//    int size;
//    std::cin>>size;
//    int arr[size];
//    for(int i=0; i<size;i++){
//        std::cin>>arr[i];
//        std::cout<<isPrime(arr[i]);
//    }
//}

//Sol-4

//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<string.h>
//void StrCat(char str[],char str1[]);
//void StrCmp(char str[],char str1[]);
//void StrRev(char str[]);
//void StrUpr(char str[]);
//void StrLwr(char str[]);
//void StrCpy(char str[],char str1[]);
//
//int main()
//{
//    char str[20],str1[20],ch;
//    int ope;
//    do{
//        printf("\n****Menu****");
//        printf("\n 1.strcat");
//        printf("\n 2.strcmp");
//        printf("\n 3.strrev");
//        printf("\n 4.strupr");
//        printf("\n 5.strlwr");
//        printf("\n 6.strcpy");
//        printf("\n 7.Exit \n");
//        printf("\n Which function do you want to use:- ");
//        scanf("%d",&ope);
//        if(ope==1 || ope==2)
//        {
//            printf("\n Enter first string (20 Characters Max):- ");
//            scanf("%s",str);
//            printf("\n Enter second string (20 Characters Max):- ");
//            scanf("%s",str1);
//        }
//        else if(ope==3 || ope==4 || ope==5 || ope==6)
//        {
//            printf("\n Enter any string (20 Characters Max):- ");
//            scanf("%s",str);
//        }
//        switch(ope)
//        {
//            case 1:
//                StrCat(str,str1);
//                break;
//            case 2:
//                StrCmp(str,str1);
//                break;
//            case 3:
//                StrRev(str);
//                break;
//            case 4:
//                StrUpr(str);
//                break;
//            case 5:
//                StrLwr(str);
//                break;
//            case 6:
//                StrCpy(str1,str); // contents of string are copied into string1
//                break;
//
//            default:
//                printf("\n Invalid Choice. \n \n");
//        }}while(ch!=7);
//    return 0;
//} // End of main
//// StrCat() user defined function in C to concatenate two strings without using string functions
//void StrCat(char str[],char str1[])
//{
//    int i,j=0;
//    for(i=(strlen(str)-1);i<=(strlen(str)+strlen(str1)-2);i++)
//    {
//        str[i]=str1[j];
//        j++;
//    }
//
//    printf("\n The Concatenation of two strings is \"%s\" \n \n",str);
//}
//// StrCmp() function to compare two strings without string library
//void StrCmp(char str[],char str1[])
//{
//    int i,j=0,LED=0;
//    for(i=0;i<=strlen(str)-1;i++)
//    {
//        if(str[i]!=str1[j])
//        {
//            LED=1;
//            break;
//        }
//        j++;
//    }
//    if(LED==0)
//        printf("\n Two strings is \"%s\" and \"%s\" are same \n \n",str,str1);
//    else
//        printf("\n Two strings is \"%s\" and \"%s\" are  not same \n \n",str,str1);
//}
//// Implicit declaration of StrRev() function to reverse a string without using string functions
//void StrRev(char str[])
//{
//    char str1[20];
//    int i,j=0;
//    for(i=strlen(str)-1;i>=0;i--)
//    {
//        str1[j]=str[i];
//        j++;
//    }
//    printf("\n The reverse string of \"%s\" is \"%s\" \n \n",str,str1);
//}
//// StrUpr() Function to make all characters in upper case in given string
//void StrUpr(char str[])
//{
//    char ch,str1[20];
//    int i;
//    for(i=0;i<=strlen(str)-1;i++)
//    {
//        ch=toupper(str[i]);
//        str1[i]=ch;
//    }
//
//    printf("\n The uppercase string of \"%s\" is \"%s\" \n \n",str,str1);
//}
//// StrLwr() Function to make characters lower case in given string
//void StrLwr(char str[])
//{
//    char ch,str1[20];
//    int i;
//    for(i=0;i<=strlen(str)-1;i++)
//    {
//        ch=tolower(str[i]);
//        str1[i]=ch;
//    }
//
//    printf("\n The lowercase string of \"%s\" is \"%s\" \n \n",str,str1);
//}
//// StrCpy function to make to copy a string without using standard library function
//void StrCpy(char str[],char str1[])
//{
//    int i,j=0;
//    for(i=0;str1[i]!='\0';i++)
//    {
//        *(str+j)=str1[i];
//        j++;
//    }
//    *(str+j)='\0';
//    printf("\n Str1 is copied into Str \n");
//    printf("\n Str= %s \n",str);
//}

//Sol-5
//int power(int base, int exponent){
//    int res =1;
//    for(int i =0; i<exponent;i++){
//        res*=base;
//    }
//    return res;
//}
//
//int fact(int number){
//    int res =1;
//    for(int i=1;i<=number;i++){
//        res*=i;
//    }
//    return res;
//}
//
//int main(){
//    int size;
//    std::cin>>size;
//    int sum = 0;
//    for (int i =0 ; i<size;i++){
//        sum+= power(-1,i)* fact(2*i+1)*2*i+1;
//    }
//    std::cout<<sum;
//}

// Sol-6
//int hcf(int n1, int n2);
//int main() {
//    int n1, n2;
//    std::cout << "Enter two positive integers: ";
//    std::cin >> n1, n2;
//    std::cout << n1, n2, hcf(n1, n2);
//}
//int hcf(int n1, int n2) {
//    if (n2 != 0)
//        return hcf(n2, n1 % n2);
//    else
//        return n1;
//}


//Sol-7
//int power(int base, int exponent){
//    if(exponent==0)
//        return 1;
//    if(exponent==1)
//        return base;
//    return base * power(base, exponent - 1);
//
//}

//Sol-8
//int sumDigits(int number){
//    if (number == 0)
//        return 0;
//    return (number % 10 + sumDigits(number / 10));
//
//}

//Sol-9
//int fib(int number){
//    if (number==1) return 0;
//    if (number==2) return 1;
//    return fib(number-2) + fib(number-1);
//}