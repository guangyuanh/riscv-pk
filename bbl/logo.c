#include <string.h>
#include "mtrap.h"

static const char logo[] =
"\r\n"
"                SIFIVE, INC.\r\n"
"\r\n"
"         5555555555555555555555555\r\n"
"        5555                   5555\r\n"
"       5555                     5555\r\n"
"      5555                       5555\r\n"
"     5555       5555555555555555555555\r\n"
"    5555       555555555555555555555555\r\n"
"   5555                             5555\r\n"
"  5555                               5555\r\n"
" 5555                                 5555\r\n"
"5555555555555555555555555555          55555\r\n"
" 55555           555555555           55555\r\n"
"   55555           55555           55555\r\n"
"     55555           5           55555\r\n"
"       55555                   55555\r\n"
"         55555               55555\r\n"
"           55555           55555\r\n"
"             55555       55555\r\n"
"               55555   55555\r\n"
"                 555555555\r\n"
"                   55555\r\n"
"                     5\r\n"
"\r\n"
"           SiFive RISC-V Coreplex\r\n";

void print_logo()
{
  putstring(logo);
}
