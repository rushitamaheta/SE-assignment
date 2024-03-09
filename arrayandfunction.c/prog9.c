//9. WAP to show difference between Structure and Union.

#include <stdio.h>
#include <string.h>

// Define a structure
struct StructureExample {
    int intValue;
    float floatValue;
    char stringValue[20];
};

// Define a union
union UnionExample {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Structure Example
    struct StructureExample structObj;
    structObj.intValue = 10;
    structObj.floatValue = 3.14;
    strcpy(structObj.stringValue, "Hello");

    printf("Structure Example:\n");
    printf("Integer Value: %d\n", structObj.intValue);
    printf("Float Value: %.2f\n", structObj.floatValue);
    printf("String Value: %s\n", structObj.stringValue);
    printf("Size of Structure: %ld bytes\n", sizeof(structObj));

    // Union Example
    union UnionExample unionObj;
    unionObj.intValue = 10;
    printf("\nUnion Example:\n");
    printf("Integer Value: %d\n", unionObj.intValue);

    unionObj.floatValue = 3.14;
    printf("Float Value: %.2f\n", unionObj.floatValue);

    strcpy(unionObj.stringValue, "Hello");
    printf("String Value: %s\n", unionObj.stringValue);
    printf("Size of Union: %ld bytes\n", sizeof(unionObj));

    return 0;
}

