
#define _MAKEDOC

#include "../opcodes.h"
#include "../mutt.h"

struct opcode {
  const char *opcode;
  const char *help_string;
};

const struct opcode ops[] = {
#define DEFINE_LEGACY_OPS(opcode, help_string) { #opcode, help_string },
  OPS(DEFINE_LEGACY_OPS)
};

int main(int argc, char *argv[])
{
  int i;
  
  for (int i = 0; i < mutt_array_size(ops); i++) {
    printf("%s \"%s\"\n", ops[i].opcode, ops[i].help_string);
  }
  
  return 0;
}
