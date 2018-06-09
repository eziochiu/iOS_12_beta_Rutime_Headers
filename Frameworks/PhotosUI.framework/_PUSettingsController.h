/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PUSettingsController : PTUISettingsController {
    id /* block */  _dismissButtonFactory;
    id /* block */  _onViewDidDisappearBlock;
    _UISettings * _rootSettings;
    id /* block */  _searchBarButtonItemFactory;
    UINavigationController * _searchNavigationController;
}

@property (nonatomic, copy) id /* block */ dismissButtonFactory;
@property (nonatomic, copy) id /* block */ onViewDidDisappearBlock;
@property (nonatomic, readonly) _UISettings *rootSettings;
@property (nonatomic, copy) id /* block */ searchBarButtonItemFactory;
@property (nonatomic, readonly) UINavigationController *searchNavigationController;

- (void).cxx_destruct;
- (void)_invalidateNavigationItems;
- (void)_updateNavigationItemOfViewController:(id)arg1;
- (void)callOnViewDidDisappearBlock;
- (id /* block */)dismissButtonFactory;
- (void)handleSearchBarButtonItem:(id)arg1;
- (id)initWithRootSettings:(id)arg1;
- (id /* block */)onViewDidDisappearBlock;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)rootSettings;
- (id /* block */)searchBarButtonItemFactory;
- (id)searchNavigationController;
- (void)setDismissButtonFactory:(id /* block */)arg1;
- (void)setOnViewDidDisappearBlock:(id /* block */)arg1;
- (void)setSearchBarButtonItemFactory:(id /* block */)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
