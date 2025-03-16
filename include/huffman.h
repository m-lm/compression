#ifndef HUFFMAN_H
#define HUFFMAN_H
#include <string>
#include <memory>

class Node {
    private:
        char symbol;
        int freq;
        std::unique_ptr<Node> left;
        std::unique_ptr<Node> right;

        Node(char symbol, int freq);
};

#endif