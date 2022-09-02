//#include <iostream>
//#include <string>
//using namespace std;
//Sol - 1
//int main(){
//    string sent;
//    cin>> sent;
//    int size = sent.length();
//    for(int i =0; i<size;i++){
//        if(sent[i] == 32 ){
//            sent[i] = 42;
//        }
//        else if(isalpha(sent[i])){
//        if (sent[i] ==tolower(sent[i]))sent[i] = char(toupper(sent[i]));
//        else sent[i] =char(tolower(sent[i]));
//        }
//        else if (isalnum(sent[i])){
//            sent[i] = ;
//        }
//    }
//
//}

// SOl-2

//int main(){
//    int size;
//    cin>>size;
//    string arr[size];
//    int max=0, index=0;
//    for(int i=0;i<size;i++){
//        cin>>arr[i];
//        if (arr[i].length() >= max){
//            max = arr[i].length();
//            index =i;
//        }
//    }
//}

//Sol-3
//int lengthofstring()
//{
//    int length;
//    char string[20];
//    printf("\nEnter String: ");
//    scanf("%s",&string);
//    length=strlen(string);
//    printf("\nLength of string is: %d",length);
//}
////To copy one string into another
//int copystring()
//{
//    char string2[20];
//    char string[20];
//    printf("\nEnter String: ");
//    scanf("%s",&string);
//    strcpy(string2,string);
//    printf("\nCopied string is: %s",string2);
//}
////To concatenatation of 2 strings
//int add()
//{
//    char string2[20];
//    char string[20];
//    char string3[20];
//    printf("\nEnter 1st String: ");
//    scanf("%s",&string);
//    printf("\nEnter 2nd String: ");
//    scanf("%s",&string2);
//    printf("\nAddition of 2 string: %s",strcat(string,string2));
//}
////To compare 2 String
//int compare()
//{
//    char string2[20];
//    char string[20];
//    printf("\nEnter 1st String: ");
//    scanf("%s",&string);
//    printf("\nEnter 2nd String: ");
//    scanf("%s",&string2);
//    if(strcmp(string,string2)==0)
//    {
//        printf("\nBoth are equal");
//    }
//    else
//    {
//        printf("\nBoth are different");
//    }
//}
//int main()
//{
//    int c;
//    do
//    {
//        printf("\n\n1. Length of string\n2. Copy String \n3. Connect Two Strings \n4. Compare two                    strings\n5. Exit\nEnter your choice:");
//        scanf("%d",&c);
//        switch(c)
//        {
//            case 1:lengthofstring();break;
//            case 2:copystring();break;
//            case 3:add();break;
//            case 4:compare();break;
//        }
//    }while(c<5);
//}
