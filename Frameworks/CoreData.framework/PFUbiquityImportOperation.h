/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityImportOperation : NSOperation {
    NSObject * _delegate;
    NSLock * _delegateLock;
    NSString * _localPeerID;
    bool  _lockedDelegateLock;
    NSPersistentStore * _store;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property NSObject *delegate;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;

- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)localPeerID;
- (void)lockDelegateLock;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;
- (id)store;
- (id)storeName;
- (void)storeWillBeRemoved:(id)arg1;
- (id)ubiquityRootLocation;
- (void)unlockDelegateLock;

@end
