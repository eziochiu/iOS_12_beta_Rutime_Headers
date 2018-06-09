/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPointerFunctions : NSObject <NSCopying>

@property int (*acquireFunction;
@property int (*descriptionFunction;
@property int (*hashFunction;
@property int (*isEqualFunction;
@property int (*relinquishFunction;
@property int (*sizeFunction;
@property bool usesStrongWriteBarrier;
@property bool usesWeakReadAndWriteBarriers;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pointerFunctionsWithOptions:(unsigned long long)arg1;

- (int (*)acquireFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int (*)descriptionFunction;
- (int (*)hashFunction;
- (id)initWithOptions:(unsigned long long)arg1;
- (int (*)isEqualFunction;
- (int (*)relinquishFunction;
- (void)setAcquireFunction:(int (*)arg1;
- (void)setDescriptionFunction:(int (*)arg1;
- (void)setHashFunction:(int (*)arg1;
- (void)setIsEqualFunction:(int (*)arg1;
- (void)setRelinquishFunction:(int (*)arg1;
- (void)setSizeFunction:(int (*)arg1;
- (void)setUsesStrongWriteBarrier:(bool)arg1;
- (void)setUsesWeakReadAndWriteBarriers:(bool)arg1;
- (int (*)sizeFunction;
- (bool)usesStrongWriteBarrier;
- (bool)usesWeakReadAndWriteBarriers;

@end
