/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface RangeObject : NSObject {
    struct { 
        long long _start; 
        long long _duration; 
    }  _range;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } range;

+ (id)rangeObjectWithRange:(struct { long long x1; long long x2; })arg1;
+ (id)rangesFromIndexSet:(id)arg1;

- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct { long long x1; long long x2; })arg1;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; long long x2; })range;
- (void)setRange:(struct { long long x1; long long x2; })arg1;

@end
