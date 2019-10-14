#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structured.h"

S_ITEM g_item;

static void createSwitchStructured(const char *name, const int status, t_item *p_item)
{
    t_switch *p = &p_item->m_switch[p_item->switch_num++];
    strcpy(p->name, name);
    p->status = status;
}

static void createParaStructured(const char *name, const char *value, t_item *p_item)
{
    t_para *p = &p_item->m_para[p_item->para_num++];
    strcpy(p->name, name);
    strcpy(p->value, value);
}

static void createItemStructured(const char *name)
{
    t_item *p = &g_item.m_item[g_item.num++];
    strcpy(p->name, name);
    p->para_num = 0;
    p->switch_num = 0;
}

static void parseStr(const char *str)
{
    char cpy_str[128];
    int comp1 = !strncmp(str, "// ", 3);
    int comp2 = !strncmp(str, "#define ", 8);
    int comp3 = !strncmp(str, "//#define ", 10);
    if (comp1)
    {
        strcpy(cpy_str, &str[3]);
        createItemStructured(cpy_str);
    }
    else if (comp2 || comp3)
    {
        int status = comp2? ON:OFF;
        char *delim = " \t\n";
        char *sub_str, para_name[128];
        strcpy(cpy_str, str);
        sub_str = strtok(cpy_str, delim);
        if (sub_str != NULL)
        {
            sub_str = strtok(NULL, delim);
            if (!strncmp(sub_str, "_", 1))
            {
                createSwitchStructured(sub_str, status, &g_item.m_item[g_item.num-1]);
            }
            else
            {
                strcpy(para_name, sub_str);
                sub_str = strtok(NULL, delim);
                createParaStructured(para_name, sub_str,  &g_item.m_item[g_item.num-1]);
            }
        }
    }
}

static void printData()
{
    int i, j;
    printf("Total Item num= %d\n", g_item.num);
    for (i = 0; i < g_item.num; ++i)
    {
        printf("[%d]%s", i, g_item.m_item[i].name);
        t_item *p = &g_item.m_item[i];
        printf(" <Total Switch num = %d>\n", p->switch_num);
        for (j = 0; j < p->switch_num; ++j)
        {
            t_switch *ps = &p->m_switch[j];
            printf(" ->[%d]%s %d\n", j, ps->name, ps->status);
        }
        printf(" <Total Para num = %d>\n", p->para_num);
        for(j = 0; j < p->para_num; ++j)
        {
            t_para *pp = &p->m_para[j];
            printf(" =>[%d]%s %s\n", j, pp->name, pp->value);
        }
    }
}

int main()
{
    FILE *fptr = NULL;
    char line[256];
    g_item.num = 0;
    fptr = fopen("../template.h", "rb+");
    if (!fptr)
    {
        printf("Open file Error!\n");
    }
    else
    {
        while(fgets(line, 256, fptr))
        {
            parseStr(line);
        }
        fclose(fptr);
    }
    printData();
    return 0;
}
