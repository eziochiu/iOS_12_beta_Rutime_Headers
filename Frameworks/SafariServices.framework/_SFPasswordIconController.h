/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPasswordIconController : NSObject {
    NSMutableArray * _blocksAwaitingHistoryItems;
    NSMutableArray * _blocksAwaitingSharedWebCredentialsInformation;
    <_SFPasswordIconControllerDelegate> * _delegate;
    NSMutableDictionary * _domainToAppID;
    NSMutableDictionary * _domainToItems;
    NSMutableSet * _domainsThatHaveRequestedIcon;
    NSMutableDictionary * _domainsToExtractedBackgroundColors;
    WBSCache * _iconCache;
    bool  _initializedHistory;
    _SFSiteMetadataManager * _metadataManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _touchIconRequests;
}

@property (nonatomic) <_SFPasswordIconControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_checkForLocalVisitToDomain:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_fetchAppIconForDomain:(id)arg1;
- (void)_fetchTouchIconForDomain:(id)arg1;
- (void)_iconDidUpdateForDomain:(id)arg1;
- (void)_populateDomainToAppIDWithCompletion:(id /* block */)arg1;
- (void)_populateDomainToItemsWithCompletion:(id /* block */)arg1;
- (void)_requestTouchIconForDomain:(id)arg1 iconDownloadingEnabled:(bool)arg2;
- (id)backgroundColorForDomain:(id)arg1;
- (void)clearIconFetchingState;
- (id)delegate;
- (id)iconForDomain:(id)arg1;
- (id)initWithMetadataManager:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
