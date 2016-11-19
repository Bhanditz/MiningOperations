//
// Created by Alexandre Sejournant on 19/11/2016.
//

#ifndef MINING_OP_ITOOL_HPP
#define MINING_OP_ITOOL_HPP

#include <obj/items/IItem.hpp>

/*
 *      Base for tools, all tools will inherit from
 *      this class. There will be a class for each tool, but
 *      not materials: it will be a spec of the object.
 */

class ITool : public IItem
{
};

#endif //MINING_OP_ITOOL_HPP
