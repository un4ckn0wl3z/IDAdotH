#include "ida.h"

__int64 __fastcall sub_140008C80(char* password, unsigned int password_len, const char* username, int username_len) {
    __int64 result; // rax
    signed int i; // [rsp+24h] [rbp+4h]

    for (i = 0; i < password_len; ++i) {
        password[i] ^= username[i % username_len]; // XOR each byte
    }

    return password_len;
}

int main() {
    // Define password and username as arrays to be manipulated byte-by-byte
    char password[] = { 0x12, 0x34, 0x56, 0x78 };
    unsigned int password_len = sizeof(password);
    const char username[] = { 0xab, 0xcd, 0xef, 0xaa };
    int username_len = sizeof(username);

    // Call the function with correct pointer types
    auto result = sub_140008C80(password, password_len, username, username_len);

    return 0;
}
