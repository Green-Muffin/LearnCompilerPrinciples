//
// Created by GreenMuffin on 2026/1/20.
//

#ifndef LEARNCOMPILERPRINCIPLES_VM_H
#define LEARNCOMPILERPRINCIPLES_VM_H

#include "common/common.h"
#include "object/header_obj.h"

struct vm {
    // Class* stringClass;
    uint32_t allocatedBytes;  //累计已分配的内存量
    // ObjHeader* allObjects;  //已分配对象链表头
    Parser* curParser;  //当前词法分析器
};

void initVM(VM* vm);
VM* newVM(void);

#endif //LEARNCOMPILERPRINCIPLES_VM_H