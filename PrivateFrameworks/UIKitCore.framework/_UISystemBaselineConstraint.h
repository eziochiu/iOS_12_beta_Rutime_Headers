/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISystemBaselineConstraint : NSLayoutConstraint <NSCoding> {
    NSNumber * _spacingMultiplier;
}

@property (nonatomic, retain) NSNumber *spacingMultiplier;

+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSpacingMultiplier:(id)arg1;
- (id)spacingMultiplier;

@end
