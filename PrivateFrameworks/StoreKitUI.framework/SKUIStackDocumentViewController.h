/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackDocumentViewController : SKUIViewController <SKUICollectionViewPullToRefreshDelegate, SKUIDocumentViewController, SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate, SKUIIndexBarEntryListControllerDelegate, SKUIModalSourceViewProvider, SKUIResourceLoaderDelegate, SKUIStorePageSectionsDelegate, SKUIViewControllerTesting> {
    IKAppDocument * _document;
    NSArray * _entryListControllers;
    bool  _hasResetState;
    SKUIIndexBarControlController * _indexBarControlController;
    long long  _lastNeedsMoreCount;
    long long  _layoutStyle;
    SKUIResourceLoader * _resourceLoader;
    SKUIStorePageSectionsViewController * _sectionsViewController;
    SKUIStackTemplateElement * _templateElement;
    NSMapTable * _viewElementToEntryListController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIStorePageSectionsViewController *sectionsViewController;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_colorScheme;
- (void)_configureIndexBarControl:(id)arg1;
- (long long)_globalIndexFromIndexPath:(id)arg1;
- (id)_indexBarControlController;
- (id)_indexBarViewElement;
- (id)_indexPathFromGlobalIndex:(long long)arg1;
- (long long)_maxGlobalIndex;
- (id)_pageComponentsWithViewElements:(id)arg1;
- (id)_pageSplitsDescription;
- (long long)_pinningTransitionStyle;
- (id)_pullToRefreshElement;
- (void)_resetState;
- (void)_resetStateForDocumentNotification:(id)arg1;
- (id)_resourceLoader;
- (bool)_shouldShowIndexBar;
- (bool)_tryToScrollToSectionAtIndexPath:(id)arg1;
- (void)_updateEntryListControllersWithReload:(bool)arg1;
- (void)_updateIndexBarVisibility;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1 withTemplate:(id)arg2;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)impressionableViewElements;
- (void)indexBarControlController:(id)arg1 didSelectEntryDescriptorAtIndexPath:(id)arg2;
- (id)indexBarControlController:(id)arg1 entryDescriptorAtIndexPath:(id)arg2;
- (long long)indexBarControlController:(id)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;
- (void)indexBarControlControllerDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControlControllerDidSelectBeyondTop:(id)arg1;
- (void)indexBarEntryListControllerDidInvalidate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 layoutStyle:(long long)arg2;
- (void)loadView;
- (long long)numberOfSectionsInIndexBarControlController:(id)arg1;
- (bool)performTestWithName:(id)arg1 options:(id)arg2;
- (void)refresh:(id)arg1 refreshControl:(id)arg2;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (id)sectionsViewController;
- (void)sectionsViewController:(id)arg1 willScrollToOffset:(struct CGPoint { double x1; double x2; })arg2 visibleRange:(struct SKUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg3;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)skui_viewWillAppear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
