�}fD   �?抻�@��]	0??
�l�F괔Zoz?�q�J3��0���\��t��??�A��B�i`��c�d��Ǔ
��?}��_?��Gm�V?�E�{B�J��???Q?�y*����^bρl����`���^�T�q ?�v.?�@Z�X�_��?��̝S<�d�� 
��&7Y�z<EK���[���b?A�cЖ D[�oΒ���v�H���[%���0���⭸p��Ů��D��YX*ZǦ߮���?n1>??<?�K����?�{[�H̤�C�K?5[��?l��[�����e^�ټ�?T-ʘn�hљ������?�T��-??p��c��/?�B�Nw��*?f�>&���jd:K?=?�s�?NR���l7KPF��?Y(�F^��	S�N�z?�O?����31�k!Ez�|�adaVWO%w�픚CT?�N�t\�xj:]���FS|M��4?�l!P沑�?|A_?q��}ץ\s�user);
void user_ClearList();
struct user_info* user_find_by_addr(uint32 *addr);
struct user_info* user_find_by_name(const char *user_name);

void user_list_dump();
#include "network.h"

struct host_info {
    char user_name[MAX_NAMELEN];
    char host_name[MAX_NAMELEN];
    struct net_address addr;
};

#endif