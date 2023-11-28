// Section 10
// Challenge -
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decrypted the encrypted message back to the original message.

You may use the 2 strings below for your substitution.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character with position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitutes a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdvytkfuompciasr"};
    
    cout << "Enter your secret message: ";
    
    string secret_message;
    getline(cin, secret_message);
    
    for (size_t i = 0; i < secret_message.length(); ++i) {
        size_t alphabet_index = alphabet.find(secret_message[i]);
        
        if (alphabet_index != string::npos) {
            secret_message[i] = key[alphabet_index];
        }
    }
    
    cout << "Encrypted message: " << secret_message << endl;
    
    for (size_t i = 0; i < secret_message.length(); ++i) {
        size_t key_index = key.find(secret_message[i]);
        
        if (key_index != string::npos) {
            secret_message[i] = alphabet[key_index];
        }
    }
    
    cout << "Decrypted message: " << secret_message << endl;
    
    cout << endl;
    return 0;
}

