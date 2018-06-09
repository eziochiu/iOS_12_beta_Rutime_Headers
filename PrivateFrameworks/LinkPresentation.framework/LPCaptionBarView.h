/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate> {
    LPComponentView<LPTextStyleable> * _aboveTopCaptionView;
    LPComponentView<LPTextStyleable> * _belowBottomCaptionView;
    LPImageView * _belowLeftIconView;
    LPImageView * _belowRightIconView;
    LPComponentView<LPTextStyleable> * _bottomCaptionView;
    bool  _hasEverBuilt;
    LPiTunesPlaybackInformation * _iTunesPlaybackInformation;
    LPCaptionBarAccessoryView * _leftAccessoryView;
    UIView * _leftIconView;
    LPiTunesPlayButtonView * _playButton;
    LPCaptionBarPresentationProperties * _presentationProperties;
    LPCaptionBarAccessoryView * _rightAccessoryView;
    UIView * _rightIconView;
    LPCaptionBarStyle * _style;
    LPVerticalTextStackView * _textStackView;
    LPComponentView<LPTextStyleable> * _topCaptionView;
    bool  _useProgressSpinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useProgressSpinner;

- (void).cxx_destruct;
- (void)_buildViewsForCaptionBarIfNeeded;
- (id)_createIndeterminateProgressIndicator;
- (struct CGSize { double x1; double x2; })_layoutCaptionBarForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2;
- (void)animateOut;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)init;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2;
- (void)layoutComponentView;
- (void)setPlaybackInformation:(id)arg1;
- (void)setUseProgressSpinner:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)useProgressSpinner;

@end
