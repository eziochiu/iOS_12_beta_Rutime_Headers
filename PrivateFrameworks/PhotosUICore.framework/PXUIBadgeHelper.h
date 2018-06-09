/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIBadgeHelper : NSObject

+ (id)_flyingBadgeForBadges:(unsigned long long)arg1;
+ (id)_flyingBadgesForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
+ (long long)badgeTypeForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1 style:(long long)arg2;
+ (id)badgeViewForType:(long long)arg1 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg2;
+ (id)burstBadgeImage;
+ (id)cloudBadgeImage;
+ (id)debugBackgroundImageWithBadges:(unsigned long long)arg1;
+ (id)depthEffectBadgeImage;
+ (id)favoriteBadgeImage;
+ (id)favoritesCollectionBadgeImage;
+ (void)getAnimationImages:(id*)arg1 animationDuration:(double*)arg2 forBadge:(unsigned long long)arg3;
+ (void)getImage:(id*)arg1 imageOffset:(struct CGPoint { double x1; double x2; }*)arg2 forBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg3 style:(long long)arg4;
+ (void)getText:(id*)arg1 textOffset:(struct CGPoint { double x1; double x2; }*)arg2 forBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg3 style:(long long)arg4;
+ (id)gradientImage;
+ (id)livePhotoBadgeShadowedImage;
+ (id)livePhotoBadgeTemplateImage;
+ (id)livePhotoOffBadgeTemplateImage;
+ (id)loopingBadgeImage;
+ (id)loopingBadgeTemplateImage;
+ (id)panoramaBadgeImage;
+ (id)stackBadgeImage;
+ (id)suggestionFacesImage;
+ (id)suggestionGreatPhotoImage;
+ (id)suggestionOnThisDayImage;
+ (id)suggestionRecentFavoriteImage;
+ (id)suggestionRecentlyEditedImage;
+ (id)themeForType:(long long)arg1;

@end
