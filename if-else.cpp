// If - else

// Sol-1
// int main(){
//   int integer;
//   std::cin>>integer;
//   if (integer==1)std::cout<<"Neither";
//   else if (integer %2 ==0) std::cout<<"even";
//   else std::cout<<"odd";
// }

// Sol-2
// int main(){
//   int n;
//   std::cin>>n;
//   if (n%5==0 & n%7==0) std::cout<<"yes";
//   else std::cout<<"no";
// }

// sol-3
// int main(){
//   int s;
//   std::cin>>s;
//   if (s<150000) std::cout<<"tax = 0";
//   else if (150000<s && s <300000) std::cout<<"tax = 20";
//   else std::cout<<"tax = 30";
//   }

// sol-4
// int main() {
//   char c;
//   std::cin >> c;
//   c = tolower(c);
//   if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c=='u'))
//   std::cout<<"yes"; else std::cout<<"no";
// }

// Sol-5
// int main(){
//   float a[3], sum=0.00;
//   for (int i = 0;i<3;i++){
//     std::cin>>a[i];
//     sum+=a[i];
//   }
//   if (sum==180) std::cout<<"Traingle";
//   else std::cout<<"No";
// }

// Sol-6
// int main(){
//   char c;
//   std::cin>>c;
//   if (c == tolower(c))std::cout<<"lowercase";
//   else std::cout<<"uppercase";
// }

// Sol-7
// int main(){
//   char c;
//   std::cin>>c;
//   if (c ==tolower(c))std::cout<<char(toupper(c));
//   else std::cout<<char(tolower(c));
// }

// Sol-8
// int main(){
//   int a,b,c;
//   std::cin>>a>>b>>c;
//   if(a<b & a<c)std::cout<<"lowest"<<a;
//   else if(b<c)std::cout<<"lowest"<<b;
//   else std::cout<<"lowest"<<c;

//   if(a>b & a>c) std::cout<<"heighest"<<a;
//   else if (b>c)std::cout<<"high"<<b;
//   else std::cout<<"high"<<c;
// }