//
// Created by Alexandre Sejournant on 15/11/2016.
//

#ifndef MINING_OP_IARMOR_HPP
#define MINING_OP_IARMOR_HPP

#include <obj/items/IItem.hpp>

/*
 *      Base for armors, all armors type will inherit from
 *      this class. There will be a class for armor slots, but
 *      not materials: it will be a specification of the object
 */

class IArmor : public IItem
{
};

#endif //MINING_OP_IARMOR_HPP
