/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVSearchTemplateController : _TVBgImageLoadingViewController <IKAppKeyboardDelegate, TVAppTemplateImpressionable, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, _TVSearchTemplateViewDelegate> {
    UIImage * _backgroundImage;
    IKViewElement * _bannerElement;
    IKImageElement * _bgImageElement;
    IKViewElement * _collectionListElement;
    NSIndexPath * _focusedViewControllerIndexPath;
    IKImageElement * _heroImgElement;
    IKAppKeyboard * _ikKeyboard;
    double  _impressionThreshold;
    NSArray * _rowSpacingMetricsList;
    IKViewElement * _scopeElement;
    UIViewController * _scopeViewController;
    UISearchBar * _searchBar;
    IKTextFieldElement * _searchFieldElement;
    _TVSearchTemplateView * _searchTemplateView;
    IKViewElement * _suggestionsElement;
    UIViewController * _suggestionsViewController;
    UISystemInputViewController * _systemInputViewController;
    IKViewElement * _templateElement;
    NSArray * _viewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2;

- (void).cxx_destruct;
- (void)_adjustFrameForScopeView:(id)arg1 inCell:(id)arg2;
- (void)_adjustOriginForSuggestionsView:(id)arg1 inCell:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_adjustedCollectionMargins;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (bool)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_buildSpacingMetrics;
- (void)_cancelImpressionsUpdate;
- (struct TVRowMetrics { long long x1; double x2; struct { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; } x5; struct { double x_6_1_1; double x_6_1_2; } x6; })_collapsedRowMetricsForViewController:(id)arg1;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (bool)_disableAutomaticKeyboardUI;
- (void)_doneButtonPressed:(id)arg1;
- (bool)_enableAutomaticKeyboardPressDone;
- (void)_recordImpressionsForVisibleView;
- (long long)_sectionForViewControllerIndex:(long long)arg1;
- (void)_setFocusedIndexPath:(id)arg1;
- (bool)_shouldShowScope;
- (bool)_shouldShowSuggestions;
- (bool)_updateCollectionList;
- (void)_updateImpressions;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (void)_updateViewIgnoringSparseUpdates:(bool)arg1;
- (long long)_viewControllerIndexForSection:(long long)arg1;
- (id)_viewControllers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollToTop;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchTemplateView:(id)arg1 didOffsetOriginForCollectionView:(id)arg2;
- (id)searchTemplateView:(id)arg1 preferredFocusEnvironmentForKeyboard:(id)arg2;
- (void)siri_beginInteractiveTransition;
- (void)siri_endInteractiveTransition;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)tv_updateViewLayout;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
