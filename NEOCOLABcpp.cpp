// Single File Programming Question
// Problem Statement



// Sam is working on a text-processing task where he needs to replace all occurrences of a specific word in a string with another word. Given a string, a target word to be replaced, and a replacement word, Sam wants to output the modified string with all instances of the target word replaced by the replacement word. Use string objects for processing.

// Input format :
// The first line of input consists of a sentence.

// The second line of input consists of the word to be replaced in the sentence.

// The third line of input consists of the replacement word.

// Output format :
// If the word to be replaced is present in the sentence, the output prints the modified sentence after replacing it.

// If the word to be replaced is not present in the sentence, the output prints the original string as such.



// Refer to the sample output for the exact format.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 2 < Length of the sentence < 1000

// The characters are case-sensitive

// Sample test cases :
// Input 1 :
// Hello world! 
// Hello
// Hi
// Output 1 :
// Hi world! 
// Input 2 :
// Always the sun the moon
// the
// a
// Output 2 :
// Always a sun a moon
// Input 3 :
// Harry potter
// Potter
// harry
// Output 3 :
// Harry potter
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    string target;
    string replacement;

    // Read input
    getline(cin, sentence);
    getline(cin, target);
    getline(cin, replacement);

    // Find and replace all occurrences of target in sentence
    size_t pos = 0;
    while ((pos = sentence.find(target, pos)) != string::npos) {
        sentence.replace(pos, target.length(), replacement);
        pos += replacement.length(); // Move past the replacement
    }

    // Output the modified sentence
    cout << sentence << endl;

    return 0;
}
