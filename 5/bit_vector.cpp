#include <cstdio>
#include <cstdlib>
#include <cstring>

#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX (BIT_VECTOR_LENGTH - 1)
#define LSB_INDEX 0

void print_command(char *argv[]);
int check_validity(char *input);
void init_bit_vector(char *input, char *bv);
void print_bit_vector(char *bv);

int main(int argc, char *argv[])
{
    char bv1[BIT_VECTOR_LENGTH];
    char bv2[BIT_VECTOR_LENGTH];

    if (argc != 3)
    {
        printf("Error: invalid number of arguments\n");
        print_command(argv);
        return 1;
    }

    if (!(check_validity(argv[1]) && check_validity(argv[2])))
    {
        printf("Error: invalid arguments\n");
        print_command(argv);
        return 1;
    }

    init_bit_vector(argv[1], bv1);
    init_bit_vector(argv[2], bv2);

    print_bit_vector(bv1);
    print_bit_vector(bv2);

    return 0;
}

void print_command(char *argv[])
{
    printf("Usage: %s <4-bit binary> <4-bit binary>\n", argv[0]);
}

int check_validity(char *input)
{
    if (strlen(input) != BIT_VECTOR_LENGTH)
        return 0;

    for (int i = 0; i < BIT_VECTOR_LENGTH; i++)
    {
        if (input[i] != '0' && input[i] != '1')
            return 0;
    }
    return 1;
}

void init_bit_vector(char *input, char *bv)
{
    for (int i = 0; i < BIT_VECTOR_LENGTH; i++)
    {
        bv[i] = input[i] - '0';
    }
}

void print_bit_vector(char *bv)
{
    for (int i = MSB_INDEX; i >= LSB_INDEX; i--)
    {
        printf("%d", bv[i]);
    }
    printf("\n");
}