/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDefaultAccessoryViewVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {
    bool  _shouldAnimateAccessory;
    bool  _shouldAnimateContent;
    bool  _shouldSlideAccessory;
    PUBrowsingViewModel * _viewModel;
}

@property (nonatomic) bool shouldAnimateAccessory;
@property (nonatomic) bool shouldAnimateContent;
@property (nonatomic) bool shouldSlideAccessory;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (void)setShouldAnimateAccessory:(bool)arg1;
- (void)setShouldAnimateContent:(bool)arg1;
- (void)setShouldSlideAccessory:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (bool)shouldAnimateAccessory;
- (bool)shouldAnimateContent;
- (bool)shouldSlideAccessory;
- (id)viewModel;

@end
