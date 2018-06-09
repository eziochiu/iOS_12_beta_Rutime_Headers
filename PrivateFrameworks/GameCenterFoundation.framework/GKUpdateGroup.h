/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKUpdateGroup : NSObject {
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSError * _error;
    NSLock * _lock;
    NSString * _name;
    NSMutableArray * _notifiers;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (retain) NSError *error;
@property (retain) NSLock *lock;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *notifiers;
@property (nonatomic, readonly) long long updateCount;

+ (id)updateGroup;
+ (id)updateGroupForTargetQueue:(id)arg1;
+ (id)updateGroupWithName:(id)arg1;
+ (id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2;

- (void)applyUpdates;
- (void)cancelUpdates;
- (void)dealloc;
- (id)error;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;
- (void)join:(id /* block */)arg1;
- (void)joinAndApplyUpdates;
- (void)joinApplyUpdatesAndDo:(id /* block */)arg1;
- (id)lock;
- (id)name;
- (id)notifiers;
- (void)perform:(id /* block */)arg1;
- (void)performOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)setError:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotifiers:(id)arg1;
- (long long)updateCount;
- (void)wait;

@end
