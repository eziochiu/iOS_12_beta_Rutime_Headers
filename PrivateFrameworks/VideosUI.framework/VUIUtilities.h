/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIUtilities : NSObject

+ (id)VideosBundle;
+ (bool)contentSizeCategoryIsAccessibility:(id)arg1;
+ (id)createImageProxyForResourceObject:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)expirationStringWithDate:(id)arg1 displayWarningColor:(bool*)arg2 updateInterval:(long long*)arg3;
+ (struct CGSize { double x1; double x2; })imageSizeWithAspectRatio:(double)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isAXLargeEnabled:(id)arg1;
+ (bool)isAXSmallEnabled:(id)arg1;
+ (bool)isIpadLayout;
+ (unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+ (id)randomColor;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2;
+ (bool)shouldInvalidateLayoutWithPreviousTraitCollection:(id)arg1 newTraitCollection:(id)arg2;

@end
