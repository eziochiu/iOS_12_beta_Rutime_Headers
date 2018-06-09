/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver> {
    struct CGSize { 
        double width; 
        double height; 
    }  __expandedSize;
    bool  __isExpanded;
    PUFilmstripWrapperView * __wrapperView;
}

@property (setter=_setExpandedSize:, nonatomic) struct CGSize { double x1; double x2; } _expandedSize;
@property (setter=_setExpanded:, nonatomic) bool _isExpanded;
@property (nonatomic, readonly) PUFilmstripWrapperView *_wrapperView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentIndicatorInfos;
- (struct CGSize { double x1; double x2; })_expandedSize;
- (bool)_isExpanded;
- (void)_setExpanded:(bool)arg1;
- (void)_setExpandedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateFilmstripView;
- (id)_wrapperView;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)didChangeAnimating;
- (void)didChangeVisibleRect;
- (id)loadView;
- (void)setAssetViewModel:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (bool)wantsVisibleRectChanges;

@end
