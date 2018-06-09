/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsetAdditions;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _scrollIndicatorInsetsAdditions;
    NSMutableDictionary * _sizeClassToClassMap;
}

@property (nonatomic, retain) NSMutableDictionary *sizeClassToClassMap;

- (void).cxx_destruct;
- (void)_applyNewContentInsetAdditions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 withExistingContentInsetAdditions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 toScrollView:(id)arg3;
- (void)_applyNewScrollIndicatorInsetsAdditions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 withExistingScrollIndicatorInsetsAdditions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 toScrollView:(id)arg3;
- (id)_childDataSourceViewController;
- (id)_indexPathOfTopVisibleItem;
- (void)_restoreTopVisibleIndexPath:(id)arg1;
- (void)_updateViewControllerIfNecessary;
- (id)contentScrollView;
- (void)dataSourceDidInvalidate;
- (void)reloadData;
- (void)setSizeClassToClassMap:(id)arg1;
- (void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(long long)arg2;
- (id)sizeClassToClassMap;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
