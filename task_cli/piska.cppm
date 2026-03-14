module;

#include "json_lib.h"
#include <iostream>

export module piska;

namespace piska {
  export void what() {
    jlJsonDoc* doc = jl_json_new_doc();

    if(jl_load_data(doc, "data.json") != 0) {
      std::cout << "Failed to Load Data\n";
    }

    jl_doc_free(doc);
  }
}
