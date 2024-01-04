#include "bytecode.h"

#define BEGIN_MAP(maj, min) \
    int python_##maj##_##min##_map(int id) \
    { \
        switch (id) {

#define MAP_OP(op, name) \
        case op: return Pyc::name;

#define END_MAP() \
        default: return Pyc::PYC_INVALID_OPCODE; \
        } \
    }

#define BEGIN_CACHES_MAP(maj, min) \
    int python_##maj##_##min##_caches_map(int id) \
    { \
        switch (id) {

#define MAP_CACHES_OP(op, caches) \
        case Pyc::op: return caches;

#define END_CACHES_MAP() \
        default: return 0; \
        } \
    }
