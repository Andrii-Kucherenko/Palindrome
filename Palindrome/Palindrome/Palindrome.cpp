//Palindrome
#include <iostream>
#include <string>
#include <cctype>

bool checkingForCorrectness(std::string temp)
{
    if (temp.size() < 1)
    {
        return false;
    }

    for (int i = 0; i < temp.size(); ++i)
    {
        if (!isdigit(temp[i]))
        {
            return false;
        }
    }

    return true;
}

bool isPalindrome(std::string temp)
{
    if (temp.size() == 1)
    {
        return true;
    }

    for (int i = 0, j = temp.size() - 1; true; ++i, --j)
    {
        if (i >= j)
        {
            return true;
        }

        if (temp[i] != temp[j])
        {
            return false;
        }
    }
}

int main()
{
    std::string number;
    bool isCorrect;

    do
    {
        std::cout << "Enter the integer: ";
        std::getline(std::cin, number);
        isCorrect = checkingForCorrectness(number);

    } while (!isCorrect);

    std::cout << number;

    switch (isPalindrome(number))
    {
    case true:
        std::cout << " is a palindrome\n";
        break;
    case false:
        std::cout << " isn\'t a palindrome\n";
    }
}