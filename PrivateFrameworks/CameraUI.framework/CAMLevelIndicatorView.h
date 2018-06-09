/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMLevelIndicatorView : UIView <CAMLevelViewModelChangeObserver> {
    CAMLevelCrosshair * __goalCrosshair;
    CAMLevelCrosshair * __userCrosshair;
    CAMLevelViewModel * _viewModel;
}

@property (nonatomic, readonly) CAMLevelCrosshair *_goalCrosshair;
@property (nonatomic, readonly) CAMLevelCrosshair *_userCrosshair;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMLevelViewModel *viewModel;

- (void).cxx_destruct;
- (void)_commonCAMLevelIndicatorViewInitializationWithViewModel:(id)arg1;
- (id)_goalCrosshair;
- (void)_updateCrosshairAlphasWithAlpha:(double)arg1 indicatorMode:(long long)arg2;
- (void)_updateCrosshairHighlightWithOffset:(struct UIOffset { double x1; double x2; })arg1;
- (id)_userCrosshair;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3;
- (id)viewModel;

@end
