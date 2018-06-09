/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet {
    int  _cd_rc;
    struct _NSFaultingMutableOrderedSetFlags { 
        unsigned int _isFault : 1; 
        unsigned int _mustPropagateDelete : 1; 
        unsigned int _ignoringIdempotentKVO : 1; 
        unsigned int _mustCopyOnWrite : 1; 
        unsigned int _isImmutableCopy : 1; 
        unsigned int _reserved : 11; 
        unsigned int _relationship : 16; 
    }  _flags;
    NSMutableDictionary * _forcedKeys;
    id  _grottyHack;
    unsigned int * _orderKeys;
    id  _realSet;
    NSManagedObject * _source;
}

@property (getter=isFault, nonatomic, readonly) bool fault;
@property (nonatomic, readonly) NSPropertyDescription *relationship;
@property (nonatomic, readonly) NSManagedObject *source;

+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)_assignOrderKeysUsingCount:(unsigned int)arg1;
- (bool)_hasOrderKeys;
- (bool)_isDeallocating;
- (bool)_isIdenticalFault:(id)arg1;
- (id)_newOrderKeys;
- (unsigned int)_orderKeyForObject:(id)arg1;
- (id)_orderedObjectsAndKeys;
- (void)_populateOrderKeysUsingSnapshot:(id)arg1 orderKeys:(id)arg2 newIndexes:(unsigned long long**)arg3 reorderedIndexes:(char **)arg4;
- (bool)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id*)arg2;
- (void)_setProcessingIdempotentKVO:(bool)arg1;
- (bool)_shouldProcessKVOChange;
- (bool)_tryRetain;
- (void)_updateOrderKeysFromOrderOfObjectIDs:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (id)allObjects;
- (Class)classForArchiver;
- (Class)classForCoder;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(bool)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOrderedSet:(id)arg1;
- (bool)isFault;
- (void)minusOrderedSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectEnumerator;
- (id)relationship;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)sortRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (void)sortUsingComparator:(id /* block */)arg1;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;
- (id)source;
- (void)turnIntoFault;
- (void)unionOrderedSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)willChange;
- (void)willRead;
- (void)willReadWithContents:(id)arg1;

@end
