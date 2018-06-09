/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVConcreteEndpoint : MRAVEndpoint {
    long long  _connectionType;
    MRAVOutputDevice * _designatedGroupLeader;
    MRTransportExternalDevice * _externalDevice;
    NSArray * _outputDevices;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) MRTransportExternalDevice *externalDevice;
@property (nonatomic, copy) NSArray *outputDevices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (bool)canModifyGroupMembership;
- (long long)connectionType;
- (void)dealloc;
- (id)designatedGroupLeader;
- (id)externalDevice;
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2;
- (bool)isProxyGroupPlayer;
- (id)outputDevices;
- (id)serialQueue;
- (void)setExternalDevice:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (id)uniqueIdentifier;

@end
