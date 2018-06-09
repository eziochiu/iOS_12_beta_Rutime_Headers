/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkView : UIView <CAAnimationDelegate, LPTapToLoadViewDelegate, LPThemeClient, UIGestureRecognizerDelegate> {
    NSURL * _URL;
    bool  _allowsTapToLoad;
    LPAnimationMaskView * _animationMaskView;
    long long  _animationOrigin;
    UIView * _animationView;
    bool  _applyCornerRadius;
    UIColor * _backgroundColor;
    LPCaptionBarPresentationProperties * _captionBar;
    LPLinkViewComponents * _components;
    LPLinkViewComponents * _componentsForSizing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIView * _contentView;
    <LPLinkViewDelegate> * _delegate;
    bool  _disableAnimations;
    bool  _disableAutoPlay;
    bool  _disableHighlightGesture;
    bool  _disablePlayback;
    bool  _disablePlaybackControls;
    bool  _disableTapGesture;
    bool  _forceFlexibleWidth;
    bool  _hasEverBuilt;
    bool  _hasSetDisableHighlightGesture;
    bool  _hasValidPresentationProperties;
    NSMutableArray * _highlightGestureRecognizers;
    UIView * _highlightView;
    LPiTunesPlaybackInformation * _iTunesPlaybackInformation;
    LPImage * _image;
    bool  _isPreliminary;
    unsigned int  _loggingID;
    bool  _mayReceiveAdditionalMetadata;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    UIView * _mediaViewBackground;
    LPLinkMetadata * _metadata;
    double  _minimumHeight;
    bool  _needsRebuild;
    UIColor * _overrideBackgroundColor;
    LPMetadataProvider * _pendingMetadataProvider;
    NSString * _quotedText;
    bool  _shouldAnimateDuringNextBuild;
    long long  _style;
    NSMutableArray * _tapGestureRecognizers;
    LPTheme * _theme;
    bool  _usesComputedPresentationProperties;
    bool  _usesDeferredLayout;
    LPVideo * _video;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (setter=_setAllowsTapToLoad:, nonatomic) bool _allowsTapToLoad;
@property (setter=_setAnimationOrigin:, nonatomic) long long _animationOrigin;
@property (setter=_setApplyCornerRadius:, nonatomic) bool _applyCornerRadius;
@property (setter=_setDisableAnimations:, nonatomic) bool _disableAnimations;
@property (setter=_setDisableAutoPlay:, nonatomic) bool _disableAutoPlay;
@property (setter=_setDisableHighlightGesture:, nonatomic) bool _disableHighlightGesture;
@property (setter=_setDisablePlayback:, nonatomic) bool _disablePlayback;
@property (setter=_setDisablePlaybackControls:, nonatomic) bool _disablePlaybackControls;
@property (setter=_setDisableTapGesture:, nonatomic) bool _disableTapGesture;
@property (setter=_setForceFlexibleWidth:, nonatomic) bool _forceFlexibleWidth;
@property (nonatomic, readonly) long long _style;
@property (setter=_setUsesDeferredLayout:, nonatomic) bool _usesDeferredLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LPLinkViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (void)_addHighlightRecognizerToView:(id)arg1;
- (void)_addTapRecognizerToView:(id)arg1;
- (bool)_allowsTapToLoad;
- (long long)_animationOrigin;
- (bool)_applyCornerRadius;
- (void)_commonInitWithURL:(id)arg1;
- (void)_computePresentationPropertiesFromMetadataIfNeeded;
- (id)_createCaptionBar;
- (id)_createComponents;
- (id)_createMediaBottomCaptionBarView;
- (id)_createMediaTopCaptionBarView;
- (id)_createMediaView;
- (id)_createQuotedTextView;
- (id)_createTapToLoadView;
- (void)_didScroll;
- (bool)_disableAnimations;
- (bool)_disableAutoPlay;
- (bool)_disableHighlightGesture;
- (bool)_disablePlayback;
- (bool)_disablePlaybackControls;
- (bool)_disableTapGesture;
- (void)_fetchMetadata;
- (bool)_forceFlexibleWidth;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_installHighlightGestureRecognizers;
- (void)_installTapGestureRecognizers;
- (void)_invalidateLayout;
- (void)_invalidatePresentationProperties;
- (void)_layoutLinkView;
- (struct CGSize { double x1; double x2; })_layoutLinkViewForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (void)_performDeferredLayout;
- (void)_rebuildGestureRecognizersIfNeeded;
- (void)_rebuildSubviewsWithAnimation:(bool)arg1;
- (void)_setAllowsTapToLoad:(bool)arg1;
- (void)_setAnimationOrigin:(long long)arg1;
- (void)_setApplyCornerRadius:(bool)arg1;
- (void)_setDisableAnimations:(bool)arg1;
- (void)_setDisableAutoPlay:(bool)arg1;
- (void)_setDisableHighlightGesture:(bool)arg1;
- (void)_setDisablePlayback:(bool)arg1;
- (void)_setDisablePlaybackControls:(bool)arg1;
- (void)_setDisableTapGesture:(bool)arg1;
- (void)_setForceFlexibleWidth:(bool)arg1;
- (void)_setMaskImage:(id)arg1;
- (void)_setMetadata:(id)arg1 isFinal:(bool)arg2;
- (void)_setPresentationProperties:(id)arg1;
- (void)_setUsesDeferredLayout:(bool)arg1;
- (void)_setupInteraction;
- (void)_setupView;
- (long long)_style;
- (void)_tapRecognized:(id)arg1;
- (void)_uninstallHighlightGestureRecognizers;
- (void)_uninstallTapGestureRecognizers;
- (bool)_usesDeferredLayout;
- (id)_videoViewConfiguration;
- (void)animateBackgroundColor;
- (void)animateFromOldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldMediaBackgroundFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 oldCaptionBarView:(id)arg3;
- (void)animateInViews;
- (void)animateOutAndRemoveViews;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMetadataLoadedFromURL:(id)arg1;
- (id)initWithPresentationProperties:(id)arg1;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)metadata;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSuppressMask:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tapToLoadViewWasTapped:(id)arg1;
- (void)themeParametersDidChange;

@end
