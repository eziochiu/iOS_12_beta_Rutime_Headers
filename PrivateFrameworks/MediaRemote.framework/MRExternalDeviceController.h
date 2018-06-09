/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalDeviceController : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSString * _bonjourServiceType;
    <MRExternalDeviceControllerDelegate> * _delegate;
    NSMutableSet * _discoveredDevices;
    bool  _discovering;
    NSMutableSet * _monitoringServices;
    NSMutableSet * _resolvingServices;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSNetServiceBrowser * _serviceBrowser;
}

@property (nonatomic, readonly) NSString *bonjourServiceType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRExternalDeviceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDiscovering, nonatomic, readonly) bool discovering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)externalDeviceClass;

- (void).cxx_destruct;
- (bool)_isManagedConfigIDAllowed:(id)arg1;
- (void)beginDiscovery;
- (id)bonjourServiceType;
- (void)dealloc;
- (id)delegate;
- (void)endDiscovery;
- (id)initWithBonjourServiceType:(id)arg1;
- (bool)isDiscovering;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
