# 0 "/home/uoua/Documents/learnC/vmoTask/task_cli/piska.cppm"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "/home/uoua/Documents/learnC/vmoTask/task_cli/piska.cppm"
module;

# 1 "/home/uoua/Documents/learnC/vmoTask/json_lib/json_lib.h" 1




extern "C" {


void hello_world();


}
# 4 "/home/uoua/Documents/learnC/vmoTask/task_cli/piska.cppm" 2

export module piska;

namespace piska {
  export void what() {
    hello_world();
  }
}
