#ifndef _PARSE_H
#define _PARSE_H

typedef struct
{
    int m_width;
    int m_height;
    int m_frame_count;
} t_frame;

void ParseString(char *str);

#endif
