/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicDownloadProgressButton : UIControl {
    UIImageView * _addToLibraryOrDownloadImageView;
    double  _currentAnimatedProgress;
    CADisplayLink * _displayLink;
    UIImageView * _finishedImageView;
    double  _initialAnimatedProgress;
    bool  _isAnimatingProgress;
    SKUIItemOfferButton * _itemOfferButton;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLayoutSize;
    double  _progress;
    double  _progressAnimationEndTime;
    double  _progressAnimationStartTime;
    CAMediaTimingFunction * _progressAnimationTimingFunction;
    long long  _progressType;
    long long  _style;
}

@property (nonatomic) double progress;
@property (nonatomic) long long progressType;
@property (nonatomic, readonly) long long style;

+ (id)_finishedImageForLayoutSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_addToLibraryOrDownloadImage;
- (void)_handleDisplayLinkDidFire:(id)arg1;
- (bool)_needsAddToLibraryOrDownloadImageViewForProgressType:(long long)arg1;
- (bool)_needsFinishedImageViewForProgressType:(long long)arg1;
- (void)_reloadForCurrentStateForInitialSetup:(bool)arg1 previousProgressType:(long long)arg2;
- (void)_stopProgressAnimation;
- (bool)_usesDrawingForProgressType:(long long)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)progress;
- (long long)progressType;
- (void)setHighlighted:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)setProgressType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
