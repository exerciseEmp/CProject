//
//其他常见文件操作
// Created by Administrator on 2022/9/28 0028.
//

#include <stdio.h>
#include "head/io_utils.h"
#include <sys/stat.h>
#include <dirent.h>
#if defined(__APPLE__) || defined(__liunx__)
#   include <unistd.h>
#elif defined(_WIN32)

#   include <io.h>

#endif
//看文件大小
long long GetFileSize(char const *filename) {
    struct _stat64 st;
    stat64(filename, &st);
    return st.st_size;
}

//判读是否为目录 0不是目录 非0表示目录
int IsDirectory(char const *filename) {
    struct stat st;
    stat(filename, &st);
    return st.st_mode & S_IFDIR;
}




int main() {
//    int result_1 = remove("E:\\CProject\\HelloWorldC\\copy-test\\dest\\file_test.txt");
//    PRINTLN_INT(result_1);
//    //不存在的就给一个-1
//    int result_2 = remove("E:\\CProject\\HelloWorldC\\copy-test\\dest\\file_t1est.txt");
//    PRINTLN_INT(result_2);
    //不存在给一个-1
//    PRINTLN_INT(rename("E:\\CProject\\HelloWorldC\\copy-test\\dest\\file_test.txt",
//                       "E:\\CProject\\HelloWorldC\\copy-test\\dest\\file_t1est.txt"));
//    FILE *tmp_file = tmpfile();
//    puts(tmpnam(tmp_file));
//    fclose(tmp_file);
//    PRINTLN_LONG_LONG(GetFileSize("../copy-test/dest/file_t1est.txt") / 1024 / 1024);
//    PRINTLN_INT(IsDirectory("../copy-test/dest/file_t1est.txt"));
//    PRINTLN_INT(IsDirectory("../copy-test/dest"));
    PRINTLN_LONG_LONG(getDirectorySize("../copy-test"));
}