#include <boost/graph/adjacency_list.hpp>

using Graph = boost::adjacency_list<>;

int main() {
    auto g = Graph{};
    boost::add_edge({}, {}, g);
    return 0;
}
