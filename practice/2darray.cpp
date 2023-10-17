// ? 2D ARRAY

// #include<iostream>
// using namespace std;

// int main(){

//     int n, m;
//     cin >> n >> m;

//     int array[n][m];
//     // can use char, bool or float instead of int here

//     //* taking input
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin >> array[i][j];
//         }
//     }

//     //* printing output
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout << array[i][j]<<" ";
//         }
//         cout << endl;

//     }

//     return 0;
// }

// ? SEARCHING A MATRIX

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n, m;
//     cin >> n >> m;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> array[i][j];
//         }
//     }

//     int array[n][m];
//     int x;
//     cin >> x;

//     bool flag = false;
//     // to check if element is there initially or not
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (array[i][j] == x)
//             {
//                 cout << i << j << endl;
//                 flag = true;
//                 // means elemnt has been found
//             }
//         }
//     }
//     if (flag)
//     {
//         cout << "element found";
//     }
//     else
//     {
//         cout << "element not found";
//     }

//     return 0;
// }

//? square matrix A. rows = colums = N. transpose = matrix flipped over main diagonal
//! constrainsts = 1<=n<=1000
//  NxN matrix        //  transpose
//  1   2   3         //  1   4   7
//  4   5   6         //  2   5   8
//  7   8   9         //  3   6   9
// swap row with column and vice versa

// #include <iostream>
// using namespace std;

// int main()
// {

//     int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = i; j < 3; j++)
//         {
//             // swapping //temporarty variuable
//             int temp = array[i][j];
//             array[i][j] = array[j][i];
//             array[j][i] = temp;
//         }
//     }

//     // print
//     for(int i=0; i<3; i++){
//         for(int j = 0;j<3; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//? matrix multiplication
// 2 dimentional array given n1*n2 and n2*n3
// multipy and output
// ! constraints 1<=n1,n2,n3<=300

// matrix (3*4) * (4*3) == (3*3)

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n1, n2, n3;
//     cin >> n1 >> n2 >> n3;

//     int m1[n1][n2];
//     int m2[n2][n3];

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin >> m1[i][j];
//         }
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cin >> m2[i][j];
//         }
//     }

//     int ans[n1][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             ans[i][j] = 0;
//         }
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             for (int k = 0; k < n2; k++)
//             {
//                 ans[i][j] += m1[i][k] * m2[k][j];
//             }
//         }
//     }

//     for(int i=0; i<n1; i++){
//         for (int j=0;j<n3;j++){
//             cout << ans[i][j] << " ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// ? matrix search

// #include<iostream>
// using namespace std;

// int main(){

//     int n,m;
//     cin>>n>>m;
//     int target;
//     cin>>target;

//     int mat[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }
//     }
//     int r=0, c=m-1;
//     bool found = false;
//     while(r<n && c>=0){
//         if(mat[r][c]==target){
//             found = true;
//         }
//         if(mat[r][c]>target){
//             c--;
//         }
//         else{
//             r++;
//         }
//         if(found){
//             cout<<"element found";
//         }
//         else{
//             cout<<"element does not exist";
//         }
//     }

    

//     return 0;
// }