#include <stdio.h>
#include <stdint.h>

int isPDF (char *f);


int main(int argc, char *argv[])
{
    if (argc != 2){
        printf("Usage: ./pdf <file>\n");
        return 1;
    }

    char *file_name = argv[1];
    int response = isPDF(file_name);

    if(response == 0)
    {
        printf("The file '%s' is a PDF\n", file_name);
    }
    else if (response == 1)
    {
        printf("The file '%s' is not a PDF\n", file_name);
    }
    else {
        printf("This is not a valid file\n");
    }
}

int isPDF (char *f)
{
    const int pattern[] = {37, 80, 68, 70};

    FILE *file = fopen(f, "r");

    if (file == NULL){
        return 2;
    }

    uint8_t buffer[4];

    fread(buffer, 1, 4, file);

    for (int i = 0; i < 4; i++)
    {
        if(buffer[i] != pattern[i]){
            fclose(file);
            return 1;
        }
    }

    fclose(file);
    return 0;
}
