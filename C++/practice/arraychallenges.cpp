//? GIVEN AN ARRAY A[] OF SIZE N. FOR EVERY I FROM 0 TO N-1 OUTPUT MAX(A[0],A[1],...,A[I)
// given        1 0 5 4 6 8
// index        0 1 2 3 4 5
// max till i:  1 1 5 5 6 8 //if greater then change
// apporach: make a variable mx which stores the maximum ith element
// and iterate the array and update mx = max(mx, a[i])

// #include<iostream>
// using namespace std;

// int main(){

//     int mx=-1999999;
// or use INT_MIN
//     // because we need to maximize
//     int n;
//     cin >>n;

//     int array[n];
//     for(int i=0; i<n; i++){
//         cin >>array[i];
//     }
//     for(int i=0; i<n; i++){
//         mx = max(mx,array[i]);
//         // check which is max
//         cout << mx <<endl;
//         // then update
//     }

//     return 0;
// }

//* SUBARRAY V/S SUBSEQUENCE
//  ARRAY        1 2 0 7 2 0 2
// sub-array        2 0 7 2    //continuos broken from the array
// sub-sequence     2   7 2    //non-continuous broken from the array
// every subarray is a subsequence but every subsequence is not a subarray

//? SUM OF ALL SUBARRAY
// given array of size n. output sum of each subarray of given array
// will require 3 loops instead of 2 shown below. so below answer is questionable
// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
// int curr=0;
//     for (int i = 0; i < n; i++)
//     {
//         curr=0;
//         for (int j = 0; j < n; j++)
//         {
//             curr += array[i];
//             cout << curr << endl;
//         }
//     }

//     return 0;
// }

//? LONGEST ARITHMETIC SUBARRAY
// arithmetic array is array that conmtains two int where differnece between
// consecutive ints are equal exapmple: [9,10] , [3,3,3] arithmetic array BUT [1,2 4] is NOT

// mary has array of N non negative int. i-th int of aray is A. she will choose
// a contiguous arithmetic subarray from her array that has max length. find max length.

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     int ans = 2;
//     // initially these values
//     int pd = array[1] - array[0];
//     int j = 2;
//     int current = 2;

//     while (j < n)
//     {
//         if (pd == array[j] - array[j - 1])
//         // if previous difference is == current difference
//         {
//             current++;
//         }
//         else
//         {
//             pd = array[j] - array[j - 1];
//             // update 2 because streak broken
//             current = 2;
//         }
//         ans = max(ans, current);
//         j++;
//     }
//     cout << ans << endl;

//     return 0;
// }

//? RECORD BREAKER
// mary given number or visitors at her park on N consecxutive day.
// no of visitor on i-th day is V. day is record breaking if it satisfies both the conditions:
// no of visitors on the day is strictly larger than the number of visitor on each of previous days.
// either it is the last day or no of visitors on the day is strictly larger than no of visitors on follorwing day

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int array[n + 1];
//     array[n] = -1;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return 0;
//     }

//     int ans = 0;
//     int mx = -1;

//     for(int i=0; i<n; i++){
//         if(array[i]>mx && array[i]> array[i+1]){
//             ans++;
//         }
//         else{
//             mx = max(mx, array[i]);
//         }
//     }
//     cout<<ans<<endl;

//     return 0;
// }

// ? PRINT ALL POSSIBLE SUBARRAYS

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     for (int i = 0; i < n; i++)
//     // loop for starting point
//     {
//         for (int j = i; j < n; j++)
//         // loop for ending point
//         {
//             for (int k = i; k <= j; k++)
//             // loop for elements inside i and j (starting and ending)
//             {
//                 cout << array[k] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }

//? MAX SUBARRAY

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     int maxSum = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//                 int sum = 0;
//                 // needs to be declared inside the loop

//             for (int k = i; k <= j; k++)
//             {
//                 sum += array[k];
//             }
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout << maxSum << endl;

//     return 0;
// }
//* 3 loops so time complexity is O(n^3)

//? MAX SUBARRAY USING CUMULATIVE SUM APPROACH FOR BETTER TIME COMPLEXITY

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     //2nd array
//     int currentSum[n+1];
//     // this is an array named currentSum
//     currentSum[0]=0;

//     for (int i = 0; i <= n; i++)
//     {
//         currentSum[i]=currentSum[i-1] + array[i-1];
//     }

//     int maxSum = INT_MIN;
//     for(int i = 0; i <= n; i++){
//         int sum = 0;
//         for(int j = 0; j < i; j++){
//             sum = currentSum[i] - currentSum[j];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout << maxSum << endl;

//     return 0;
// }
// * time complexity O(n^2)

//? MAX SUBARRAY USING KADANES ALGO FOR EVEN BETTER TIME COMPLEXITY

// #include<iostream>
// #include <climits>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     int currentSum = 0;
//     int maxSum= INT_MIN;
//     for(int i=0; i < n; i++){
//         currentSum += array[i];
//         if(currentSum<0){
//             currentSum=0;
//         }
//         maxSum=max(maxSum,currentSum);
//     }
//     cout<<maxSum<<endl;

//     return 0;
// }

// ? MAXIMUM CIRCULAR SUBARRAY SUM

// #include <iostream>
// #include <climits>
// using namespace std;

// int kadane(int array[], int n)
// {
//     int currentSum = 0;
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         currentSum += array[i];
//         if (currentSum < 0)
//         {
//             currentSum = 0;
//         }
//         maxSum = max(currentSum, maxSum);
//     }
//     return maxSum;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     int wrapsum;
//     int nonwrapsum;

//     nonwrapsum = kadane(array, n);
//     int totalSum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         totalSum += array[i];
//         array[i] = -array[i];
//     }
//     wrapsum = totalSum + kadane(array, n);

//     cout << max(wrapsum, wrapsum) << endl;
//     return 0;
// }

// ? PAIR SUM PROBLEM

// #include <iostream>
// using namespace std;

// bool pairsSum(int array[], int n, int k)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (array[j] + array[i] == k)
//             {
//                 cout << i << " " << j << endl;
//                 return true;
//             }
//         }
//     }
// }

// int main()
// {

//     int array[] = {2, 4, 7, 11, 14, 16, 20, 21};
//     int k = 31;

//     cout << pairsSum(array, 8, k) << endl;

//     return 0;
// }
// * time complexity is O(n^2) cause double loop


// ?PAIR SUM PROBLEM  FOR BETTER TIME COMPLEXITY

// #include <iostream>
// using namespace std;

// bool pairsSum(int array[], int n, int k)
// {
//     int low=0;
//     int high=n-1;

//     while(low<high){
//         if(array[low]+array[high]==k){
//             cout<<low<<" "<<high<<endl;
//             return true;
//         }
//         else if(array[low]+array[high]>k){
//             high--;
//         }
//         else{
//             low++;
//         }
//     }
// }

// int main()
// {

//     int array[] = {2, 4, 7, 11, 14, 16, 20, 21};
//     int k = 31;

//     cout << pairsSum(array, 8, k) << endl;

//     return 0;
// }
//* time complexity O(n) is sorted array
// else sorting complexity will come in between


