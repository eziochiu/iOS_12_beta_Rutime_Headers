/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamController : NSObject <HMDDataStreamDelegate, HMFLogging> {
    HMDHAPAccessory * _accessory;
    NSMutableArray * _activeProtocols;
    HMDDataStream * _defaultDataStream;
    HMDNotificationRegistration * _notificationRegistration;
    HMDDataStreamSetup * _setupInProgress;
    bool  _supportsDataStreamOverTCP;
    HMDService * _transferManagementService;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMDHAPAccessory *accessory;
@property (nonatomic, retain) NSMutableArray *activeProtocols;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDDataStream *defaultDataStream;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, retain) HMDDataStreamSetup *setupInProgress;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsDataStreamOverTCP;
@property (nonatomic) HMDService *transferManagementService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cancelStreamTransportWithError:(id)arg1;
- (void)_continueStreamSetupWithResponse:(id)arg1;
- (void)_createBulkStreamProtocol;
- (void)_finishStreamTransport;
- (id)_getActiveProtocolWithClass:(Class)arg1;
- (void)_initiateStreamSetup;
- (id)accessory;
- (id)activeProtocols;
- (void)addBulkSendListener:(id)arg1;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStreamDidOpen:(id)arg1;
- (id)defaultDataStream;
- (void)handleAccessoryIsNotReachable:(id)arg1;
- (void)handleAccessoryIsReachable:(id)arg1;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;
- (id)notificationRegistration;
- (void)registerForMessages;
- (void)setAccessory:(id)arg1;
- (void)setActiveProtocols:(id)arg1;
- (void)setDefaultDataStream:(id)arg1;
- (void)setSetupInProgress:(id)arg1;
- (void)setSupportsDataStreamOverTCP:(bool)arg1;
- (void)setTransferManagementService:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)setupInProgress;
- (bool)supportsDataStreamOverTCP;
- (id)transferManagementService;
- (id)workQueue;

@end
