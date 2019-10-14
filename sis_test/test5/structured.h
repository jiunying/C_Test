#ifndef _STRUCTRUED_H
#define _STRUCTRUED_H

#define ARRAY_SIZE 128

enum
{
    OFF = 0,
    ON
};

typedef struct
{
    char name[ARRAY_SIZE];
    int status;
} t_switch;

typedef struct
{
    char name[ARRAY_SIZE];
    char value[ARRAY_SIZE];
} t_para;

typedef struct
{
    char name[ARRAY_SIZE];
    int para_num;
    t_para m_para[ARRAY_SIZE];
    int switch_num;
    t_switch m_switch[ARRAY_SIZE];
} t_item;

typedef struct
{
    int num;
    t_item m_item[ARRAY_SIZE/2];
} S_ITEM;

#endif
