/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKJoinGroup : NSObject {
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSError * _error;
    NSMutableArray * _leftNotifiers;
    NSMutableArray * _leftResults;
    NSLock * _lock;
    NSString * _name;
    NSMutableArray * _rightNotifiers;
    NSMutableArray * _rightResults;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (retain) NSError *error;
@property (nonatomic, retain) NSMutableArray *leftNotifiers;
@property (retain) NSMutableArray *leftResults;
@property (retain) NSLock *lock;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *rightNotifiers;
@property (retain) NSMutableArray *rightResults;

+ (id)joinGroup;
+ (id)joinGroupForTargetQueue:(id)arg1;
+ (id)joinGroupWithName:(id)arg1;
+ (id)joinGroupWithName:(id)arg1 taregetQueue:(id)arg2;

- (void)_join:(id /* block */)arg1;
- (void)aggregateJoin:(id /* block */)arg1;
- (void)aggregateJoinLeft:(id /* block */)arg1;
- (void)aggregateJoinRight:(id /* block */)arg1;
- (void)applyUpdates;
- (void)dealloc;
- (id)error;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;
- (void)join:(id /* block */)arg1;
- (void)joinLeft:(id /* block */)arg1;
- (void)joinRight:(id /* block */)arg1;
- (id)leftNotifiers;
- (id)leftResults;
- (id)lock;
- (id)name;
- (void)performLeft:(id /* block */)arg1;
- (void)performLeftOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)performRight:(id /* block */)arg1;
- (void)performRightOnQueue:(id)arg1 block:(id /* block */)arg2;
- (id)rightNotifiers;
- (id)rightResults;
- (void)setError:(id)arg1;
- (void)setLeftNotifiers:(id)arg1;
- (void)setLeftResults:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRightNotifiers:(id)arg1;
- (void)setRightResults:(id)arg1;
- (void)wait;

@end
