
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "a.h"

int g_b;

static int * g_b_pointer = 0;


static int g_b_array[2048];


void b_address()
{
    const uint8_t * p = (const uint8_t *)g_b_array;

    printf("%s:%d %s() &g_b=%p, &g_b_pointer=%p, g_b_array=[%p, %p)\n", __FILE__, __LINE__, __FUNCTION__
        , &g_b
        , &g_b_pointer
        , p
        , p + sizeof(g_b_array)
    ); fflush(stdout);
}

void b_show_b()
{
    g_b = 3;
    printf("%s:%d %s() g_a=%d, g_b=%d \n", __FILE__, __LINE__, __FUNCTION__
        , g_a, g_b); fflush(stdout);

}

void b_init_g_b_pointer()
{
    g_b_pointer = &g_b;
}

void b_show_g_b_pointer()
{

    printf("%s:%d %s() &g_b_pointer=%p, *g_b_pointer=%d, g_b_pointer=%p \n", __FILE__, __LINE__, __FUNCTION__
        , &g_b_pointer
        , *g_b_pointer
        , g_b_pointer
    ); fflush(stdout);
}


void b_memset_g_b_array()
{
    memset(g_b_array, 0, sizeof(g_b_array));
    const uint8_t * p = (const uint8_t *)g_b_array;

    printf("%s:%d %s() g_b_array=[%p, %p) \n", __FILE__, __LINE__, __FUNCTION__
        , p
        , p + sizeof(g_b_array)
    ); fflush(stdout);
}


void show_g_a_in_b_c_file()
{
    printf("show_g_a_in_b_cpp_file: g_a=%d\n", g_a);
}
