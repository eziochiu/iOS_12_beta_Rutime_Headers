/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAITOrientedBounds : NSObject

+ (id)absoluteOrientedBoundsOfDrawable:(id)arg1;
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 logicalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axisParallelBoundsOfOrientedBounds:(id)arg1;
+ (id)relativeOrientedBoundsOfDrawable:(id)arg1;
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toOrientedBounds:(id)arg2;

@end
