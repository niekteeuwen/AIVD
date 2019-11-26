#include <iostream> 
  
// This function receives text and shift and 
// returns the encrypted text 
std::string encrypt(std::string text, int s) 
{ 
    std::string result = ""; 
  
    // traverse text 
    for (int i=0;i<text.length();i++) 
    { 
        // apply transformation to each character 

        // Check for spaces
        if (isspace(text[i]))
            result += text[i];

        // Encrypt Uppercase letters 
        else if (isupper(text[i])) 
            result += char(int(text[i]+s-65)%26 +65); 
  
        // Encrypt Lowercase letters 
        else
            result += char(int(text[i]+s-97)%26 +97); 
    } 
  
    // Return the resulting string 
    return result; 
} 
  
// Driver program to test the above function 
int main() 
{ 
    std::string text="Bananen eten"; 
    int s = 6; 
    std::cout << "Text : " << text << "\n"; 
    std::cout << "Shift: " << s << "\n"; 
    std::cout << "Cipher: " << encrypt(text, s) << "\n"; 
    return 0; 
} 
