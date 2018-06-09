/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNXPCDataMapper : NSObject <CNDataMapper> {
    NSXPCConnection * _connection;
    <CNContactsLogger> * _logger;
    <CNXPCDataMapperService> * _serviceProxy;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNContactsLogger> *logger;
@property (nonatomic, retain) <CNXPCDataMapperService> *serviceProxy;
@property (readonly) Class superclass;

+ (id)contactBuffersDecoderForFetchRequest:(id)arg1;
+ (id)cursorProtocolInterface;
+ (id)serviceProtocolInterface;

- (void).cxx_destruct;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3;
- (id)connection;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)defaultContainerIdentifier;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3;
- (bool)fetchAndDecodeEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(id /* block */)arg4;
- (bool)fetchContactsForFetchRequest:(id)arg1 error:(id*)arg2 batchHandler:(id /* block */)arg3;
- (bool)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(id /* block */)arg4;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)identifierWithError:(id*)arg1;
- (id)init;
- (id)initWithContactsEnvironment:(id)arg1 connection:(id)arg2;
- (id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2;
- (id)logger;
- (id)meContactIdentifiers:(id*)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (bool)reindexSearchableItemsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)remoteResultForSelector:(SEL)arg1 error:(id*)arg2;
- (id)remoteResultForSelector:(SEL)arg1 parameters:(id)arg2 error:(id*)arg3;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 error:(id*)arg3;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 queryParameter:(id)arg3 error:(id*)arg4;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)serviceProxy;
- (bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (void)setConnection:(id)arg1;
- (void)setLogger:(id)arg1;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (void)setServiceProxy:(id)arg1;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)unifiedContactCountWithError:(id*)arg1;
- (bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)verifyIndexWithError:(id*)arg1;

@end
