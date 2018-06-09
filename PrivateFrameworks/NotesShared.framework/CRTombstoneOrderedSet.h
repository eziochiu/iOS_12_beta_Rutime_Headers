/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRTombstoneOrderedSet : NSObject <CRCoding, CRDataType, CRUndoDelegate> {
    NSMutableOrderedSet * _cachedIdentifierSet;
    NSMapTable * _cachedIndexMapping;
    NSObject<CRUndoDelegate> * _delegate;
    CRDocument * _document;
    CRSet * _elements;
    CRArray * _ordering;
}

@property (nonatomic, readonly) NSMutableOrderedSet *cachedIdentifierSet;
@property (nonatomic, readonly) NSMapTable *cachedIndexMapping;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) CRDocument *document;
@property (nonatomic, retain) CRSet *elements;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CRArray *ordering;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeObjectsFromOrderingAtIndices:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addUndoCommandsForObject:(id)arg1 block:(id /* block */)arg2;
- (id)cachedIdentifierSet;
- (id)cachedIndexMapping;
- (bool)containsObjectEqualTo:(id)arg1;
- (unsigned long long)count;
- (id)delegate;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (id)elements;
- (void)encodeWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1 orderedSet:(struct OrderedSet { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Array {} *x5; struct Dictionary {} *x6; }*)arg2;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)generateNSOrderedIdentifierSetWithIndexMapping:(id)arg1;
- (unsigned long long)hash;
- (id)identifierForObjectInCachedSet:(id)arg1;
- (unsigned long long)indexOfEqualObject:(id)arg1;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1 orderedSet:(const struct OrderedSet { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Array {} *x5; struct Dictionary {} *x6; }*)arg2;
- (id)initWithDocument:(id)arg1;
- (id)initWithOrdering:(id)arg1 elements:(id)arg2 document:(id)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)moveClock;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 mutableSafe:(bool)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForIdentifier:(id)arg1;
- (id)ordering;
- (void)realizeElementMutations;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)regenerateNSOrderedIdentifierSetAndIndexMapping;
- (void)reinsertIdentifier:(id)arg1 withMaskedIdentifiers:(id)arg2 atIndex:(unsigned long long)arg3 forObjectToMove:(id)arg4;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)safeMoveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setOrdering:(id)arg1;
- (void)shiftCachedIndicesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;
- (id)tombstone;
- (void)undoablyInsertObjectIdentifiersIntoElements:(id)arg1;
- (void)undoablyRemoveObjectIdentifiersFromElements:(id)arg1;
- (void)walkGraph:(id /* block */)arg1;
- (bool)wantsUndoCommands;
- (void)wipeoutCaches;

@end
