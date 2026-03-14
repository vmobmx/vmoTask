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

void processLine(const char* line, int* nestingLvl) {
  if(line == NULL) {
    return;
  }
  if(line[0] == '{') {
    ++nestingLvl;
  }
  else if(line[0] == '}') {
    --nestingLvl;
  }
}

int jl_load_data(jlJsonDoc* doc, const char* fileName) {
  FILE* file;
  size_t N = 80;
  char arr[N];

  file = fopen(fileName, "r");

  if(file == NULL) {
    return 1;
  }

  while(fgets(arr, N, file) != NULL) {
    printf("%s", arr);
  }

  printf("\n");
  fclose(file);

  return 0;
}
