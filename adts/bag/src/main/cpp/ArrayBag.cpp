//
// Created by jrd2112 on 12/21/2023.
//

#include "ArrayBag.h"

template< typename ItemType >
ArrayBag< ItemType >::ArrayBag( ) : itemCount{ 0 }, maxItems{ DEFAULT_CAPACITY }
{

}

template< typename ItemType >
bool ArrayBag< ItemType >::isEmpty( ) const
{
    return itemCount == 0;
}

template< typename ItemType >
bool ArrayBag< ItemType >::add( const ItemType & newEntry )
{
    bool hasRoomToAdd{ itemCount < maxItems };
    if ( hasRoomToAdd )
    {
        items[ itemCount ] = newEntry;
        itemCount += 1;
    }
    return hasRoomToAdd;
}

template< typename ItemType >
int ArrayBag< ItemType >::getIndexOf( const ItemType & target ) const
{
    bool isFound{ false };
    int result{ -1 };
    int searchIndex{ 0 };
    // if bag is empty, itemCount is zero, so loop is skipped
    while ( !isFound && searchIndex < itemCount )
    {
        isFound = ( items[ searchIndex ] == target );
        if ( isFound )
        {
            result = searchIndex;
        }
        else
        {
            searchIndex += 1;
        }
    }
    return result;
}

template< typename ItemType >
bool ArrayBag< ItemType >::remove( const ItemType & anEntry )
{
    int locatedIndex = getIndexOf(anEntry);
    bool canRemove = (!(isEmpty()) && (locatedIndex > -1));
    if (canRemove)
    {
        itemCount -= 1;
        items[locatedIndex] = items[itemCount];
    }
    return canRemove;
}

template< typename ItemType >
void ArrayBag< ItemType >::clear( )
{

}

template< typename ItemType >
int ArrayBag< ItemType >::getFrequencyOf( const ItemType & anEntry )
{
    int frequency{ 0 };
    int currIndex{ 0 };
    while ( currIndex < itemCount )
    {
        if ( items[ currIndex ] == anEntry )
        {
            frequency += 1;
        }
        currIndex += 1;
    }
    return frequency;
}

template< typename ItemType >
bool ArrayBag< ItemType >::contains( const ItemType & anEntry )
{
    bool found{ false };
    int currIndex{ 0 };
    while ( !found && ( currIndex < itemCount ))
    {
        if ( anEntry == items[ currIndex ] )
        {
            found = true;
        }
        else
        {
            currIndex += 1;
        }
    }
    return found;
    // discuss why the following works, but is less efficient
//    return getFrequencyOf( anEntry > 0 );
}

template< typename ItemType >
std::vector< ItemType > ArrayBag< ItemType >::toVector( ) const
{
    std::vector< ItemType > contents;
    for ( int i{ 0 }; i < itemCount; i += 1 )
    {
        contents.push_back( items[ i ] );
    }
    return contents;
}

template< typename ItemType >
int ArrayBag< ItemType >::getCurrentSize( ) const
{
    return itemCount;
}
