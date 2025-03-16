#include "huffman.h"
#include <iostream>
#include <vector>

Node::Node(char symbol, int freq) : symbol(symbol), freq(freq), left(nullptr), right(nullptr) {
}