// long long binpow(long long a, long long b, long long m) {
//     a %= m;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % m;
//         a = a * a % m;
//         b >>= 1;
//     }
//     return res;
// }





//     int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
     
// }


 
// int nCr(int n, int r)
// {
//     return fact(n) / (fact(r) * fact(n - r));
// }
 
// int fact(int n)
// {
//     int res = 1;
//     for (int i = 2; i <= n; i++)
//         res = res * i;
//     return res;
// }







// long long gcd(long long int a, long long int b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }
 
// // Function to return LCM of two numbers
// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }






// bool check(const pair<int,int > a,const pair<int,int > b)
// {
//   if(a.first<b.first)
//   {
//     return true;
//   }
//   else if(a.first==b.first)
//   {
//     if(a.second<b.second)
//     return true;
//   }
 
//   return false;
// }
