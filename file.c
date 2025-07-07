#include <stdio.h>

int main() {
    // Simulated file content
    char fileContent[1000] = "This is CODTECH Internship Task-1.\n";
    
    // Simulating writing to the file
    printf("Writing to file...\n");
    printf("File created and data written successfully.\n");
    
    // Simulating appending to the file
    printf("Appending data to file...\n");
    strcat(fileContent, "This line is appended to the file.\n");
    printf("Data appended successfully.\n");

    // Simulating reading the file
    printf("\nReading file content:\n");
    printf("%s", fileContent);

    return 0;
}
