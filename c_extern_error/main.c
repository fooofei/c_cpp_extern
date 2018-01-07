
/* 
  this project shows a error use of global variable.

  in c language it can pass compile&link, but not in c++. 

  可能会遇到内存重叠 (在项目里复现了，这里没复现成功)

  像这样 http://www.microchip.com/forums/m629546.aspx

  坏处有:
   1 链接过程报重定义(linux make 需要加 -fno-common 链接参数)
   2 可能遇到内存重叠
    
  not error in MSVC, but error in linux make
*/

#include <stdio.h>
#include <stdint.h>

#include "a.h"


extern void b_show_b();
extern void b_init_g_b_pointer();
extern void b_show_g_b_pointer();
extern void b_memset_g_b_array();
extern void b_address();
extern void show_g_a_in_b_c_file();

int main()
{
//     a_show_a();
//     b_show_b();
// 
//     b_init_g_b_pointer();
//     b_show_g_b_pointer();
// 
//     b_memset_g_b_array();
//     b_show_g_b_pointer();
// 
//     a_memset_array();

    a_address();
    b_address();

    printf("%s:%d %s() g_a=%d \n", __FILE__, __LINE__, __FUNCTION__, g_a); fflush(stdout);

    return 0;
}
