#include "json_lib.h"
#include <stdio.h>
#include <stdlib.h>

jlJsonDoc* jl_json_new_doc() {
  jlJsonDoc* doc = malloc(sizeof(jlJsonDoc));

  if(doc == NULL) {
    return NULL;
  }

  return doc;
}

void jl_doc_free(jlJsonDoc* doc) {
  if(doc == NULL) {
    return;
  }

  if(doc->task_statuses != NULL) {
    free(doc->task_statuses);
  }

  if(doc->task_names != NULL) {
    size_t taskNumber = doc->taskNumber; 
    for(int i = 0; i < taskNumber; ++i) {
      if(doc->task_names[i] != NULL) {
        free(doc->task_names[i]);
      }
    } 
  }

  free(doc);
}
