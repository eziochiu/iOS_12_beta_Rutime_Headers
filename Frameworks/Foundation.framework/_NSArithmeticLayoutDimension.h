/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSArithmeticLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {
    double  _constant;
    double  _multiplier;
    NSLayoutDimension * _rootLayoutDimension;
}

@property (readonly) NSArray *_childAnchors;

- (id)_childAnchors;
- (id)_expressionInContext:(struct { long long x1; id x2; })arg1;
- (id)_nearestAncestorLayoutItem;
- (double)_valueInEngine:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiplier:(double)arg1 dimension:(id)arg2 constant:(double)arg3;

@end
