/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKLayoutUtilities : NSObject

+ (void)applyRowBoundedSizingToImageView:(id)arg1;
+ (double)deviceScaledRoundedValue:(double)arg1;
+ (struct CGSize { double x1; double x2; })idealImageSizeWithSize:(struct CGSize { double x1; double x2; })arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isWideScreen;
+ (struct CGSize { double x1; double x2; })maxThumbnailSize;
+ (void)requireIntrinsicSizeForView:(id)arg1;
+ (void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2;
+ (double)scaledValueForValue:(double)arg1 withFont:(id)arg2;
+ (void)setDynamicBaslineAlignmentsForLabel:(id)arg1 top:(double)arg2 bottom:(double)arg3;

@end
