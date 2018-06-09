/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENGroupContext : NSObject {
    ENAccountIdentity * _accountIdentity;
    NSArray * _allMiddlewares;
    <ENGroupContextDataSource> * _dataSource;
    NSMutableArray * _middlewares;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) ENAccountIdentity *accountIdentity;
@property (nonatomic, readonly) NSArray *allMiddlewares;
@property (nonatomic, retain) <ENGroupContextDataSource> *dataSource;
@property (nonatomic, retain) NSMutableArray *middlewares;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_errorWithNotFoundItems:(id)arg1;
+ (id)_missingItemsInNotFoundError:(id)arg1 remainingErrors:(id*)arg2;

- (void).cxx_destruct;
- (void)_cacheGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)_didCacheGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)_didCreateGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)_didReceiveDecryptionFailureForGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)_didReceiveRegistrationIdentityUpdateWithCompletion:(id /* block */)arg1;
- (void)_didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)_dropLocalCache:(id /* block */)arg1;
- (void)_dropLocalCacheForGroupID:(id)arg1 compeltion:(id /* block */)arg2;
- (void)_fetchAllLocalKnownGroups:(id /* block */)arg1;
- (void)_fetchGroupWithGroupID:(id)arg1 skipCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)_groupFromPublicDataRepresentation:(id)arg1 completion:(id /* block */)arg2;
- (id)_middlwareConformingToProtocol:(id)arg1;
- (void)_noteDecryptionFailureForGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)_noteRegistrationIdentityUpdate;
- (void)_participantsForCypher:(id)arg1 completion:(id /* block */)arg2;
- (void)_publicDataRepresentationForGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)_qCacheGroup:(id)arg1 toMiddlewares:(id)arg2 completion:(id /* block */)arg3;
- (id)_qCacheMiddlewares;
- (id)_qCacheMiddlewaresContainedInCost:(long long)arg1;
- (void)_qDidCacheGroup:(id)arg1;
- (void)_qDidCreateGroup:(id)arg1;
- (void)_qDidReceiveDecryptionFailureForGroup:(id)arg1;
- (void)_qDidReceiveRegistrationIdentityUpdate;
- (void)_qDidUpdateGroup:(id)arg1 withGroup:(id)arg2;
- (void)_qFetchCachedGroupWithGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)_qFetchDataSourceGroupWithGroupID:(id)arg1 completion:(id /* block */)arg2;
- (id)_qObserverMiddlewares;
- (void)_qUpsertGroupWithParticipants:(id)arg1 previousGroup:(id)arg2 sharedApplicationData:(id)arg3 completion:(id /* block */)arg4;
- (void)_validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(id /* block */)arg3;
- (id)accountIdentity;
- (id)allMiddlewares;
- (void)appendMiddleware:(id)arg1;
- (void)cacheIncomingGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)createGroupWithParticipants:(id)arg1 sharedApplicationData:(id)arg2 completion:(id /* block */)arg3;
- (id)dataSource;
- (void)fetchGroupWithGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchLatestGroupWithStableID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAccountIdentity:(id)arg1 dataSource:(id)arg2 queue:(id)arg3;
- (id)middlewares;
- (id)queue;
- (void)removeMiddleware:(id)arg1;
- (void)setAccountIdentity:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setMiddlewares:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)updateGroup:(id)arg1 withParticipants:(id)arg2 sharedApplicationData:(id)arg3 completion:(id /* block */)arg4;

@end
