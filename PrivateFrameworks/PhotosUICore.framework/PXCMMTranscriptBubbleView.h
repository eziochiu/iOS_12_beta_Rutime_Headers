/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMTranscriptBubbleView : UIView {
    <PXDisplayAsset> * _asset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bubbleSafeAreaInsets;
    PXCMMTranscriptBubbleFooterView * _footerView;
    PXCMMPosterHeaderView * _headerView;
    UIView * _highlightView;
    bool  _highlighted;
    NSString * _imageSubtitleText;
    NSString * _imageTitleText;
    <PXUIImageProvider> * _mediaProvider;
    NSString * _primaryText;
    NSString * _secondaryText;
    PXCMMSpec * _spec;
    PXUpdater * _updater;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bubbleSafeAreaInsets;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) NSString *imageSubtitleText;
@property (nonatomic, copy) NSString *imageTitleText;
@property (nonatomic, readonly) <PXUIImageProvider> *mediaProvider;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, retain) PXCMMSpec *spec;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInSize:(struct CGSize { double x1; double x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateFooterView;
- (void)_updateHighlightView;
- (void)_updatePosterView;
- (bool)_wantsHighlightView;
- (id)asset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bubbleSafeAreaInsets;
- (id)imageSubtitleText;
- (id)imageTitleText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (id)mediaProvider;
- (id)primaryText;
- (id)secondaryText;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)setBubbleSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageSubtitleText:(id)arg1;
- (void)setImageTitleText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spec;

@end
