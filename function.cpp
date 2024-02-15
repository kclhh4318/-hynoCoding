#include <iostream>
#include <vector>

int lowerBound(const vector<int>& A, int size, int target){
    int lo = 0, mid, hi = size - 1; 
    while(lo < hi){
        mid = (lo + hi) / 2;
        if(A[mid] >= target){
            hi = mid;
        }
        else mid = lo + 1;
    }
    return hi;
}

int upperBound(const vector<int>& A, int size, int target){
    int lo = 0, mid, hi = size - 1;
    while(lo < hi){
        mid = (lo + hi) / 2;
        if(A[mid] > target){
            hi = mid;
        }
        else mid = lo + 1;
    }
    return hi;
}