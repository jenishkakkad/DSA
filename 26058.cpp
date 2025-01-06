#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: એક વેક્ટર બનાવીએ અને તેને શુરૂઆતી મૂલ્યો આપીએ
    vector<int> numbers = {10, 20, 30, 40, 50, 60};

    // Step 2: મૂળ વેક્ટર દર્શાવો
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 3: વેક્ટરમાં પ્રથમ 3 તત્વો કાઢી નાખો
    numbers.erase(numbers.begin(), numbers.begin() + 5);

    // Step 4: અપડેટ થયેલ વેક્ટર દર્શાવો
    cout << "Vector after erasing the first 3 elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
