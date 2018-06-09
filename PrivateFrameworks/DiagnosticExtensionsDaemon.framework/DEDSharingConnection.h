/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDSharingConnection : NSObject {
    NSObject<OS_dispatch_semaphore> * _bluetoothSessionSemaphore;
    DEDController * _controller;
    NSMutableDictionary * _deviceSessions;
    id /* block */  _deviceStatusCallback;
    NSMutableDictionary * _discoveredDevices;
    DEDSharingInbound * _inbound;
    bool  _listenForClients;
    NSObject<OS_os_log> * _log;
    SFDeviceDiscovery * _pingDiscovery;
    SFService * _pingService;
    SFDeviceDiscovery * _pongDiscovery;
    NSMutableDictionary * _pongingDevices;
    NSObject<OS_dispatch_queue> * _run_queue;
    bool  _started;
    NSMutableSet * _visiblePingUUIDs;
    SFService * _workerService;
}

@property (retain) NSObject<OS_dispatch_semaphore> *bluetoothSessionSemaphore;
@property DEDController *controller;
@property (retain) NSMutableDictionary *deviceSessions;
@property (copy) id /* block */ deviceStatusCallback;
@property (retain) NSMutableDictionary *discoveredDevices;
@property (retain) DEDSharingInbound *inbound;
@property bool listenForClients;
@property (retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) SFDeviceDiscovery *pingDiscovery;
@property (nonatomic, retain) SFService *pingService;
@property (nonatomic, retain) SFDeviceDiscovery *pongDiscovery;
@property (retain) NSMutableDictionary *pongingDevices;
@property (retain) NSObject<OS_dispatch_queue> *run_queue;
@property bool started;
@property (retain) NSMutableSet *visiblePingUUIDs;
@property (nonatomic, retain) SFService *workerService;

+ (void)checkIn;

- (void).cxx_destruct;
- (void)_configureService:(id)arg1 withLabel:(id)arg2 needsSetup:(bool)arg3 actionType:(unsigned char)arg4 completion:(id /* block */)arg5;
- (bool)_distanceWithinRange:(long long)arg1;
- (id)_existingSharingSessionForDevice:(id)arg1;
- (void)_saveDevice:(id)arg1;
- (void)_verifyPairingForSession:(id)arg1 holdForPIN:(bool)arg2 completion:(id /* block */)arg3;
- (void)addIncomingSFSession:(id)arg1 forIdentifier:(id)arg2;
- (id)blockingSharingSessionForDevice:(id)arg1;
- (id)bluetoothSessionSemaphore;
- (void)checkReadinessForSFDevice:(id)arg1 session:(id)arg2;
- (void)configureListenForClients:(bool)arg1;
- (void)configureSharingInbound:(id)arg1;
- (id)controller;
- (void)createSharingSessionForSFDevice:(id)arg1 holdForPIN:(bool)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)deviceSessions;
- (id /* block */)deviceStatusCallback;
- (void)didStartBugSessionWithInfo:(id)arg1 forCaller:(id)arg2;
- (void)discoverDevicesWithCompletion:(id /* block */)arg1;
- (id)discoveredDevices;
- (void)getSystemInfoForDevice:(id)arg1;
- (id)inbound;
- (id)initWithController:(id)arg1;
- (bool)listenForClients;
- (id)log;
- (id)pingDiscovery;
- (id)pingService;
- (id)pongDiscovery;
- (id)pongingDevices;
- (id)run_queue;
- (void)setBluetoothSessionSemaphore:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDeviceDiscoveryCallback:(id /* block */)arg1;
- (void)setDeviceSessions:(id)arg1;
- (void)setDeviceStatusCallback:(id /* block */)arg1;
- (void)setDiscoveredDevices:(id)arg1;
- (void)setInbound:(id)arg1;
- (void)setListenForClients:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setPingDiscovery:(id)arg1;
- (void)setPingService:(id)arg1;
- (void)setPongDiscovery:(id)arg1;
- (void)setPongingDevices:(id)arg1;
- (void)setRun_queue:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setVisiblePingUUIDs:(id)arg1;
- (void)setWorkerService:(id)arg1;
- (id)sharingOutboundForBugSessionIdentifier:(id)arg1 device:(id)arg2;
- (void)start;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)startPairSetupForDevice:(id)arg1;
- (void)startPingDiscovery;
- (void)startPingServiceWithCompletion:(id /* block */)arg1;
- (void)startPongAdvertisement;
- (void)startPongDiscovery;
- (void)startWorkerService;
- (bool)started;
- (void)stopDiscovery;
- (void)stopPingDiscovery;
- (void)stopPingService;
- (void)stopPongAdvertisement;
- (void)stopPongDiscovery;
- (void)stopSession:(id)arg1;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)trySessionWithFoundDevice:(id)arg1;
- (void)updateControllerWithDevice:(id)arg1 andStatus:(long long)arg2;
- (void)updatePongAdvertisement;
- (id)visiblePingUUIDs;
- (id)workerService;

@end
