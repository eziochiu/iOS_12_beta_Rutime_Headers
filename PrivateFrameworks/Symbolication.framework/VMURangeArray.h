/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMURangeArray : NSObject <NSCopying> {
    unsigned int  _count;
    unsigned int  _max;
    struct _VMURange { unsigned long long x1; unsigned long long x2; } * _ranges;
    bool  _sorted;
}

- (void)addRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addRanges:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (unsigned long long)indexForLocation:(unsigned long long)arg1;
- (id)init;
- (id)initWithRanges:(const struct _VMURange { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned int)arg2;
- (void)insertRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 atIndex:(unsigned int)arg2;
- (bool)intersectsLocation:(unsigned long long)arg1;
- (bool)intersectsRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })largestRange;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })range;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned int)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeForLocation:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; }*)ranges;
- (void)removeAllRanges;
- (void)removeRangeAtIndex:(unsigned int)arg1;
- (void)setCapacity:(unsigned int)arg1;
- (void)sort;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })subrangeNotExcludedBySelfForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)sumLengths;

@end
