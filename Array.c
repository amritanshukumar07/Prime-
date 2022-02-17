// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int maxno= -99999;
//     for(int i=0;i<n;i++){
//         if(a[i]>maxno){
//             maxno=a[i];
//         }
//     }
//     printf("Maximum Element of the array is %d\n", maxno);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//         int n;
//     printf("Enter the size of array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int b[n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==(n-j-1)){
//                 b[j]=a[i];
//             }
//         }
//     }
//     printf("The elements of another array which is inverse of given array are\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",b[i]);
//     }
//     return 0;
// }
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the size of array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < n; ++i){
//    for (int j = i + 1; j < n; ++j){
//       if (a[i] > a[j]){
//         int  x = a[i];
//          a[i] = a[j];
//          a[j] = x;
//       }
//    }
// }
// int count=0;
// for(int i=0;i<n;i++){
//     if(a[i]==a[i+1]){
//         count++;
        
//     }
//     else{
//         printf("%d appears   %d times\n",a[i], count+1);
//         count =0;
//     }
   
// }
//     return 0;
//  }
// #include<stdio.h>
// int main(){
//        int n;
//     printf("Enter the size of array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }

//     int b[n];
//     printf("Enter the elements of another array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&b[i]);
//     }
//     for (int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 int temp = b[j];
//                 b[j]=a[i];
//                 a[i]=temp;
//             }
//         }
//     }
//     printf(" The elements of 1st array after swapping \n");
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\n");
//     printf("The elements of 2nd array after swapping\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",b[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//           int n;
//     printf("Enter the size of array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         if((a[i]%2==0) && (a[i]!=1)){
//             a[i]=0;
//         }
//         else
//         a[i]=1;
//     }
//     printf(" The elements of new array are\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//         int n;
//     printf("Enter the size of array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int b[n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 b[j]=a[i];
//             }
//         }
//     }
//     printf("The elements of another array which is copy of given array are\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",b[i]);
//     }
//     return 0;
// }
// #include <stdio.h>    
     
// int main()    
// {    
      
//               int n;
//     printf("Enter the size of array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
        
     
    
        
//     printf("Duplicate elements in given array: \n");    
     
//     for(int i = 0; i < n; i++) {    
//         for(int j = i + 1; j < n; j++) {    
//             if(a[i] == a[j])    
//                 printf("%d\n", a[j]);    
//         }    
//     }    
//     return 0;    
// }  