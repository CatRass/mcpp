#include "../include/mcpp/block.h"

bool BlockType::operator==(const BlockType &other) const {
    return this->id == other.id && this->data == other.data;
}

BlockType BlockType::withData(int newData) const {
    return { this->id, newData };
}
