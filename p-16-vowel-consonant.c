// Given a single English alphabet character ch, determine whether it is a Vowel or a Consonant.
#include <stdio.h>
char *checkVowelConsonant(char letter)
{
    if (!((letter >= 'A' && letter <= 'Z') ||
          (letter >= 'a' && letter <= 'z')))
    {
        return "Invalid Character";
    }

    if (letter >= 'A' && letter <= 'Z')
    {
        letter = letter + 32;
    }

    if (letter == 'a' || letter == 'e' ||
        letter == 'i' || letter == 'o' ||
        letter == 'u')
    {
        return "Vowel";
    }

    return "Consonant";
}

//Switch diye
// char *checkVowelConsonant(char letter)
// {
//     if (letter >= 'A' && letter <= 'Z')
//         letter = letter + 32;

//     if (!((letter >= 'a') && (letter <= 'z')))
//         return "Invalid Character";

//     switch (letter)
//     {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             return "Vowel";

//         default:
//             return "Consonant";
//     }
// }

//loop diye
// char *checkVowelConsonant(char letter)
// {
//     if (letter >= 'A' && letter <= 'Z')
//         letter = letter + 32;

//     if (letter < 'a' || letter > 'z')
//         return "Invalid Character";

//     char vowels[] = "aeiou";

//     for (int i = 0; vowels[i] != '\0'; i++)
//     {
//         if (letter == vowels[i])
//             return "Vowel";
//     }

//     return "Consonant";
// }
int main()
{
    char letter;
    scanf("%c", &letter);

    char *vowelConsonant = checkVowelConsonant(letter);
    printf("%s\n", vowelConsonant);

    return 0;
}