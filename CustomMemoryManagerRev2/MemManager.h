#ifndef MEMMANAGER_H
#define MEMMANGAER_H

class MemManager
{
};

struct MemBlock 
{
    //struct memBlock* next;
    unsigned int size;
    bool isFree;
};

#endif