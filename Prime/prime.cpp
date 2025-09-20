// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int count = 0;
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//             count++;
//         }
//     }
//     if(count == 2){
//         cout << "Prime" << endl;
//     } else {
//         cout << "Not Prime" << endl;
//     }
// }


// // Optimized Approach
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     int n ;
//     cin >> n;
//     for(int i = 2 ; cmath.sqrt(n) ; i++){
//         if(n % i == 0){
//             cout << "Not Prime" << endl;
//             return 0;
//         }
//     }
//     cout << "Prime" << endl;
// }


// prime numbers between between a and b
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int first = 12;
    int last = 23;
    for(int i = first ; i <= last ; i++){
        int x = 0;
        for(int i = 2 ; i <= sqrt(i) ; i++){
            if(i % 2 == 0){
                x = 1;
                break;
            }
        }
        if(x == 0){
            cout << i << " ";
        }
    }
    return 0;
}