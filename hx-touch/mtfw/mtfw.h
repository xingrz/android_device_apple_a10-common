#ifndef _MTFW_H
#define _MTFW_H

#define MTFW_WRITE      1
#define MTFW_WRITE_ACK  2
#define MTFW_WAIT_IRQ   3

typedef struct mtfw_item {
    unsigned type;
    unsigned char *data;
    unsigned size;
    struct mtfw_item *next;
} mtfw_item_t;

mtfw_item_t *mtfw_load_firmware(const char *pers, const char *fname, const char *syscfg);

#endif
