/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSearchRecipientController : NSObject <PXSectionedDataSourceManagerObserver, UITableViewDataSource, UITableViewDelegate> {
    PXRecipientSearchDataSource * __searchDataSource;
    UITableView * __searchResultsTableView;
    <PXSearchRecipientControllerDelegate> * _delegate;
    struct { 
        bool didSelectRecipient; 
    }  _delegateRespondsTo;
    PXRecipientSearchDataSourceManager * _searchDataSourceManager;
}

@property (setter=_setSearchDataSource:, nonatomic, retain) PXRecipientSearchDataSource *_searchDataSource;
@property (nonatomic, readonly) bool _searchHasNoResultsFound;
@property (nonatomic, readonly) UITableView *_searchResultsTableView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSearchRecipientControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXRecipientSearchDataSourceManager *searchDataSourceManager;
@property (nonatomic, readonly) UIView *searchResultsView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_searchDataSource;
- (bool)_searchHasNoResultsFound;
- (id)_searchResultsTableView;
- (void)_setSearchDataSource:(id)arg1;
- (id)_validationTextColorForSearchResult:(id)arg1;
- (id)delegate;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)searchDataSourceManager;
- (id)searchResultsView;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

@end
