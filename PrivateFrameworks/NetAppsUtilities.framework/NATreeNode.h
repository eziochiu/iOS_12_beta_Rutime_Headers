/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NATreeNode : NSObject <NAIdentifiable, NSCopying, NSFastEnumeration, NSMutableCopying, NSObject> {
    NSMutableSet * _internalChildNodes;
    id  _representedObject;
}

@property (nonatomic, readonly, copy) NSSet *childNodes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSEnumerator *deepNodeEnumerator;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSMutableSet *internalChildNodes;
@property (nonatomic, retain) id representedObject;
@property (nonatomic, readonly) NSEnumerator *shallowNodeEnumerator;
@property (nonatomic, readonly) NSEnumerator *shallowRepresentedObjectEnumerator;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_identity;

- (void).cxx_destruct;
- (id)childAtIndexPath:(id)arg1 withChildrenSortedByComparator:(id /* block */)arg2;
- (id)childNodes;
- (id)childrenSortedByComparator:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)deepNodeEnumerator;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRepresentedObject:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1 childNodes:(id)arg2;
- (id)internalChildNodes;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)representedObject;
- (void)setInternalChildNodes:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)shallowNodeEnumerator;
- (id)shallowRepresentedObjectEnumerator;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_nodeWithKeyPath:(id)arg1;
- (id)hf_sortedAccessorySettingsChildren;

@end
