//
// Created by jrd2112 on 12/21/2023.
//

#ifndef COURSE_HUB_ARRAY_BAG_H
#define COURSE_HUB_ARRAY_BAG_H

#include "bag.h"

template< typename ItemType >
class ArrayBag : public Bag< ItemType >
{
private:
    static const int DEFAULT_CAPACITY = 6;
    ItemType items[DEFAULT_CAPACITY];
    int itemCount;
    int maxItems;
    int getIndexOf( const ItemType& target ) const;
public:
    ArrayBag( );

    int getCurrentSize( ) const override;

    bool isEmpty( ) const override;

    bool add( const ItemType & newEntry ) override;

    bool remove( const ItemType & anEntry ) override;

    void clear( ) override;

    int getFrequencyOf( const ItemType & anEntry ) override;

    bool contains( const ItemType & anEntry ) override;

    std::vector< ItemType > toVector( ) const override;

    ~ArrayBag( ) override = default;
};

#endif //COURSE_HUB_ARRAY_BAG_H
