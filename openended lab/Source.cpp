#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

// Function to merge arrays maintaining ascending order
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    // Merge arrays
    merge(arr1, arr1 + size1, arr2, arr2 + size2, merged);
}

// Function to find common elements in two arrays
void findCommon(int arr1[], int size1, int arr2[], int size2) {
    cout << "Common elements: ";
    for (int i = 0; i < size1; i++) {
        if (binary_search(arr2, arr2 + size2, arr1[i])) {
            cout << arr1[i] << " ";
        }
    }
    cout << endl;
}

// Function to check if a string is palindrome
bool isPalindrome(string str) {
    int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str[i++] != str[j--]) {
                return false;
            }
        }
    return true;
}

int main() {
    int arr1[5], arr2[7];
    int merged[12];

    // Input values for arr1 and arr2
    cout << "Enter 5 integers for array 1: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Integer " << i + 1 << " : ";
        cin >> arr1[i];
    }

    cout << "Enter 7 integers for array 2: " << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Integer " << i + 1 << " : ";
        cin >> arr2[i];
    }

    // Sort arrays
    sort(arr1, arr1 + 5);
    sort(arr2, arr2 + 7);

    // Merge arrays
    mergeArrays(arr1, 5, arr2, 7, merged);

    // Display merged array
    cout << "Merged Array in ascending order: ";
    for (int i = 0; i < 12; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    // Find common elements
    findCommon(arr1, 5, arr2, 7);

    // Check if input sentence is a palindrome
    string sentence;
    cout << "Enter a sentence: ";
    cin.ignore(); // Ignore newline character
    getline(cin, sentence);

    if (isPalindrome(sentence)) {
        cout << "The sentence is a palindrome." << endl;
    }
    else {
        cout << "The sentence is not a palindrome." << endl;
    }

    return 0;
}