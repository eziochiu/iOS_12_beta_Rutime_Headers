/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpCommentsInfoProvider : NSObject

+ (bool)_canHandleDisplayAsset:(id)arg1;
+ (unsigned long long)commentCountForDisplayAsset:(id)arg1;
+ (bool)hasUserLikedDisplayAsset:(id)arg1;
+ (unsigned long long)likeCountForDisplayAsset:(id)arg1;
+ (void)toggleLike:(bool)arg1 forDisplayAsset:(id)arg2;

@end
