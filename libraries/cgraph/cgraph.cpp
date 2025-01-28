// SPDX-FileCopyrightText: 2024 Chunel Feng
// SPDX-License-Identifier: MIT

#include <CGraph.h>

class MyNode1 : public CGraph::GNode {
public:
    CStatus run() override {
        printf("[%s], Sleep for 1 second ...\n", this->getName().c_str());
        CGRAPH_SLEEP_SECOND(1)
        return CStatus();
    }
};

class MyNode2 : public CGraph::GNode {
public:
    CStatus run() override {
        printf("[%s], Sleep for 2 second ...\n", this->getName().c_str());
        CGRAPH_SLEEP_SECOND(2)
        return CStatus();
    }
};


using namespace CGraph;
int main() {
    /* 创建一个流水线，用于设定和执行流图信息 */
    GPipelinePtr pipeline = GPipelineFactory::create();
    GElementPtr a, b, c, d = nullptr;

    /* 注册节点之间的依赖关系 */
    pipeline->registerGElement<MyNode1>(&a, {}, "nodeA");
    pipeline->registerGElement<MyNode2>(&b, {a}, "nodeB");
    pipeline->registerGElement<MyNode1>(&c, {a}, "nodeC");
    pipeline->registerGElement<MyNode2>(&d, {b, c}, "nodeD");

    /* 执行流图框架 */
    pipeline->process();
    GPipelineFactory::remove(pipeline);

    return 0;
}
