/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCloudKitContainer : NSObject {
    IDSCKContainer * _container;
    IDSCloudKitKeyElectionStore * _keyElectionStore;
    IDSCloudKitKeyValueStore * _keyValueStore;
    IDSCloudKitGroupServer * _privateGroupServer;
    IDSCloudKitGroupServer * _publicGroupServer;
    NSObject<OS_dispatch_queue> * _queue;
    IDSCloudKitTransportLog * _transportLog;
}

@property (nonatomic, retain) IDSCKContainer *container;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) IDSCloudKitKeyElectionStore *keyElectionStore;
@property (nonatomic, readonly) IDSCloudKitKeyValueStore *keyValueStore;
@property (nonatomic, readonly) IDSCloudKitGroupServer *privateGroupServer;
@property (nonatomic, readonly) IDSCloudKitGroupServer *publicGroupServer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) IDSCloudKitTransportLog *transportLog;

- (void).cxx_destruct;
- (id)container;
- (id)containerIdentifier;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (id)keyElectionStore;
- (id)keyValueStore;
- (id)privateGroupServer;
- (id)publicGroupServer;
- (id)queue;
- (void)setContainer:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)transportLog;

@end
