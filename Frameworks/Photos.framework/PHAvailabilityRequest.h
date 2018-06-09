/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAvailabilityRequest : NSObject {
    NSManagedObjectID * _assetObjectID;
    NSXPCConnection * _clientConnection;
    PLAssetsdClientServiceSender * _clientSender;
    bool  _isCancelled;
    NSString * _taskIdentifier;
}

@property (nonatomic, readonly) NSManagedObjectID *assetObjectID;
@property (nonatomic, retain) NSXPCConnection *clientConnection;
@property (nonatomic, retain) PLAssetsdClientServiceSender *clientSender;
@property (nonatomic, copy) NSString *taskIdentifier;

- (void).cxx_destruct;
- (id)assetObjectID;
- (void)cancel;
- (id)clientConnection;
- (id)clientSender;
- (id)description;
- (id)initWithAssetObjectID:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (bool)isCancelled;
- (id)plistDictionary;
- (void)runDaemonSide;
- (void)setClientConnection:(id)arg1;
- (void)setClientSender:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (id)taskIdentifier;

@end
