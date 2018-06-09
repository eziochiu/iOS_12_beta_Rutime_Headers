/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDisplayAssetImageUIView : PXDisplayAssetUIView <PXChangeObserver> {
    UIImageView * _imageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateImageViewFilters;
- (id)contentView;
- (void)contentsRectDidChange;
- (void)imageDidChange;
- (bool)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)placeholderImageFiltersDidChange;
- (long long)playbackStyle;

@end
