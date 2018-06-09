/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation {
    id /* block */  _discoverAllUserIdentitiesCompletionBlock;
    NSMutableDictionary * _identityToContactIdentifiers;
    id /* block */  _userIdentityDiscoveredBlock;
}

@property (nonatomic, copy) id /* block */ discoverAllUserIdentitiesCompletionBlock;
@property (nonatomic, retain) NSMutableDictionary *identityToContactIdentifiers;
@property (nonatomic, copy) id /* block */ userIdentityDiscoveredBlock;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id /* block */)discoverAllUserIdentitiesCompletionBlock;
- (id)identityToContactIdentifiers;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setDiscoverAllUserIdentitiesCompletionBlock:(id /* block */)arg1;
- (void)setIdentityToContactIdentifiers:(id)arg1;
- (void)setUserIdentityDiscoveredBlock:(id /* block */)arg1;
- (id /* block */)userIdentityDiscoveredBlock;

@end
