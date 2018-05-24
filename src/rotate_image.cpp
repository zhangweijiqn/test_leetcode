//
// Created by Zhang,Weijian(BBTD) on 18/5/24.
//
/*
 *You are given an n x n 2D matrix representing an image.
      Rotate the image by 90 degrees (clockwise).

  Follow up:
       Could you do this in-place?

思路1：
    旋转 --> 坐标（下标）转换： (x,y) --> (x',y')
思路2：
    先按对角线互换，再按中轴线互换

 */

#include "stdio.h"
#define  N 9

int M[N][N] = {
        {10,11,12,13,14,15,16,17,18},
        {20,21,22,23,24,25,26,27,28},
        {30,31,32,33,34,35,36,37,38},
        {40,41,42,43,44,45,46,47,48},
        {50,51,52,53,54,55,56,57,58},
        {60,61,62,63,64,65,66,67,68},
        {70,71,72,73,74,75,76,77,78},
        {80,81,82,83,84,85,86,87,88},
        {90,91,92,93,94,95,96,97,98},
};

#define GETM(x, y) M[y][x]
#define GETML90(x, y) M[x][N-1-y]
#define GETMR90(x, y) M[N-1-x][y]
#define GETM180(x, y) M[N-1-x][N-1-y]
//---------------------------------------
int main()
{
    int x,y;
    printf("原始矩阵：\n");
    for( y=0; y<N; y++)
    {
        for (x=0; x<N; x++)
        {
            printf("%d ", GETM(x,y));
        }
        printf("\n");
    }
    printf("\n向左旋90度：\n");
    for( y=0; y<N; y++)
    {
        for (x=0; x<N; x++)
        {
            printf("%d ", GETML90(x,y));
        }
        printf("\n");
    }
    printf("\n向右旋90度：\n");
    for( y=0; y<N; y++)
    {
        for (x=0; x<N; x++)
        {
            printf("%d ", GETMR90(x,y));
        }
        printf("\n");
    }
    printf("\n旋转180度：\n");
    for( y=0; y<N; y++)
    {
        for (x=0; x<N; x++)
        {
            printf("%d ", GETM180(x,y));
        }
        printf("\n");
    }


    return 0;
}