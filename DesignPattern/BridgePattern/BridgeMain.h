//
// Created by xiemenghui on 2018/7/21.
//

#ifndef DESIGNPATTERN_BRIDGEMAIN_H
#define DESIGNPATTERN_BRIDGEMAIN_H

#include "concrete_implementor.h"
#include "refined_abstraction.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)     \
    {                      \
        if (p) {           \
            delete (p);    \
            (p) = nullptr; \
        }                  \
    }
#endif

void BridgeMain();

#endif //DESIGNPATTERN_BRIDGEMAIN_H
