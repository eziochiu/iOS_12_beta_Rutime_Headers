/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSStorage : NSObject {
    long long  _hintCapacity;
    unsigned long long  _reserved;
    id  _storage;
}

+ (void)initialize;

- (void)addElement:(void*)arg1;
- (unsigned long long)capacity;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void*)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementSize;
- (void)enumerateElementsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hintCapacity;
- (id)init;
- (id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void)insertElement:(void*)arg1 atIndex:(unsigned long long)arg2;
- (void)insertElements:(void*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void*)pointerToElement:(unsigned long long)arg1 directlyAccessibleElements:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)removeElementAtIndex:(unsigned long long)arg1;
- (void)removeElementsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceElementAtIndex:(unsigned long long)arg1 withElement:(void*)arg2;
- (void)setHintCapacity:(unsigned long long)arg1;

@end
