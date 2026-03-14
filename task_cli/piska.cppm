module;

#include "json_lib.h"

export module piska;

namespace piska {
  export void what() {
    jlJsonDoc* doc = jl_json_new_doc();

    jl_doc_free(doc);
  }
}
