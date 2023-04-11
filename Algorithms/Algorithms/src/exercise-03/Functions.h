#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <cstring>

namespace functions{

    template <class T> void trocar(T &a, T &b) {
        T t = a;
        a = b;
        b = t;
    }

    template<class T> T maximo(const T a, const T b);

    template<> const char* maximo(const char* a, const char* b){
        int result = strcmp(a, b);
        if(result < 0){
            return b;
        }
        if(result > 0){
            return a;
        }
        else{
            return a;
        }
    }

    template <class T> T minimo(const T a, const T b);

    template<> const char* minimo(const char* a, const char* b){
        int result = strcmp(a, b);
        if(result < 0){
            return a;
        }
        if(result > 0){
            return b;
        }
        else{
            return a;
        }
    }
}

#endif
