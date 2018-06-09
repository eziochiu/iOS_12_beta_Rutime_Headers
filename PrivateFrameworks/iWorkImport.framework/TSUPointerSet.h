/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUPointerSet : NSSet {
    struct __CFSet { } * mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)allObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)getObjects:(id*)arg1;
- (id)initWithCFSet:(struct __CFSet { }*)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)setByAddingObject:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;

@end