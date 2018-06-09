/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetCollageView : UIView {
    bool  _allowAnimatedImagePlayback;
    bool  _allowLoopPlayback;
    bool  _allowVideoPlayback;
    NSMutableDictionary * _assets;
    UIColor * _cornerBackgroundColor;
    double  _cornerRadius;
    PXUIMediaProvider * _mediaProvider;
    PXRoundedCornerOverlayView * _roundedCornerOverlayView;
    double  _spacing;
}

@property (nonatomic) bool allowAnimatedImagePlayback;
@property (nonatomic) bool allowLoopPlayback;
@property (nonatomic) bool allowVideoPlayback;
@property (nonatomic, readonly) NSMutableDictionary *assets;
@property (nonatomic, retain) UIColor *cornerBackgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (nonatomic) double spacing;

+ (long long)maximumNumberOfItems;

- (void).cxx_destruct;
- (id)_checkoutAndConfigureAssetViewForAsset:(id)arg1 withIndex:(long long)arg2;
- (id)_displayAssetViewWithIndex:(long long)arg1;
- (id)_displayAssetViews;
- (double)_firstAssetAspectRatio;
- (void)_removeAllAssetViews;
- (void)_removeAssetView:(id)arg1;
- (void)_updateRoundedCornerOverlayView;
- (bool)allowAnimatedImagePlayback;
- (bool)allowLoopPlayback;
- (bool)allowVideoPlayback;
- (id)assets;
- (id)cornerBackgroundColor;
- (double)cornerRadius;
- (id)displayAssetViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)displayAssetViewWithAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mediaProvider:(id)arg2;
- (void)layoutSubviews;
- (id)mediaProvider;
- (long long)numberOfItems;
- (void)resetViewState;
- (id)roundedCornerOverlayView;
- (void)setAllowAnimatedImagePlayback:(bool)arg1;
- (void)setAllowLoopPlayback:(bool)arg1;
- (void)setAllowVideoPlayback:(bool)arg1;
- (void)setAsset:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setCornerBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setSpacing:(double)arg1;
- (double)spacing;

@end
