#include <iostream>

////Sol-1
int main(){
   int row, col;
   std::cin>>row>>col;
   int arr[row][col];
   int sum;
   for (int i =0; i<row; i++){
       sum =0;
       for (int j=0; j<col; j++){
           std::cin>>arr[i][j];
           sum+=arr[i][j];
       }
       std::cout<<sum;
   }
}

//Sol-2
int main(){
   int row, col;
   std::cin>>row>>col;
   int arr[row][col];
   int tarr[col][row];
   for (int i =0; i<row; i++){
       for (int j = 0; j < col; j++)
       {
           std::cin >> arr[i][j];
       }
   }
   for(int j=0; j<col; j++) {
       for (int i = 0; i < row; i++) {
           tarr[j][i]=arr[i][j];
       }
   }
   for (int i =0; i<col; i++){
       for (int j = 0; j < row; j++)
       {
           std::cout << tarr[i][j];
       }
   }
}

//Sol-3
int main(){
   int m1_row, m1_col, m2_row,m2_col;
   std::cin>>m1_row>>m1_col;
   int arr[m1_row][m1_col];
       for (int i =0; i<m1_row; i++){
       for (int j = 0; j < m1_col; j++)
       {
           std::cin >> arr[i][j];
       }
   }
   std::cin>>m1_row>>m1_col;
   int arr2[m1_row][m1_col];
   for (int i =0; i<m2_row; i++){
       for (int j = 0; j < m2_col; j++)
       {
           std::cin >> arr2[i][j];
       }
   }
//    ---------- Addition-----------
   if (m1_col==m2_col & m1_row==m2_row){
       for (int i =0; i<m2_row; i++){
           for (int j = 0; j < m2_col; j++)
           {
               std::cout <<arr[i][j]+arr2[i][j];
           }
       }
   }
   else{
       std::cout<<"They can't be added";
   }
//    --------------- Multiplication----------------
   int mult[m1_row][m2_col];
   for(int i = 0; i < m1_row; ++i)
       for(int j = 0; j < m2_col; ++j)
       {
           mult[i][j]=0;
       }
   if(m1_row==m2_col){
       for(int i = 0; i < m1_row; ++i)
           for(int j = 0; j < m2_col; ++j)
               for(int k = 0; k < m1_row; ++k)
               {
                   mult[i][j] += arr[i][k] * arr2[k][j];
               }
   }
   else{
       std::cout<<"matrix differ in shape";
   }
}

//Sol-4
int main(){
   int row, col;
   std::cin>>row>>col;
   int arr[row][col];
   int tarr[col][row];
   // ----------1-------------------
   for (int i =0; i<row; i++){
       for (int j = 0; j < col; j++)
       {
           std::cin >> arr[i][j];
       }
   }
   for(int j=0; j<col; j++) {
       for (int i = 0; i < row; i++) {
           tarr[j][i]=arr[i][j];
       }
   }
   if(row==col){
   for (int i =0; i<col; i++){
       for (int j = 0; j < row; j++)
       {
           if(arr[i][j]!=tarr[i][j]){
               std::cout<<"no symmetric";
               break;
           }
       }
   }
   }else{
       std::cout<<"Non symmetric";
   }
//    --------------2-------------------
   int sum=0;
   for(int i =0;i<row;i++){
       sum +=arr[i][i];
   }
//    ---------------3------------------
   for(int i =1; i<row;i++){
       for( int j =0; j<i; j++){
           if(arr[i][j]!=0){
               std::cout<<"not upper";
           }
       }
   }
}
