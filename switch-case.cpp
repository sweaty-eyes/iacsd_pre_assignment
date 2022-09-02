
// Switch-case

// Sol-1
// int main(){
//   int n;
//   std::cin>>n;
//   switch(n){
//     case 0: std::cout<<"zero";break;
//     case 1: std::cout<<"one";break;
//     case 2: std::cout<<"two";break;
//     case 3: std::cout<<"three";break;
//     case 4: std::cout<<"four";break;
//     case 5: std::cout<<"five";break;
//     case 6: std::cout<<"six";break;
//     case 7: std::cout<<"seven";break;
//     case 8: std::cout<<"eight";break;
//     case 9: std::cout<<"nine";break;
//     default: std::cout<<"not a single digit num";
//   }
// }

// Sol-2

// int main(){
//   int a,b;
//   char c;
//   std::cin>>a>>b>>c;
//   switch (c){
//     case '*': std::cout<<a*b;break;
//     case '/': std::cout<<a/b;break;
//     case '+': std::cout<<a+b;break;
//     case '-': std::cout<<a-b;break;
//   }
// }

// Sol-3
// int main() {
//   int a, b, choice;
//   int somenum;
//   std::cin >> a >> b >> choice;
//   switch (choice) {
//   case 1:
//     if (a == b)
//       std::cout << "equal";
//     else
//       std::cout << "not";
//     break;
//   case 2:
//     if (a < b)
//       std::cout << "less";
//     else
//       std::cout << "not";
//     break;
//   case 3:
//     std::cout << "q" << a / b << " r" << a % b;
//     break;
//   case 4:
//     std::cin >> somenum;
//     if ((somenum >= a & somenum <= b) || (somenum >= b & somenum <= a))
//       std::cout << "in range";
//     else
//       std::cout << "not";
//     break;
//   case 5:
//     a = a*b;
//     b = a/b;
//     a = a/b;
//     std::cout<<a<<b;
//     break;
//   }
// }

// Sol-4
//int main(){
//    int radius,choice;
//    std::cin>>radius>>choice;
//    switch (choice) {
//        case 1: std::cout<<3.17*radius*radius;
//            break;
//        case 2: std::cout<<2*3.17*radius;
//            break;
//        case 3: std::cout<<3.17*radius*radius*radius;
//            break;
//    }
//}


//Sol-5
//int main(){
//    float a[2],b[2];
//    int choice;
//    std::cout<<"\n 1: add \n 2: subtract \n 3: multiply";
//    std::cin>>choice;
//    std::cin>>a[0]>>a[1];
//    std::cin>>b[0]>>b[1];
//    switch (choice) {
//        case 1: std::cout<<(a[0]*b[1]+a[1]*b[0])/(a[1]*b[1]);
//            break;
//        case 2: std::cout<<(a[0]*b[1]-a[1]*b[0])/(a[1]*b[1]);
//            break;
//        case 3:std::cout<<a[0]*b[0]/(a[1]*b[1]);
//            break;
//    }
//}
