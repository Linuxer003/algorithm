//
// Created by wgh on 2020/12/18.
//

#ifndef CHERNO_BITS_H
#define CHERNO_BITS_H

#include <string>

class Bits {
public:
    /**
     * leetCode 389 找不同
     * 第一种解法利用ascii码求和求解，两个string针对ascii求和作差，
     * 本题采取第二种解法：位运算
     *                因为二进制异或运算具有交换律和结合律
     *
     * @param s
     * @param t
     * @return
     */
    char findTheDifference(std::string& s, std::string& t);
};


#endif //CHERNO_BITS_H
