/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSnapshotCacheEntry : HMFObject {
    NSString * _proactiveSessionID;
    HMDSnapshotFile * _snapshotFile;
    id /* block */  _snapshotRequestCompletion;
    HMFTimer * _timer;
}

@property (nonatomic, readonly) NSString *proactiveSessionID;
@property (nonatomic, readonly) HMDSnapshotFile *snapshotFile;
@property (nonatomic, copy) id /* block */ snapshotRequestCompletion;
@property (nonatomic, readonly) HMFTimer *timer;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProactiveSessionID:(id)arg1 snapshotFile:(id)arg2 timer:(id)arg3;
- (id)proactiveSessionID;
- (void)setSnapshotRequestCompletion:(id /* block */)arg1;
- (id)snapshotFile;
- (id /* block */)snapshotRequestCompletion;
- (id)timer;

@end
