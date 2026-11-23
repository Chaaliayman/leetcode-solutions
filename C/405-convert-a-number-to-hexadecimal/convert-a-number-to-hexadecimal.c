char toHex(int num) {
     static char result[9]; 
    
     memset(result, 0, sizeof(result)); 
    
     if (num == 0) {
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    char hex_map[] = "0123456789abcdef";
    unsigned int n = num;
    int index = 8;
    
    result[index--] = '\0';  
     while (n > 0) {
        result[index--] = hex_map[n & 15];
        n >>= 4;
    }

     return &result[index + 1];
}
