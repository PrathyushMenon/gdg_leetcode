#include <stdio.h>
#include <string.h>

int romanToInt(char* s) {
    int roman_map[256] = {0};
    roman_map['I'] = 1;
    roman_map['V'] = 5;
    roman_map['X'] = 10;
    roman_map['L'] = 50;
    roman_map['C'] = 100;
    roman_map['D'] = 500;
    roman_map['M'] = 1000;

    int result = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        if (i + 1 < len && roman_map[s[i]] < roman_map[s[i + 1]]) {
            result -= roman_map[s[i]];
        } else {
            result += roman_map[s[i]];
        }
    }
    
    return result;
}
