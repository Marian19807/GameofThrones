// GameofThrones.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void poateFiPalindrom( std::string& caractere)

{
	std::string chr;
    std::string caractere2;
	std::string caractere3;
	for (int i = 0; i < caractere.size(); i++)
	{
		
		for (int j = i + 1; j < caractere.size(); j++)

		{

			if (caractere[i] == caractere[j]) {
				caractere2.push_back(caractere[i]);

				caractere.erase(j, 1);
				caractere.erase(i, 1);
				
				j = i;
				

				
			}

			

		}
		
	
	}
	if (caractere.size() > 1){
		std::cout << "It is not a palindrom" << std::endl;
		return;
	}
	
		chr.push_back(caractere[0]);
	for (int i = caractere2.size()-1; i >= 0; i--) 
	{
		caractere3.push_back(caractere2[i]);
	}
	std::string caractere4;
	caractere4 = caractere3 + chr + caractere2;
	if (!caractere4.empty())
		std::cout << "The key: " << caractere4 << "  is a palindrom" << std::endl;
	else
		std::cout << " nu e palindrom" << std::endl;
	
}

int main()
{
	std::cout << "Please type in a string which can be reorgonised as a palindrom.\n";
 	std::string cheie;
	std::cin >> cheie;

	poateFiPalindrom(cheie);
	
}

