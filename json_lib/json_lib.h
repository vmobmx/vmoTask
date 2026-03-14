#ifndef JSON_LIB_H_
#define JSON_LIB_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  JL_STATUS_NOT_DONE,
  JL_STATUS_IN_PROCESS,
  JL_STATUS_DONE
} jlTaskStatus;

typedef struct {
  char** task_names;
  jlTaskStatus* task_statuses;
  int taskNumber;
} jlJsonDoc;

jlJsonDoc* jl_json_new_doc();
void jl_doc_free(jlJsonDoc*);

int jl_load_data(jlJsonDoc*, const char*);
int jl_save_data(jlJsonDoc*, const char*);

#ifdef __cplusplus
}
#endif

#endif // JSON_LIB_H_
