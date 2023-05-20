typedef struct PtrsX PtrsX;

struct PtrsX *ptrsx_init(int pid);

void ptrsx_free(struct PtrsX *ptr);

int ptrsx_create_pointer_map(struct PtrsX *ptr, const char *path);

typedef void* (*addr)[2];
addr ptrsx_load_pointer_map(struct PtrsX *ptr, const char *path, int *length);

int last_error_length(void);

int last_error_message(char *buffer, int length);