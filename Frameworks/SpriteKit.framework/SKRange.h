/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRange : NSObject <NSCopying, NSSecureCoding> {
    double  _lowerLimit;
    double  _upperLimit;
}

@property double lowerLimit;
@property double upperLimit;

+ (id)rangeWithConstantValue:(double)arg1;
+ (id)rangeWithLowerLimit:(double)arg1;
+ (id)rangeWithLowerLimit:(double)arg1 upperLimit:(double)arg2;
+ (id)rangeWithNoLimits;
+ (id)rangeWithUpperLimit:(double)arg1;
+ (id)rangeWithValue:(double)arg1 variance:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowerLimit:(double)arg1 upperLimit:(double)arg2;
- (bool)isEqualToRange:(id)arg1;
- (double)lowerLimit;
- (void)setLowerLimit:(double)arg1;
- (void)setUpperLimit:(double)arg1;
- (double)upperLimit;

@end
