/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVQueue : NSObject {
    int  _isBeingModifiedCount;
    NSMutableArray * _items;
    NSRecursiveLock * _mutex;
    void * _reserved;
}

+ (id)avQueue;
+ (id)queueWithArray:(id)arg1 error:(id*)arg2;

- (long long)_instantiateItem;
- (bool)appendItem:(id)arg1 error:(id*)arg2;
- (bool)appendItemsFromArray:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)init;
- (id)initWithArray:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id*)arg1;
- (bool)insertItem:(id)arg1 afterItem:(id)arg2 error:(id*)arg3;
- (bool)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isBeingModified;
- (id)itemAfterItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (void)itemWasAdded:(id)arg1 atIndex:(long long)arg2;
- (void)itemWillBeRemoved:(id)arg1 atIndex:(long long)arg2;
- (void)removeAllItems;
- (bool)removeItem:(id)arg1;
- (bool)removeItemAtIndex:(unsigned long long)arg1;
- (void)removeItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
