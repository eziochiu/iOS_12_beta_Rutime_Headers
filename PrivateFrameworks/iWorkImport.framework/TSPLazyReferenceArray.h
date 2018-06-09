/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSPLazyReferenceArray : NSMutableArray {
    unsigned long long  _mutations;
    NSMutableArray * _references;
}

@property (nonatomic, readonly) NSArray *references;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addReference:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)referenceAtIndex:(unsigned long long)arg1;
- (id)references;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
