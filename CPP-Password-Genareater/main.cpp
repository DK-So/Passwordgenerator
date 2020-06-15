#include<iostream>
#include<random>
#include<time.h>

using namespace std;

int main(){
        
            string  Kennwort = "";
            int Numlenght = 5;
            srand(time(NULL));
            
            Logo();
            
            for(int i=0;i < Numlenght;i++)
            {
                
                int Numb = rand() % 71;
               

                switch (Numb)
                {
                    case 1:
                        Kennwort += "A";
                        break;
                    case 2:
                        Kennwort += "B";
                        break;
                    case 3:
                        Kennwort += "C";
                        break;
                    case 4:
                        Kennwort += "D";
                        break;
                    case 5:
                        Kennwort += "E";
                        break;
                    case 6:
                        Kennwort += "F";
                        break;
                    case 7:
                        Kennwort += "G";
                        break;
                    case 8:
                        Kennwort += "H";
                        break;
                    case 9:
                        Kennwort += "I";
                        break;
                    case 10:
                        Kennwort += "J";
                        break;
                    case 11:
                        Kennwort += "K";
                        break;
                    case 12:
                        Kennwort += "L";
                        break;
                    case 13:
                        Kennwort += "M";
                        break;
                    case 14:
                        Kennwort += "N";
                        break;
                    case 15:
                        Kennwort += "O";
                        break;
                    case 16:
                        Kennwort += "P";
                        break;
                    case 17:
                        Kennwort += "Q";
                        break;
                    case 18:
                        Kennwort += "R";
                        break;
                    case 19:
                        Kennwort += "S";
                        break;
                    case 20:
                        Kennwort += "T";
                        break;
                    case 21:
                        Kennwort += "U";
                        break;
                    case 22:
                        Kennwort += "V";
                        break;
                    case 23:
                        Kennwort += "W";
                        break;
                    case 24:
                        Kennwort += "X";
                        break;
                    case 25:
                        Kennwort += "Y";
                        break;
                    case 26:
                        Kennwort += "Z";
                        break;
                    case 27:
                        Kennwort += "a";
                        break;
                    case 28:
                        Kennwort += "b";
                        break;
                    case 29:
                        Kennwort += "c";
                        break;
                    case 30:
                        Kennwort += "d";
                        break;
                    case 31:
                        Kennwort += "e";
                        break;
                    case 32:
                        Kennwort += "f";
                        break;
                    case 33:
                        Kennwort += "g";
                        break;
                    case 34:
                        Kennwort += "h";
                        break;
                    case 35:
                        Kennwort += "i";
                        break;
                    case 36:
                        Kennwort += "j";
                        break;
                    case 37:
                        Kennwort += "k";
                        break;
                    case 38:
                        Kennwort += "l";
                        break;
                    case 39:
                        Kennwort += "m";
                        break;
                    case 40:
                        Kennwort += "n";
                        break;
                    case 41:
                        Kennwort += "o";
                        break;
                    case 42:
                        Kennwort += "p";
                        break;
                    case 43:
                        Kennwort += "q";
                        break;
                    case 44:
                        Kennwort += "r";
                        break;
                    case 45:
                        Kennwort += "s";
                        break;
                    case 46:
                        Kennwort += "t";
                        break;
                    case 47:
                        Kennwort += "u";
                        break;
                    case 48:
                        Kennwort += "v";
                        break;
                    case 49:
                        Kennwort += "w";
                        break;
                    case 50:
                        Kennwort += "x";
                        break;
                    case 51:
                        Kennwort += "y";
                        break;
                    case 52:
                        Kennwort += "z";
                        break;
                    case 53:
                        Kennwort += "0";
                        break;
                    case 54:
                        Kennwort += "1";
                        break;
                    case 55:
                        Kennwort += "2";
                        break;
                    case 56:
                        Kennwort += "3";
                        break;
                    case 57:
                        Kennwort += "4";
                        break;
                    case 58:
                        Kennwort += "5";
                        break;
                    case 59:
                        Kennwort += "6";
                        break;
                    case 60:
                        Kennwort += "7";
                        break;
                    case 61:
                        Kennwort += "8";
                        break;
                    case 62:
                        Kennwort += "9";
                        break;
                    case 63:
                        Kennwort += "!";
                        break;
                    case 64:
                        Kennwort += "$";
                        break;
                    case 65:
                        Kennwort += "%";
                        break;
                    case 66:
                        Kennwort += "&";
                        break;
                    case 67:
                        Kennwort += "/";
                        break;
                    case 68:
                        Kennwort += "?";
                        break;
                    case 69:
                        Kennwort += "<";
                        break;
                    case 70:
                        Kennwort += ">";
                        break;
               }
               
            }
            cout << Kennwort << endl;
            system("PAUSE");
}

void Logo()
{
     for (int i = 0; i < 8; i++)
     {
         std::cout << "*";
     }
     std::endl;
     std::cout <<  "\tPassword Generater" << std::endl;
     std::cout << "\tby Deniz K. Sogukpinar" << std:endl;
      for (int i = 0; i < 8; i++)
     {
         std::cout << "*";
     }
}