/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIGalleryDataSource : NSObject <UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDataSource> {
    NSArray * _appSuggestionsSections;
    <VCUIGalleryDataSourceDelegate> * _delegate;
    bool  _loadedOnce;
    NSString * _query;
}

@property (nonatomic, retain) NSArray *appSuggestionsSections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUIGalleryDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loadedOnce;
@property (nonatomic, copy) NSString *query;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionDonationAtIndexPath:(id)arg1;
- (id)appSuggestionsSections;
- (id)applicationBundleIdentifierForSection:(long long)arg1;
- (id)delegate;
- (void)didDismissSearchController:(id)arg1;
- (id)gallerySectionForSection:(unsigned long long)arg1;
- (id)init;
- (bool)loadedOnce;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)query;
- (void)setAppSuggestionsSections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadedOnce:(bool)arg1;
- (void)setQuery:(id)arg1;
- (bool)shouldShowSeeAllButtonInSection:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleForSection:(long long)arg1;
- (void)updateRecommendedShortcuts;
- (void)updateSearchResultsForSearchController:(id)arg1;

@end
