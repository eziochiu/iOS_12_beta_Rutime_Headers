/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteReadRequestMessage : HMFObject {
    NSUUID * _accessoryUUID;
    HMFMessage * _readMessage;
    NSObject<OS_dispatch_queue> * _responseQueue;
}

@property (nonatomic, readonly) NSUUID *accessoryUUID;
@property (nonatomic, readonly) HMFMessage *readMessage;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *responseQueue;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)debugDescription;
- (id)description;
- (id)initWithReadMessage:(id)arg1 accessoryUUID:(id)arg2 responseQueue:(id)arg3;
- (id)readMessage;
- (id)responseQueue;

@end
