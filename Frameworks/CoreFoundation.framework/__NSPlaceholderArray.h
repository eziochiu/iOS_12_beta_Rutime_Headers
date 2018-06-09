/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSPlaceholderArray : NSMutableArray

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)immutablePlaceholder;
+ (void)initialize;
+ (id)mutablePlaceholder;

- (id)_initByAdoptingBuffer:(id*)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)initWithArray:(id)arg1 copyItems:(bool)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (oneway void)release;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;

@end
