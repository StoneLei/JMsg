#ifndef USER_H_
#define USER_H_

#include "types.h"

struct host_info {
    char user_name[MAX_NAMELEN];
    char host_name[MAX_NAMELEN];
    uint32 addr;
    uint16 port;
};

struct user_info {
    struct host_info host;
	char nick_name[MAX_NAMELEN];
    char group_name[MAX_NAMELEN];
    char alter_name[MAX_NAMELEN];
	uint32 status;
};

struct user_list {
	struct user_list* next;
	struct user_info info;
};

void user_add();
void user_remove();
struct user_info* user_find();


#endif