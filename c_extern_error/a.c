
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "a.h"

void a_show_a()
{
    g_a = 110;
    printf("%s:%d %s() g_a=%d \n", __FILE__, __LINE__, __FUNCTION__, g_a); fflush(stdout);
}

void a_memset_array()
{
    memset(g_a_array, 0, sizeof(g_a_array));

    const uint8_t * p = (const uint8_t *)g_a_array;

    printf("%s:%d %s() g_a_array=[%p, %p) \n", __FILE__, __LINE__, __FUNCTION__
        , p
        , p + sizeof(g_a_array)
    ); fflush(stdout);

}

void a_address()
{
    const uint8_t * p = (const uint8_t *)g_a_array;

    printf("%s:%d %s() &g_a=%p, g_a_array=[%p, %p) \n", __FILE__, __LINE__, __FUNCTION__
        , &g_a
        , p
        , p + sizeof(g_a_array)
    ); fflush(stdout);
}
