#include "types.h"

#define MAX_REPORT_BUFFER_SIZE 10

struct report {
    char pname[16];
    int pid;
    uint64 scause;
    uint64 sepc;
    uint64 stval;
};

struct {
    struct report reports[MAX_REPORT_BUFFER_SIZE];
    int numberOfReports;
    int writeIndex;
} _internal_report_list;

struct report_traps {
    struct report reports[MAX_REPORT_BUFFER_SIZE];
    int count;
};
