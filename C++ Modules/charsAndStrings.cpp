#include <iostream>
#include <string>
using namespace std;
/*
	Substitution Cipher
	Make a program that can take a message and encrypt it by substituting characters
	and then decrypt it back into the original message.
	You will need to use 2 strings and use the character positions of the original message
	and encrypt the message using the position of the original message's letter but in the encrypter.

	Methods needed:substr, find, 
	
	Steps:
	1. Use a for loop to to loop through the positions of each index in message
	2. Use those positions and swap them with the positions of the encrypter to encrypt the message
*/
int main()
{
	string message {};
	string alphabet  {"!abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
	string encrypter {" zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA!"};
	string code{};
	string decrypt{};


	cout << "Please Enter your message: ";
	getline(cin, message);

	cout << "\nEncrypting Message..." << endl;

	for (int i = 0; i < message.size(); i++)
	{
		int pos = alphabet.find(message.substr(i, 1));
		if (pos != string::npos)
		{
			code += encrypter.substr(pos, 1);
		}
		else
		{
			code += message.substr(i, 1);
		}
	}
	cout << code << endl;

	cout << "\nDecrypting Message..." << endl;

	for (int j = 0; j < code.size(); j++)
	{
		int index = encrypter.find(code.substr(j, 1));
		if (index != string::npos)
		{
			decrypt += alphabet.substr(index, 1);
		}
		else
		{
			decrypt += code.substr(j, 1);
		}
	}
	cout << decrypt << endl;

	return 0;
}
