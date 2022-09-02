// Simple C

// Solution 1
int main() {
  float radius =0;
  std::cin>>radius;
  std::cout << "cir"<< 2*3.14*radius<<" area"<<3.14*radius*radius;
}

// Sol-2
int main()
{
  char c;
  std::cin>>c;
  std::cout<<int(c);
}

// Sol-3
int main(){
  int marks[5];
  int sum=0;
  for(int i =0 ;i<5;i++){
    std::cin>>marks[i];
    sum+=marks[i];
  }
  std::cout<<"total marks "<<sum<<" Percentage "<< sum*0.2<<"%";
}

// Sol-4
int main(){
  int salary = 0;
  std::cin>>salary;
  std::cout << "final earnings "<<(((salary*0.98)*0.97)*1.05)*1.08;
}

// Sol-5
int main(){
method 1
int a,b,temp;
std::cin>>a>>b;
temp=a;
a=b;
b=temp;
std::cout<<a<<b;

method 2
  int a,b;
  std::cin>>a>>b;
  a = a*b;
  b = a/b;
  a = a/b;
  std::cout<<a<<b;
}

// Sol -6
int main(){
  float pi = 3.14;
  float radius,height;
  std::cin>>radius>>height;
  std::cout<<"area: "<<2*pi*radius*height<<" Volume:
  "<<pi*radius*radius*height;
}

// Sol-7
int main(){
  float f=0,c=0;
  std::cin>>f;
  c = (f -32)*0.55 ;
  std::cout<<"cel"<<c<<" kelvin"<<c +273.15;
}
