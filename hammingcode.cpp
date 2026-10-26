#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string data;
    cout <<"Enter a 7-bit data string:";
    cin >> data;
     vector<int> h(12, 0);
     h[11] = data[0]  - '0';
     h[10] = data[1]  - '0';
     h[9] = data[0]  - '0';
     h[7] = data[0]  - '0';
     h[6] = data[0]  - '0';
     h[5] = data[0]  - '0';
     h[3] = data[0]  - '0';
      h[1] = h[3] ^ h[5] ^ h[7] ^ h[9] ^ h[11]; // calculate redundant bits  using even parity //R1 checks positions: 1, 3, 5, 7, 9, 11
      h[2] = h[3] ^ h[6] ^ h[7] ^ h[10] ^ h[11];  // R2 checks positions: 2, 3, 6, 7, 10, 11
      h[4] = h[5] ^ h[6] ^ h[7];  // R4 checks positions: 4, 5, 6, 7
      h[8] = h[9] ^ h[10] ^ h[11];// R8 checks positions: 8, 9, 10, 11
       cout << "Generated 11-bit Hamming Codeword: ";
    for (int i = 11; i >= 1; i--) {
        cout << h[i];
    }
     cout << endl;
     
    return 0;

         

  }