//
// Created by Melo Chan on 2016/11/23.
//

#ifndef DEMOS_ALGORITHMS_H
#define DEMOS_ALGORITHMS_H

/*
 * 欧几里得算法
 * 两个非负整数的最大公约数问题
 * 1.若其中一个数为0， 则另一个数为问题的解
 * 2.较大数除以较小数的余数， 与较小数的最大公约数为问题的解
 */
int euclidAlg(int left, int right) {
    if (left >= right) {
        int temp = left;
        left = right;
        right = temp;
    }

    if (left == 0) return right;

    return euclidAlg(right % left, left);
}

#endif //DEMOS_ALGORITHMS_H
