#include <iostream>
#include <Windows.h>
#include <string>
#include <cstring>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include "parametry.h" 

 
using namespace std;

int main(int argc, char** argv) {
	
   setlocale( LC_ALL, "" ); 
   
    char x = 't';
	char y;
    
    int max_czynnosci;
    int pauza;

int a, b, c, os_x, os_y;

do {
    
system( "cls" ); 

//string indeks_wyrobu;
//std::cout<<"Wpisz indeks wyrobu (np: 50-0000-0000-00000): ";
//std::cin>>indeks_wyrobu; 

std::cout<<"SZTAPLOWANIE KRZESE£ I SIEDZISK - USUWANIE ALTERNATYW"<<std::endl;

string numer_alternatywy;
std::cout<<"1. Numer alternatywy (np: 5): ";
std::cin>>numer_alternatywy; 

int numer_alternatywy_koncowej;
std::cout<<"1. Numer alternatywy koñcowej (max: 301): ";
std::cin>>numer_alternatywy_koncowej; 

std::cout<<"2. Czas przerwy miêdzy czynnoœciami (1 = 0,1 sek.- zalecane: 2): ";
std::cin>>max_czynnosci;
std::cout <<"\n";


int alternatywa = atoi(numer_alternatywy.c_str());

do {

//system( "cls" );   


    switch( alternatywa )
    {
    case 1: numer_alternatywy = "1"; break;
    case 2: numer_alternatywy = "2"; break;
    case 3: numer_alternatywy = "3"; break;
    case 4: numer_alternatywy = "4"; break;
    case 5: numer_alternatywy = "5"; break;
    case 6: numer_alternatywy = "6"; break;
    case 7: numer_alternatywy = "7"; break;
    case 8: numer_alternatywy = "8"; break;
    case 9: numer_alternatywy = "9"; break;
    case 10: numer_alternatywy = "10"; break;
    case 11: numer_alternatywy = "11"; break;
    case 12: numer_alternatywy = "12"; break;
    case 13: numer_alternatywy = "13"; break;
    case 14: numer_alternatywy = "14"; break;
    case 15: numer_alternatywy = "15"; break;
    case 16: numer_alternatywy = "16"; break;
    case 17: numer_alternatywy = "17"; break;
    case 18: numer_alternatywy = "18"; break;
    case 19: numer_alternatywy = "19"; break;
    case 20: numer_alternatywy = "20"; break;
    case 21: numer_alternatywy = "21"; break;
    case 22: numer_alternatywy = "22"; break;
    case 23: numer_alternatywy = "23"; break;
    case 24: numer_alternatywy = "24"; break;
    case 25: numer_alternatywy = "25"; break;
    case 26: numer_alternatywy = "26"; break;
    case 27: numer_alternatywy = "27"; break;
    case 28: numer_alternatywy = "28"; break;
    case 29: numer_alternatywy = "29"; break;
    case 30: numer_alternatywy = "30"; break;
    case 31: numer_alternatywy = "31"; break;
    case 32: numer_alternatywy = "32"; break;
    case 33: numer_alternatywy = "33"; break;
    case 34: numer_alternatywy = "34"; break;
    case 35: numer_alternatywy = "35"; break;
    case 36: numer_alternatywy = "36"; break;
    case 37: numer_alternatywy = "37"; break;
    case 38: numer_alternatywy = "38"; break;
    case 39: numer_alternatywy = "39"; break;
    case 40: numer_alternatywy = "40"; break;
    case 41: numer_alternatywy = "41"; break;
    case 42: numer_alternatywy = "42"; break;
    case 43: numer_alternatywy = "43"; break;
    case 44: numer_alternatywy = "44"; break;
    case 45: numer_alternatywy = "45"; break;
    case 46: numer_alternatywy = "46"; break;
    case 47: numer_alternatywy = "47"; break;
    case 48: numer_alternatywy = "48"; break;
    case 49: numer_alternatywy = "49"; break;
    case 50: numer_alternatywy = "50"; break;
    case 51: numer_alternatywy = "51"; break;
    case 52: numer_alternatywy = "52"; break;
    case 53: numer_alternatywy = "53"; break;
    case 54: numer_alternatywy = "54"; break;
    case 55: numer_alternatywy = "55"; break;
    case 56: numer_alternatywy = "56"; break;
    case 57: numer_alternatywy = "57"; break;
    case 58: numer_alternatywy = "58"; break;
    case 59: numer_alternatywy = "59"; break;
    case 60: numer_alternatywy = "60"; break;
    case 61: numer_alternatywy = "61"; break;
    case 62: numer_alternatywy = "62"; break;
    case 63: numer_alternatywy = "63"; break;
    case 64: numer_alternatywy = "64"; break;
    case 65: numer_alternatywy = "65"; break;
    case 66: numer_alternatywy = "66"; break;
    case 67: numer_alternatywy = "67"; break;
    case 68: numer_alternatywy = "68"; break;
    case 69: numer_alternatywy = "69"; break;
    case 70: numer_alternatywy = "70"; break;
    case 71: numer_alternatywy = "71"; break;
    case 72: numer_alternatywy = "72"; break;
    case 73: numer_alternatywy = "73"; break;
    case 74: numer_alternatywy = "74"; break;
    case 75: numer_alternatywy = "75"; break;
    case 76: numer_alternatywy = "76"; break;
    case 77: numer_alternatywy = "77"; break;
    case 78: numer_alternatywy = "78"; break;
    case 79: numer_alternatywy = "79"; break;
    case 80: numer_alternatywy = "80"; break;
    case 81: numer_alternatywy = "81"; break;
    case 82: numer_alternatywy = "82"; break;
    case 83: numer_alternatywy = "83"; break;
    case 84: numer_alternatywy = "84"; break;
    case 85: numer_alternatywy = "85"; break;
    case 86: numer_alternatywy = "86"; break;
    case 87: numer_alternatywy = "87"; break;
    case 88: numer_alternatywy = "88"; break;
    case 89: numer_alternatywy = "89"; break;
    case 90: numer_alternatywy = "90"; break;
    case 91: numer_alternatywy = "91"; break;
    case 92: numer_alternatywy = "92"; break;
    case 93: numer_alternatywy = "93"; break;
    case 94: numer_alternatywy = "94"; break;
    case 95: numer_alternatywy = "95"; break;
    case 96: numer_alternatywy = "96"; break;
    case 97: numer_alternatywy = "97"; break;
    case 98: numer_alternatywy = "98"; break;
    case 99: numer_alternatywy = "99"; break;
    case 100: numer_alternatywy = "A0"; break;
    case 101: numer_alternatywy = "A1"; break;
    case 102: numer_alternatywy = "A2"; break;
    case 103: numer_alternatywy = "A3"; break;
    case 104: numer_alternatywy = "A4"; break;
    case 105: numer_alternatywy = "A5"; break;
    case 106: numer_alternatywy = "A6"; break;
    case 107: numer_alternatywy = "A7"; break;
    case 108: numer_alternatywy = "A8"; break;
    case 109: numer_alternatywy = "A9"; break;
    case 110: numer_alternatywy = "B0"; break;
    case 111: numer_alternatywy = "B1"; break;
    case 112: numer_alternatywy = "B2"; break;
    case 113: numer_alternatywy = "B3"; break;
    case 114: numer_alternatywy = "B4"; break;
    case 115: numer_alternatywy = "B5"; break;
    case 116: numer_alternatywy = "B6"; break;
    case 117: numer_alternatywy = "B7"; break;
    case 118: numer_alternatywy = "B8"; break;
    case 119: numer_alternatywy = "B9"; break;
    case 120: numer_alternatywy = "C0"; break;
    case 121: numer_alternatywy = "C1"; break;
    case 122: numer_alternatywy = "C2"; break;
    case 123: numer_alternatywy = "C3"; break;
    case 124: numer_alternatywy = "C4"; break;
    case 125: numer_alternatywy = "C5"; break;
    case 126: numer_alternatywy = "C6"; break;
    case 127: numer_alternatywy = "C7"; break;
    case 128: numer_alternatywy = "C8"; break;
    case 129: numer_alternatywy = "C9"; break;
    case 130: numer_alternatywy = "D0"; break;
    case 131: numer_alternatywy = "D1"; break;
    case 132: numer_alternatywy = "D2"; break;
    case 133: numer_alternatywy = "D3"; break;
    case 134: numer_alternatywy = "D4"; break;
    case 135: numer_alternatywy = "D5"; break;
    case 136: numer_alternatywy = "D6"; break;
    case 137: numer_alternatywy = "D7"; break;
    case 138: numer_alternatywy = "D8"; break;
    case 139: numer_alternatywy = "D9"; break;
    case 140: numer_alternatywy = "E0"; break;
    case 141: numer_alternatywy = "E1"; break;
    case 142: numer_alternatywy = "E2"; break;
    case 143: numer_alternatywy = "E3"; break;
    case 144: numer_alternatywy = "E4"; break;
    case 145: numer_alternatywy = "E5"; break;
    case 146: numer_alternatywy = "E6"; break;
    case 147: numer_alternatywy = "E7"; break;
    case 148: numer_alternatywy = "E8"; break;
    case 149: numer_alternatywy = "E9"; break;
    case 150: numer_alternatywy = "F0"; break;
    case 151: numer_alternatywy = "F1"; break;
    case 152: numer_alternatywy = "F2"; break;
    case 153: numer_alternatywy = "F3"; break;
    case 154: numer_alternatywy = "F4"; break;
    case 155: numer_alternatywy = "F5"; break;
    case 156: numer_alternatywy = "F6"; break;
    case 157: numer_alternatywy = "F7"; break;
    case 158: numer_alternatywy = "F8"; break;
    case 159: numer_alternatywy = "F9"; break;
    case 160: numer_alternatywy = "G0"; break;
    case 161: numer_alternatywy = "G1"; break;
    case 162: numer_alternatywy = "G2"; break;
    case 163: numer_alternatywy = "G3"; break;
    case 164: numer_alternatywy = "G4"; break;
    case 165: numer_alternatywy = "G5"; break;
    case 166: numer_alternatywy = "G6"; break;
    case 167: numer_alternatywy = "G7"; break;
    case 168: numer_alternatywy = "G8"; break;
    case 169: numer_alternatywy = "G9"; break;
    case 170: numer_alternatywy = "H0"; break;
    case 171: numer_alternatywy = "H1"; break;
    case 172: numer_alternatywy = "H2"; break;
    case 173: numer_alternatywy = "H3"; break;
    case 174: numer_alternatywy = "H4"; break;
    case 175: numer_alternatywy = "H5"; break;
    case 176: numer_alternatywy = "H6"; break;
    case 177: numer_alternatywy = "H7"; break;
    case 178: numer_alternatywy = "H8"; break;
    case 179: numer_alternatywy = "H9"; break;
    case 180: numer_alternatywy = "I0"; break;
    case 181: numer_alternatywy = "I1"; break;
    case 182: numer_alternatywy = "I2"; break;
    case 183: numer_alternatywy = "I3"; break;
    case 184: numer_alternatywy = "I4"; break;
    case 185: numer_alternatywy = "I5"; break;
    case 186: numer_alternatywy = "I6"; break;
    case 187: numer_alternatywy = "I7"; break;
    case 188: numer_alternatywy = "I8"; break;
    case 189: numer_alternatywy = "I9"; break;
    case 190: numer_alternatywy = "J0"; break;
    case 191: numer_alternatywy = "J1"; break;
    case 192: numer_alternatywy = "J2"; break;
    case 193: numer_alternatywy = "J3"; break;
    case 194: numer_alternatywy = "J4"; break;
    case 195: numer_alternatywy = "J5"; break;
    case 196: numer_alternatywy = "J6"; break;
    case 197: numer_alternatywy = "J7"; break;
    case 198: numer_alternatywy = "J8"; break;
    case 199: numer_alternatywy = "J9"; break;
    case 200: numer_alternatywy = "K0"; break;
    case 201: numer_alternatywy = "K1"; break;
    case 202: numer_alternatywy = "K2"; break;
    case 203: numer_alternatywy = "K3"; break;
    case 204: numer_alternatywy = "K4"; break;
    case 205: numer_alternatywy = "K5"; break;
    case 206: numer_alternatywy = "K6"; break;
    case 207: numer_alternatywy = "K7"; break;
    case 208: numer_alternatywy = "K8"; break;
    case 209: numer_alternatywy = "K9"; break;
    case 210: numer_alternatywy = "L0"; break;
    case 211: numer_alternatywy = "L1"; break;
    case 212: numer_alternatywy = "L2"; break;
    case 213: numer_alternatywy = "L3"; break;
    case 214: numer_alternatywy = "L4"; break;
    case 215: numer_alternatywy = "L5"; break;
    case 216: numer_alternatywy = "L6"; break;
    case 217: numer_alternatywy = "L7"; break;
    case 218: numer_alternatywy = "L8"; break;
    case 219: numer_alternatywy = "L9"; break;
    case 220: numer_alternatywy = "M0"; break;
    case 221: numer_alternatywy = "M1"; break;
    case 222: numer_alternatywy = "M2"; break;
    case 223: numer_alternatywy = "M3"; break;
    case 224: numer_alternatywy = "M4"; break;
    case 225: numer_alternatywy = "M5"; break;
    case 226: numer_alternatywy = "M6"; break;
    case 227: numer_alternatywy = "M7"; break;
    case 228: numer_alternatywy = "M8"; break;
    case 229: numer_alternatywy = "M9"; break;
    case 230: numer_alternatywy = "N0"; break;
    case 231: numer_alternatywy = "N1"; break;
    case 232: numer_alternatywy = "N2"; break;
    case 233: numer_alternatywy = "N3"; break;
    case 234: numer_alternatywy = "N4"; break;
    case 235: numer_alternatywy = "N5"; break;
    case 236: numer_alternatywy = "N6"; break;
    case 237: numer_alternatywy = "N7"; break;
    case 238: numer_alternatywy = "N8"; break;
    case 239: numer_alternatywy = "N9"; break;
    case 240: numer_alternatywy = "O0"; break;
    case 241: numer_alternatywy = "O1"; break;
    case 242: numer_alternatywy = "O2"; break;
    case 243: numer_alternatywy = "O3"; break;
    case 244: numer_alternatywy = "O4"; break;
    case 245: numer_alternatywy = "O5"; break;
    case 246: numer_alternatywy = "O6"; break;
    case 247: numer_alternatywy = "O7"; break;
    case 248: numer_alternatywy = "O8"; break;
    case 249: numer_alternatywy = "O9"; break;
    case 250: numer_alternatywy = "P0"; break;
    case 251: numer_alternatywy = "P1"; break;
    case 252: numer_alternatywy = "P2"; break;
    case 253: numer_alternatywy = "P3"; break;
    case 254: numer_alternatywy = "P4"; break;
    case 255: numer_alternatywy = "P5"; break;
    case 256: numer_alternatywy = "P6"; break;
    case 257: numer_alternatywy = "P7"; break;
    case 258: numer_alternatywy = "P8"; break;
    case 259: numer_alternatywy = "P9"; break;
    case 260: numer_alternatywy = "R0"; break;
    case 261: numer_alternatywy = "R1"; break;
    case 262: numer_alternatywy = "R2"; break;
    case 263: numer_alternatywy = "R3"; break;
    case 264: numer_alternatywy = "R4"; break;
    case 265: numer_alternatywy = "R5"; break;
    case 266: numer_alternatywy = "R6"; break;
    case 267: numer_alternatywy = "R7"; break;
    case 268: numer_alternatywy = "R8"; break;
    case 269: numer_alternatywy = "R9"; break;
    case 270: numer_alternatywy = "S0"; break;
    case 271: numer_alternatywy = "S1"; break;
    case 272: numer_alternatywy = "S2"; break;
    case 273: numer_alternatywy = "S3"; break;
    case 274: numer_alternatywy = "S4"; break;
    case 275: numer_alternatywy = "S5"; break;
    case 276: numer_alternatywy = "S6"; break;
    case 277: numer_alternatywy = "S7"; break;
    case 278: numer_alternatywy = "S8"; break;
    case 279: numer_alternatywy = "S9"; break;
    case 280: numer_alternatywy = "T0"; break;
    case 281: numer_alternatywy = "T1"; break;
    case 282: numer_alternatywy = "T2"; break;
    case 283: numer_alternatywy = "T3"; break;
    case 284: numer_alternatywy = "T4"; break;
    case 285: numer_alternatywy = "T5"; break;
    case 286: numer_alternatywy = "T6"; break;
    case 287: numer_alternatywy = "T7"; break;
    case 288: numer_alternatywy = "T8"; break;
    case 289: numer_alternatywy = "T9"; break;
    case 290: numer_alternatywy = "U0"; break;
    case 291: numer_alternatywy = "U1"; break;
    case 292: numer_alternatywy = "U2"; break;
    case 293: numer_alternatywy = "U3"; break;
    case 294: numer_alternatywy = "U4"; break;
    case 295: numer_alternatywy = "U5"; break;
    case 296: numer_alternatywy = "U6"; break;
    case 297: numer_alternatywy = "U7"; break;
    case 298: numer_alternatywy = "U8"; break;
    case 299: numer_alternatywy = "U9"; break;
    case 300: numer_alternatywy = "W0"; break;
    case 301: numer_alternatywy = "W1"; break;
    
    }
	
std::cout<<"ALTERNATYWA " + numer_alternatywy + " - ";;


pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}

    // Klikam na puste miejscu SAP
    SetCursorPos( PUSTE_POLE_SAP_1 ); 
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
    
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
} 

//wklej numer alternatywy
const char* numer_alternatywy_tekst = numer_alternatywy.c_str();

{
    HGLOBAL numer_alternatywy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(numer_alternatywy_tekst) + 1); //text size + \0 character
    memcpy(numer_alternatywy_zmienna,numer_alternatywy_tekst,strlen(numer_alternatywy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,numer_alternatywy_zmienna);
        CloseClipboard();
    }
}

pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
} 

	// Wklejam 
    keybd_event(0x11, 0, 0, 0); // CTRL
	keybd_event(0x56, 0, 0, 0); // V              
	keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
	keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

int pauza3 = 1;
while( pauza3 <= max_czynnosci )
{
    pauza3++; 
	Sleep (CZAS_PAUZY_1);		
}

    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER
    
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}



//ZMIANA SPECYFIKACJI - PRZEGL¥D POZYCJI
//-----------------------------------------------------------------------
//rozpoznanie koloru - pocz¹tek
        os_x = ZMIANA_SPECYFIKACJI_PRZEGLAD_POZYCJI_OS_X;
        os_y = ZMIANA_SPECYFIKACJI_PRZEGLAD_POZYCJI_OS_Y;
         
do
{           
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


    
    a = rr;
    b = gg;
    c = bb;
    
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}

 }   while (KOLOR_SZARY_1_RGB_1); 	
//rozpoznanie koloru - koniec
//-----------------------------------------------------------------------


pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}


    //Otwieranie - Kopiowanie wzorca
	keybd_event(0x79, 0, 0, 0); // F10             
	keybd_event(0x79, 0, KEYEVENTF_KEYUP, 0); // F10
    
    
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}


//ZMIANA SPECYFIKACJI - PRZYCISK USUWANIA
//-----------------------------------------------------------------------
//rozpoznanie koloru - pocz¹tek
        os_x = ZMIANA_SPECYFIKACJI_PRZYCISK_USUWANIA_OS_X ;
        os_y = ZMIANA_SPECYFIKACJI_PRZYCISK_USUWANIA_OS_Y ;
         
do
{           
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


    
    a = rr;
    b = gg;
    c = bb;
    
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}

 }   while (KOLOR_BIALY_1_RGB_1); 	
//rozpoznanie koloru - koniec
//-----------------------------------------------------------------------


pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}

	// Schodzê na materia³
	keybd_event(0x26, 0, 0, 0); // STRZA£KA DO GÓRY           
	keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA DO GÓRY 
	keybd_event(0x26, 0, 0, 0); // STRZA£KA DO GÓRY           
	keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA DO GÓRY 

pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}

    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER
    
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}



//ZMIANA SPECYFIKACJI - USUWANIE ALTERNATYWY
//-----------------------------------------------------------------------
//rozpoznanie koloru - pocz¹tek
        os_x = ZMIANA_SPECYFIKACJI_USUWANIE_ALTERNATYWY_OS_X;
        os_y = ZMIANA_SPECYFIKACJI_USUWANIE_ALTERNATYWY_OS_Y;
         
do
{           
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


    
    a = rr;
    b = gg;
    c = bb;
    
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}

 }   while (KOLOR_NIEBIESKI_1_RGB_1); 	
//rozpoznanie koloru - koniec
//-----------------------------------------------------------------------

    
	keybd_event(0x09, 0, 0, 0); // TAB              
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	keybd_event(0x09, 0, 0, 0); // TAB              
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB     
    
    
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}

    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER
    
	
//rozpoznanie koloru - pocz¹tek
        os_x = ZNACZEK_POLA_GLOWNEGO_OS_X;
        os_y = ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
             HDC hdc = GetDC(NULL);
             DWORD color = GetPixel(hdc, os_x, os_y);
             unsigned int rr = GetRValue(color);
             unsigned int gg = GetGValue(color);
             unsigned int bb = GetBValue(color);


    
    a = rr;
    b = gg;
    c = bb;
    
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}

 }   while (KOLOR_ZIELONY_1_RGB_1); 	
//rozpoznanie koloru - koniec


	
std::cout<<"USUNIÊTA"<<std::endl;

	
pauza = 1;
while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);		
}	

	keybd_event(0x09, 0, 0, 0); // TAB              
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	keybd_event(0x09, 0, 0, 0); // TAB              
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	keybd_event(0x09, 0, 0, 0); // TAB              
	keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	

         
	alternatywa++;  

}
           
    while( x == 't' && alternatywa != numer_alternatywy_koncowej+1);	
    
    
    
    
            std::cout<<" "<<std::endl;
            std::cout<<"Powtórzyæ program (t/n): ";
            std::cin >> y;
        }
        
    while( y == 't' );

    if( y != 't' )
    {
        Sleep (CZAS_PAUZY_1);
        std::cout<<" "<<std::endl;
        std::cout<<"Koniec programu"<<std::endl;
        
    }

    Sleep(100000);    
	
	return 0;
}

