//
// Created by jrd2112 on 12/21/2023.
//

#ifndef COURSE_HUB_BAG_H
#define COURSE_HUB_BAG_H

#include <vector>

template< typename ItemType >
class Bag
{
public:
    /**
     * Gets the current number of entries in this bag.
     * @return a count of the current number of entries in this bag.
     */
    virtual int getCurrentSize( ) const = 0;

    /**
     * Determine whether this bag is empty.
     * @return true if there are no items in this bag, false otherwise.
     */
    virtual bool isEmpty( ) const = 0;

    /**
     * Adds a new entry to this bag.
     * @post If successful, newEntry is stored in the bag and the count of items has increased by 1.
     * @param newEntry the item we attempt to add to this bag
     * @return true if the newEntry was successfully added to this bag, false otherwise.
     */
    virtual bool add( const ItemType & newEntry ) = 0;

    /**
     *
     * @param anEntry
     * @return
     */
    virtual bool remove( const ItemType & anEntry ) = 0;

    /**
     *
     */
    virtual void clear( ) = 0;

    /**
     *
     * @param anEntry
     * @return
     */
    virtual int getFrequencyOf( const ItemType & anEntry ) = 0;

    /**
     *
     * @param anEntry
     * @return
     */
    virtual bool contains( const ItemType & anEntry ) = 0;

    /**
     *
     * @return
     */
    virtual std::vector< ItemType > toVector( ) const = 0;

    /**
     *
     */
    virtual ~Bag( ) = default;
};

#endif //COURSE_HUB_BAG_H
