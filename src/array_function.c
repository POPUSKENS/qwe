#include "../include/array_function.h"

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    for (size_t i = 0; i < size_src1; i++) {
        dest[i] = src1[i];
    }
    for (size_t i = 0; i < size_src2; i++) {
        dest[i + size_src1] = src2[i];
    }
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    join_int_arrays(src1, size_src1, src2, size_src2, dest);
    size_t razmer = size_src1 + size_src2;
    size_t i = 0;
    while (i < razmer) {
        if (i == 0) {
            i++;
        }
        else if (dest[i] >= dest[i-1]) {
            i++;
        }
        else {
            int tmp = dest[i];
            dest[i] = dest[i-1];
            dest[i-1] = tmp;
            i--;
        }
    }
}
void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    *min = src[0];
    *max = src[0];
    for (size_t i = 1; i < size; i++) {
        if (src[i] < *min) {
            *min = src[i];
        }
        if (src[i] > *max) {
            *max = src[i];
        }
    }
}

