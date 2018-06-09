/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchHomeViewController : PXGadgetViewController <PXNavigationRoot> {
    UIBarButtonItem * _navigationDisplayModeButtonItem;
    PUSearchHomeGadgetDataSourceManager * _searchHomeDataSourceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, retain) UIBarButtonItem *navigationDisplayModeButtonItem;
@property (nonatomic, readonly) NSString *navigationIdentifier;
@property (nonatomic, readonly) PXNavigationListDataSourceManager *navigationListDataSourceManager;
@property (nonatomic, readonly) NSString *navigationTitle;
@property (nonatomic, retain) PUSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager;
@property (readonly) Class superclass;

+ (Class)gadgetSpecClass;

- (void).cxx_destruct;
- (void)_clearSearchField;
- (void)_configureSearchNavigationBar;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (id)init;
- (id)navigationDisplayModeButtonItem;
- (id)navigationIdentifier;
- (id)navigationTitle;
- (void)performRecentSearch:(id)arg1;
- (void)ppt_dismissKeyboard;
- (void)ppt_prepareForSearchScrollingTestWithSearchText:(id)arg1 completion:(id /* block */)arg2;
- (void)ppt_prepareForSearchTest:(id /* block */)arg1;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)arg1;
- (void)presentOneYearAgo;
- (void)presentSiriSearchRequest:(id)arg1 resultCount:(unsigned long long)arg2;
- (bool)pu_handleSecondTabTap;
- (id)px_gridPresentation;
- (void)scrollViewDidScroll:(id)arg1;
- (id)searchHomeDataSourceManager;
- (void)selectZeroKeyword:(id)arg1 fromSectionWithType:(long long)arg2;
- (void)setNavigationDisplayModeButtonItem:(id)arg1;
- (void)setSearchHomeDataSourceManager:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
