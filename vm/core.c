//
// Created by GreenMuffin on 2026/1/20.
//

#include "core.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "common/utils.h"

char* rootDir = NULL;   //根目录

//读取源代码文件
char* readFile(const char* path) {
    FILE* file = fopen(path, "r");
    if (file == NULL) {
        IO_ERROR("Could`t open file \"%s\".\n", path);
    }

    struct stat fileStat;
    stat(path, &fileStat);      // COMMENT: stat -> 获取文件信息
    size_t fileSize = fileStat.st_size;
    char* fileContent = (char*)malloc(fileSize + 1);
    if (fileContent == NULL) {
        MEM_ERROR("Could`t allocate memory for reading file \"%s\".\n", path);
    }

    size_t numRead = fread(fileContent, sizeof(char), fileSize, file);  // COMMENT: fread -> 读取文件内容，从FILE*流中读取数据
    if (numRead < fileSize) {
        IO_ERROR("Could`t read file \"%s\".\n", path);
    }
    fileContent[fileSize] = '\0';

    fclose(file);
    return fileContent;
}