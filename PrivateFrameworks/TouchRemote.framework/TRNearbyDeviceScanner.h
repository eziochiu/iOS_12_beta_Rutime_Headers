/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNearbyDeviceScanner : NSObject {
    <TRNearbyDeviceScannerDelegate> * _delegate;
    SFDeviceDiscovery * _deviceDiscovery;
    unsigned long long  _requestedService;
    NSObject<OS_dispatch_queue> * _scannerQ;
    unsigned long long  _state;
}

@property <TRNearbyDeviceScannerDelegate> *delegate;
@property (nonatomic, retain) SFDeviceDiscovery *deviceDiscovery;
@property unsigned long long requestedService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *scannerQ;
@property (nonatomic) unsigned long long state;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_deviceChanged:(id)arg1;
- (void)_deviceFound:(id)arg1;
- (void)_handleActivationWithError:(id)arg1;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (id)delegate;
- (id)deviceDiscovery;
- (id)init;
- (void)openSession:(id)arg1 withCompletion:(id /* block */)arg2;
- (unsigned long long)requestedService;
- (id)scannerQ;
- (void)setDelegate:(id)arg1;
- (void)setDeviceDiscovery:(id)arg1;
- (void)setRequestedService:(unsigned long long)arg1;
- (void)setScannerQ:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)startScanningForDevicesWithService:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)stopScanning;

@end
