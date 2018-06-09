/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaSocialProfileCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSDate * _lastAuthenticationAttempt;
    SKUIMediaSocialProfile * _lastKnownProfile;
    NSDate * _lastRequestDate;
    NSOperationQueue * _operationQueue;
    NSMutableArray * _profileBlocks;
    bool  _waitingForAuthentication;
}

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (void)_accountStoreChangeNotification:(id)arg1;
- (void)_authenticateOnCompletion:(id /* block */)arg1;
- (void)_fireProfileBlocksWithProfile:(id)arg1 isFinal:(bool)arg2 error:(id)arg3;
- (void)_handleOperationResponseWithProfile:(id)arg1 error:(id)arg2;
- (void)_queueProfileBlock:(id /* block */)arg1;
- (void)_requestProfile;
- (void)dealloc;
- (void)getProfileWithOptions:(id)arg1 profileBlock:(id /* block */)arg2;
- (id)init;
- (void)reset;

@end
