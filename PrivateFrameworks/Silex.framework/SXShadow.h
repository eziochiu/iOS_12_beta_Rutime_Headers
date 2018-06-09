/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXShadow : SXJSONObject

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) double radius;

- (id)TSDShadow;

@end
