#ifndef ANAKIN_TEST_SABER_TEST_SABER_FUNC_SOFTMAX_BM_H
#define ANAKIN_TEST_SABER_TEST_SABER_FUNC_SOFTMAX_BM_H

#include "utils/unit_test/aktest.h"
#include "utils/logger/logger.h"
#include "core/tensor.h"

using namespace anakin::test;

class TestSaberFuncSoftmaxBM : public Test {
public:
    TestSaberFuncSoftmaxBM() {}
    ~TestSaberFuncSoftmaxBM() {}

protected:
    virtual void setup() {}
    virtual void teardown() {}

};

#endif //ANAKIN_TEST_SABER_TEST_SABER_FUNC_SOFTMAX_BM_H