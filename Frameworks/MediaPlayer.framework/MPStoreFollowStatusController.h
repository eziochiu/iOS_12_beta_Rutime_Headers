/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreFollowStatusController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSSet * _followed;
    bool  _isAutoFollowing;
    NSDate * _lastAutoFollowingUpdate;
    NSDate * _lastFollowListUpdate;
    NSOperationQueue * _serverOperationsQueue;
    NSMutableSet * _transientFollowed;
    NSMutableSet * _transientUnfollowed;
}

@property (nonatomic, readonly) bool hasCacheEntries;

+ (id)activeDSID;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)_actuallyUpdateCache:(id /* block */)arg1;
- (id)_autofollowStatusURLFromBag:(id)arg1;
- (void)_barrierWrite:(id /* block */)arg1;
- (id)_displayFollows;
- (id)_enableAutofollowURLFromBag:(id)arg1 enable:(bool)arg2;
- (void)_enqueueFollows:(id)arg1 unfollow:(bool)arg2 completion:(id /* block */)arg3;
- (id)_followingURLFromBag:(id)arg1 accountDSID:(id)arg2;
- (void)_performCallback:(id /* block */)arg1;
- (void)_serialRead:(id /* block */)arg1;
- (bool)_shouldUpdate;
- (void)_updateFollowsFromStoreDictionary:(id)arg1;
- (void)autoFollowStatusIsEnabled:(id /* block */)arg1;
- (bool)cachedIsFollowingPerson:(id)arg1;
- (void)follow:(id)arg1 completion:(id /* block */)arg2;
- (void)getFollowedStoreIDs:(id /* block */)arg1;
- (void)getIsFollowingPerson:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasCacheEntries;
- (id)init;
- (void)prepareCache:(id /* block */)arg1;
- (void)setAutoFollowStatus:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)unfollow:(id)arg1 completion:(id /* block */)arg2;

@end
