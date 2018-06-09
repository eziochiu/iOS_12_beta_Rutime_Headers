/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver> {
    _UIContentUnavailableView * __emptyPlaceholderView;
    bool  __needsUpdateColor;
    id /* block */  __nextColorUpdateAnimatorBlock;
    UIColor * _backgroundColorOverride;
    bool  _shouldDisplayEmptyPlaceholder;
    PUBrowsingViewModel * _viewModel;
}

@property (setter=_setEmptyPlaceholderView:, nonatomic, retain) _UIContentUnavailableView *_emptyPlaceholderView;
@property (setter=_setNeedsUpdateColor:, nonatomic) bool _needsUpdateColor;
@property (setter=_setNextColorUpdateAnimatorBlock:, nonatomic, copy) id /* block */ _nextColorUpdateAnimatorBlock;
@property (nonatomic, retain) UIColor *backgroundColorOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldDisplayEmptyPlaceholder;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (id)_emptyPlaceholderView;
- (void)_invalidateColor;
- (void)_invalidateColorWithAnimatorBlock:(id /* block */)arg1;
- (bool)_needsUpdateColor;
- (id /* block */)_nextColorUpdateAnimatorBlock;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setNeedsUpdateColor:(bool)arg1;
- (void)_setNextColorUpdateAnimatorBlock:(id /* block */)arg1;
- (void)_updateColorIfNeeded;
- (void)_updateEmptyPlaceholderAnimated:(bool)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (id)backgroundColorOverride;
- (void)setBackgroundColorOverride:(id)arg1;
- (void)setShouldDisplayEmptyPlaceholder:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (bool)shouldDisplayEmptyPlaceholder;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
