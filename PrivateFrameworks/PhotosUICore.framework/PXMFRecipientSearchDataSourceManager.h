/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMFRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <MFContactsSearchConsumer> {
    NSArray * __searchResults;
    PXIDSAddressQueryController * _addressQueryController;
    NSMutableArray * _autocompleteSearchResults;
    NSNumber * _currentSearchTaskID;
    MFContactsSearchManager * _searchManager;
    NSDictionary * _searchResultsByDestination;
}

@property (setter=_setSearchResults:, nonatomic, retain) NSArray *_searchResults;
@property (nonatomic, readonly) PXMFRecipientSearchDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createDataSource;
- (void)_handleAddressQueryResults:(id)arg1 error:(id)arg2;
- (id)_searchResults;
- (void)_setSearchResults:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (id)init;
- (void)queryStringDidChange;

@end
