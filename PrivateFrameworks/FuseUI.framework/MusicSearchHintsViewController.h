/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchHintsViewController : UITableViewController <MusicClientContextConsuming> {
    bool  _appendRadioTabParameter;
    NSString * _baseHintsURLString;
    MusicClientContext * _clientContext;
    SKUICompletionList * _completionList;
    <MusicSearchHintsViewControllerDelegate> * _delegate;
    SSVLoadURLOperation * _loadOperation;
    NSOperationQueue * _operationQueue;
    UISearchBar * _searchBar;
}

@property (nonatomic) bool appendRadioTabParameter;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicSearchHintsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (bool)appendRadioTabParameter;
- (id)clientContext;
- (id)delegate;
- (id)initWithStyle:(long long)arg1;
- (void)reloadData;
- (id)searchBar;
- (void)setAppendRadioTabParameter:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
