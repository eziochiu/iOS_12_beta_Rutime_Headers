/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation <NSFastEnumeration> {
    NSMutableArray * _children;
}

@property (nonatomic, readonly) unsigned long long numberOfChildren;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_tryToDeleteDescendant:(id)arg1;
- (void)addChild:(id)arg1;
- (id)allDescendantsPassingTest:(id /* block */)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (bool)containsChild:(id)arg1;
- (bool)containsDescendant:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)deleteAllChildren;
- (void)deleteChild:(id)arg1;
- (void)deleteDescendant:(id)arg1;
- (id)descendantWithUniqueIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEquivalent:(id)arg1;
- (unsigned long long)numberOfChildren;
- (id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1;
- (id)randomDescendant;
- (id)randomDescendantPassingTest:(id /* block */)arg1;
- (id)randomListDescendant;

@end
