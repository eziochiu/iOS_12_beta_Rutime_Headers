/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityAbstractLockupView : UIView <MPUTextDrawingCacheInvalidationObserver, MusicArtworkViewDelegate> {
    bool  _artworkConfigurationBlockEnabled;
    UIImage * _artworkOverrideImage;
    MusicArtworkView * _artworkView;
    UITraitCollection * _cachedTraitCollection;
    MusicEntityViewContentDescriptor * _contentDescriptor;
    bool  _entityDisabled;
    <MusicEntityValueProviding> * _entityValueProvider;
    bool  _hasDirtyPlaybackStatusUpdate;
    bool  _highlighted;
    double  _lastUsedArtworkViewAspectRatio;
    double  _playbackCurrentTimeOriginatingTime;
    NSMutableArray * _recycledTextButtons;
    NSMutableArray * _recycledTextDrawingViews;
    NSMapTable * _textDescriptorsToRecycledTextButtons;
    NSMapTable * _textDescriptorsToTextDrawingViews;
    bool  _usingPlaceholderArt;
    bool  _wasUpdatedForAsynchronousPropertyLoadCompleted;
}

@property (getter=_currentTextLabelAlpha, nonatomic, readonly) double _currentTextLabelAlpha;
@property (getter=_addButton, nonatomic, readonly) UIControl *addButton;
@property (nonatomic, retain) UIImage *artworkOverrideImage;
@property (getter=_artworkView, nonatomic, readonly) UIImageView *artworkView;
@property (getter=_contentDescriptor, setter=_setContentDescriptor:, nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEntityDisabled, nonatomic) bool entityDisabled;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (readonly) Class superclass;
@property (getter=isUsingPlaceholderArt, nonatomic, readonly) bool usingPlaceholderArt;

+ (double)_maximumTextHeightForTextDescriptors:(id)arg1 traitCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_addButton;
- (id)_artworkView;
- (void)_artworkViewImageDidChange;
- (void)_configureArtworkCatalog:(id)arg1;
- (void)_configureArtworkView:(id)arg1 forContentArtworkDescriptor:(id)arg2 entityValueProvider:(id)arg3;
- (id)_contentDescriptor;
- (void)_contentDescriptorDidChange:(id)arg1;
- (double)_currentTextLabelAlpha;
- (id)_effectiveArtworkBackgroundColor;
- (void)_entityDisabledDidChange;
- (void)_getViewToProposedFrameMap:(id*)arg1 withTextDescriptors:(id)arg2 availableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 exclusionRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 totalTextHeight:(double*)arg5;
- (void)_handleArtworkImageUpdate:(id)arg1 idealArtworkSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_handleArtworkViewTapped;
- (void)_handleContentDescriptorDidInvalidate:(id)arg1;
- (void)_layoutArtworkViewWithAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutDirection:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)_newArtworkView;
- (void)_recycleTextViewsForTextDescriptors:(id)arg1;
- (void)_setContentDescriptor:(id)arg1;
- (bool)_shouldArtworkViewRespectHighlightProperty;
- (bool)_shouldEnableArtworkViewUserInteraction;
- (bool)_shouldShowPlayButton;
- (id)_viewForTextDescriptor:(id)arg1;
- (id)artworkOverrideImage;
- (void)dealloc;
- (id)entityValueProvider;
- (bool)isEntityDisabled;
- (bool)isHighlighted;
- (bool)isUsingPlaceholderArt;
- (void)musicArtworkViewDidTouchUpInside:(id)arg1;
- (void)setArtworkOverrideImage:(id)arg1;
- (void)setEntityDisabled:(bool)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForAsynchronousPropertyLoadCompleted;

@end
