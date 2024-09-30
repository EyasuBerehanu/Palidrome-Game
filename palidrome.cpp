//Eyasu Berehanu
//9/27/2024
//Recived help from Mr. Galbrith & C++ Program to Remove Spaces from String - Code Rivals
//Palidrome: Checks if word or phrase if the same backwards and forwards


#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
  char str[80];
  char str2[80];
  char str3[80];
  int a = 0;
  int i = 0, len, j;
  cout << "Input a word or phrase and I will let you know if its a palidrome or not!!!" << endl;
  cin.get(str, 80);
  len = strlen(str);
  int apple = 0;

  
  for (i = 0; i < len; i++){ //cleans up array for any spaces or punctiuation
    if(str[i] == ' ' || str[i] == '-' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == ',' || str[i] == ':'){
      
    } else {
      str[i] = tolower(str[i]); //Converts uppercase letters to lowercase
      str3[apple] = str[i];
      apple++;
    }
  }
  str3[apple] = '\0'; //stops the code from running any more then it has to
  //cout << str << "\n";

  for (int i = strlen(str3) - 1; i >= 0; i--){ //reverses order of array
  
	str2[a] = str3[i];     
	a++;   
  }
    str2[a]='\0';
    
    if (strcmp(str3,str2) == 0){ //checks if value is a palidrome and what to do if it is
      cout << "Its a palidrome" << endl;
    }
    if (strcmp(str3,str2) != 0){ //checks if valye is a palidrome and what uo do if its not
      cout << "Its not a palidrome" << endl;
    }
  return 0;
}
