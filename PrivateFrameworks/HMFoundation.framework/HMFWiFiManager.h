/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFWiFiManager : HMFObject <HMFWiFiManagerDataSourceDelegate> {
    HMFMACAddress * _MACAddress;
    NSString * _currentNetworkSSID;
    <HMFWiFiManagerDataSource> * _dataSource;
    NSObject<OS_dispatch_queue> * _propQueue;
    bool  _shouldAssertWoW;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) HMFMACAddress *MACAddress;
@property (nonatomic, copy) NSString *currentNetworkSSID;
@property (nonatomic, readonly) <HMFWiFiManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propQueue;
@property (nonatomic) bool shouldAssertWoW;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)MACAddress;
- (void)currentNetworkDidChangeForDataSource:(id)arg1;
- (id)currentNetworkSSID;
- (id)dataSource;
- (void)dataSource:(id)arg1 didChangeLinkAvailability:(bool)arg2;
- (void)dataSource:(id)arg1 didChangeWoWState:(bool)arg2;
- (id)init;
- (id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2;
- (id)propQueue;
- (void)releaseWoWAssertion;
- (void)setCurrentNetworkSSID:(id)arg1;
- (void)setShouldAssertWoW:(bool)arg1;
- (bool)shouldAssertWoW;
- (void)takeWoWAssertion;
- (id)workQueue;

@end
