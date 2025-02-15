#include "bytecode_map.h"

BEGIN_MAP(3, 11)
    MAP_OP(0, CACHE)
    MAP_OP(1, POP_TOP)
    MAP_OP(2, PUSH_NULL)
    MAP_OP(9, NOP)
    MAP_OP(10, UNARY_POSITIVE)
    MAP_OP(11, UNARY_NEGATIVE)
    MAP_OP(12, UNARY_NOT)
    MAP_OP(15, UNARY_INVERT)
    MAP_OP(25, BINARY_SUBSCR)
    MAP_OP(30, GET_LEN)
    MAP_OP(31, MATCH_MAPPING)
    MAP_OP(32, MATCH_SEQUENCE)
    MAP_OP(33, MATCH_KEYS)
    MAP_OP(35, PUSH_EXC_INFO)
    MAP_OP(36, CHECK_EXC_MATCH)
    MAP_OP(37, CHECK_EG_MATCH)
    MAP_OP(49, WITH_EXCEPT_START)
    MAP_OP(50, GET_AITER)
    MAP_OP(51, GET_ANEXT)
    MAP_OP(52, BEFORE_ASYNC_WITH)
    MAP_OP(53, BEFORE_WITH)
    MAP_OP(54, END_ASYNC_FOR)
    MAP_OP(60, STORE_SUBSCR)
    MAP_OP(61, DELETE_SUBSCR)
    MAP_OP(68, GET_ITER)
    MAP_OP(69, GET_YIELD_FROM_ITER)
    MAP_OP(70, PRINT_EXPR)
    MAP_OP(71, LOAD_BUILD_CLASS)
    MAP_OP(74, LOAD_ASSERTION_ERROR)
    MAP_OP(75, RETURN_GENERATOR)
    MAP_OP(82, LIST_TO_TUPLE)
    MAP_OP(83, RETURN_VALUE)
    MAP_OP(84, IMPORT_STAR)
    MAP_OP(85, SETUP_ANNOTATIONS)
    MAP_OP(86, YIELD_VALUE)
    MAP_OP(87, ASYNC_GEN_WRAP)
    MAP_OP(88, PREP_RERAISE_STAR)
    MAP_OP(89, POP_EXCEPT)
    MAP_OP(90, STORE_NAME_A)
    MAP_OP(91, DELETE_NAME_A)
    MAP_OP(92, UNPACK_SEQUENCE_A)
    MAP_OP(93, FOR_ITER_A)
    MAP_OP(94, UNPACK_EX_A)
    MAP_OP(95, STORE_ATTR_A)
    MAP_OP(96, DELETE_ATTR_A)
    MAP_OP(97, STORE_GLOBAL_A)
    MAP_OP(98, DELETE_GLOBAL_A)
    MAP_OP(99, SWAP_A)
    MAP_OP(100, LOAD_CONST_A)
    MAP_OP(101, LOAD_NAME_A)
    MAP_OP(102, BUILD_TUPLE_A)
    MAP_OP(103, BUILD_LIST_A)
    MAP_OP(104, BUILD_SET_A)
    MAP_OP(105, BUILD_MAP_A)
    MAP_OP(106, LOAD_ATTR_A)
    MAP_OP(107, COMPARE_OP_A)
    MAP_OP(108, IMPORT_NAME_A)
    MAP_OP(109, IMPORT_FROM_A)
    MAP_OP(110, JUMP_FORWARD_A)
    MAP_OP(111, JUMP_IF_FALSE_OR_POP_A)
    MAP_OP(112, JUMP_IF_TRUE_OR_POP_A)
    MAP_OP(114, POP_JUMP_FORWARD_IF_FALSE_A)
    MAP_OP(115, POP_JUMP_FORWARD_IF_TRUE_A)
    MAP_OP(116, LOAD_GLOBAL_A)
    MAP_OP(117, IS_OP_A)
    MAP_OP(118, CONTAINS_OP_A)
    MAP_OP(119, RERAISE_A)
    MAP_OP(120, COPY_A)
    MAP_OP(122, BINARY_OP_A)
    MAP_OP(123, SEND_A)
    MAP_OP(124, LOAD_FAST_A)
    MAP_OP(125, STORE_FAST_A)
    MAP_OP(126, DELETE_FAST_A)
    MAP_OP(128, POP_JUMP_FORWARD_IF_NOT_NONE_A)
    MAP_OP(129, POP_JUMP_FORWARD_IF_NONE_A)
    MAP_OP(130, RAISE_VARARGS_A)
    MAP_OP(131, GET_AWAITABLE_A)
    MAP_OP(132, MAKE_FUNCTION_A)
    MAP_OP(133, BUILD_SLICE_A)
    MAP_OP(134, JUMP_BACKWARD_NO_INTERRUPT_A)
    MAP_OP(135, MAKE_CELL_A)
    MAP_OP(136, LOAD_CLOSURE_A)
    MAP_OP(137, LOAD_DEREF_A)
    MAP_OP(138, STORE_DEREF_A)
    MAP_OP(139, DELETE_DEREF_A)
    MAP_OP(140, JUMP_BACKWARD_A)
    MAP_OP(142, CALL_FUNCTION_EX_A)
    MAP_OP(144, EXTENDED_ARG_A)
    MAP_OP(145, LIST_APPEND_A)
    MAP_OP(146, SET_ADD_A)
    MAP_OP(147, MAP_ADD_A)
    MAP_OP(148, LOAD_CLASSDEREF_A)
    MAP_OP(149, COPY_FREE_VARS_A)
    MAP_OP(151, RESUME_A)
    MAP_OP(152, MATCH_CLASS_A)
    MAP_OP(155, FORMAT_VALUE_A)
    MAP_OP(156, BUILD_CONST_KEY_MAP_A)
    MAP_OP(157, BUILD_STRING_A)
    MAP_OP(160, LOAD_METHOD_A)
    MAP_OP(162, LIST_EXTEND_A)
    MAP_OP(163, SET_UPDATE_A)
    MAP_OP(164, DICT_MERGE_A)
    MAP_OP(165, DICT_UPDATE_A)
    MAP_OP(166, PRECALL_A)
    MAP_OP(171, CALL_A)
    MAP_OP(172, KW_NAMES_A)
    MAP_OP(173, POP_JUMP_BACKWARD_IF_NOT_NONE_A)
    MAP_OP(174, POP_JUMP_BACKWARD_IF_NONE_A)
    MAP_OP(175, POP_JUMP_BACKWARD_IF_FALSE_A)
    MAP_OP(176, POP_JUMP_BACKWARD_IF_TRUE_A)
END_MAP()

BEGIN_CACHES_MAP(3, 11)
    MAP_CACHES_OP(BINARY_SUBSCR, 4)
    MAP_CACHES_OP(STORE_SUBSCR, 1)
    MAP_CACHES_OP(UNPACK_SEQUENCE_A, 1)
    MAP_CACHES_OP(STORE_ATTR_A, 4)
    MAP_CACHES_OP(LOAD_ATTR_A, 4)
    MAP_CACHES_OP(COMPARE_OP_A, 2)
    MAP_CACHES_OP(LOAD_GLOBAL_A, 5)
    MAP_CACHES_OP(BINARY_OP_A, 1)
    MAP_CACHES_OP(LOAD_METHOD_A, 10)
    MAP_CACHES_OP(PRECALL_A, 1)
    MAP_CACHES_OP(CALL_A, 4)
END_CACHES_MAP()
