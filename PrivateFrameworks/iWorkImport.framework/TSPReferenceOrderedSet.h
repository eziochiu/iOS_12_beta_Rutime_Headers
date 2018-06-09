/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReferenceOrderedSet : NSObject {
    unsigned long long  _capacity;
    unsigned long long  _count;
    struct __CFDictionary { } * _dictionary;
    struct _TSPReferenceOrderedSetEntry { void *x1; struct _TSPReferenceOrderedSetEntry {} *x2; } * _firstEntry;
    struct _TSPReferenceOrderedSetEntry { void *x1; struct _TSPReferenceOrderedSetEntry {} *x2; } * _lastEntry;
}

@property (nonatomic, readonly) unsigned long long count;

- (bool)addItem:(id)arg1;
- (id)allObjects;
- (bool)containsItem:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)minusSet:(id)arg1;
- (bool)removeItem:(id)arg1;
- (void)unionSet:(id)arg1;

@end
