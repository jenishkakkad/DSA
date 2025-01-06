#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};

    // Insert 25 three positions from the end
    v.insert(v.end() - 3, 25);

    // Display the updated vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    cout<<endl;

    for (int num : v) 
    {
        cout << num;
        cout<<endl;
    }

    // cout << endl;

    return 0;
}