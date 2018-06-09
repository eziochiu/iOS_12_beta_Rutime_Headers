/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIAssetBadgeView : UIView <PXUIExtensionBadgeViewDelegate> {
    PXUIExtensionBadgeView * __topLeftExtensionBadgeView;
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
    }  _badgeInfo;
    UILabel * _bottomLabel;
    _PXUIAssetBadgeImageView * _bottomLeadingImageView;
    _PXUIAssetBadgeImageView * _bottomTrailingImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <PXUIAssetBadgeViewDelegate> * _delegate;
    struct { 
        bool userDidSelectBadges; 
    }  _delegateRespondsTo;
    bool  _isPerformingUpdate;
    struct { 
        bool topLeftElements; 
        bool bottomLeadingImage; 
        bool bottomTrailingImage; 
        bool bottomLabel; 
        bool background; 
        bool contentSize; 
    }  _needsUpdateFlags;
    bool  _overContent;
    long long  _style;
    _PXUIAssetBadgeTopLeftGroup * _topLeftPrimaryGroup;
    _PXUIAssetBadgeTopLeftGroup * _topLeftSecondaryGroup;
}

@property (setter=_setTopLeftExtensionBadgeView:, nonatomic, retain) PXUIExtensionBadgeView *_topLeftExtensionBadgeView;
@property (nonatomic) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; } badgeInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXUIAssetBadgeViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOverContent, nonatomic) bool overContent;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

+ (double)preferredHeightForStyle:(long long)arg1;
+ (void)preloadResourcesForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_handleButton:(id)arg1;
- (void)_installBadgeViewForType:(long long)arg1;
- (void)_invalidate;
- (void)_invalidateBackground;
- (void)_invalidateBottomLabel;
- (void)_invalidateBottomLeadingImage;
- (void)_invalidateBottomTrailingImage;
- (void)_invalidateContentSize;
- (void)_invalidateTopLeftElements;
- (void)_layoutBottomCornersImages;
- (void)_layoutBottomLabel;
- (void)_layoutTopLeftGroup:(id)arg1;
- (bool)_needsUpdate;
- (void)_removeViewsFromGroup:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setTopLeftExtensionBadgeView:(id)arg1;
- (id)_topLeftExtensionBadgeView;
- (void)_updateBackgroundIfNeeded;
- (void)_updateBottomLabelIfNeeded;
- (void)_updateBottomLeadingImageIfNeeded;
- (void)_updateBottomTrailingImageIfNeeded;
- (void)_updateContentSizeIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateTopLeftElementsIfNeeded;
- (id)_updateTopLeftGroup:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg2 origin:(struct CGPoint { double x1; double x2; })arg3;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })badgeInfo;
- (id)delegate;
- (void)extensionBadgeView:(id)arg1 userDidSelectBadge:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOverContent;
- (void)layoutSubviews;
- (void)performChanges:(id /* block */)arg1 animated:(bool)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverContent:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;

@end
