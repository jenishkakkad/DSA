#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};

    // Replace the value at position 2 with 25
    v[1]=25;
    
    cout<<v[1];

    // Display the updated vector
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << endl;
    // }

    return 0;
}