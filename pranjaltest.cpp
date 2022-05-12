// #include<iostream>
// #include<cstring>
// using namespace std;
// void sort(int *arr)
// {
//     cout<<"unsorted array"<<endl;
//     unsigned int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++)
//     cout<<arr[i];
//     cout<<endl;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;i<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     cout<<"sorted array"<<endl;
//      for(int i=0;i<n;i++)
//     cout<<arr[i];
// }
// int main()
// {
// 	int arr1[] = {1,46,33,4,44,5,9,4};
//    int *arr {arr1};
//    sort(arr);
//    return 0;
// }
	#include<iostream>                                                                   
#include<cmath>                                                                      

int             
main(){                                   
  float a[100][100], ans=0.0;                                                        

  for(int i=0; i < 100; i++){             
    for(int j=0; j < 100; j++){                                                      
      a[i][j] = (i+1.0)/(j+1.0);                                                     
    }                                                                                
  }         

  for(int i=0; i < 100; i++){                                                        
    for(int j=99; j >= 0; j--){                                                      
      if(i==j){
        a[i][j] = a[i][j];                                                                                                                   
        ans += a[i][j];                                                              
      }                                   
    }           
  }
  std::cout << ans << std::endl;
  return(0);      
}