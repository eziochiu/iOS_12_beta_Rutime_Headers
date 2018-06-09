/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSArrayChanges : NSMutableArray <NSCopying>

@property (readonly) unsigned long long changeCount;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (bool)_isToManyChangeInformation;
- (long long)_toManyPropertyType;
- (void)addChange:(id)arg1;
- (void)addChanges:(id)arg1;
- (void)addObject:(id)arg1;
- (void)applyChangesToArray:(id)arg1;
- (unsigned long long)changeCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateChangesUsingBlock:(id /* block */)arg1;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)sortUsingFunction:(int (*)arg1 context:(void*)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (void)updateObject:(id)arg1 atIndex:(unsigned long long)arg2;

@end
