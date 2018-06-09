/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPHomeKit : WPClient {
    <WPHomeKitDelegate> * _delegate;
}

@property (nonatomic) <WPHomeKitDelegate> *delegate;

- (void).cxx_destruct;
- (void)checkAllowDuplicate;
- (id)clientAsString;
- (unsigned char)clientTypeFromHomeKitType:(long long)arg1;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })dutyCycleToScanningRates:(long long)arg1;
- (long long)homeKitTypeFromClientType:(unsigned char)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)setDelegate:(id)arg1;
- (void)startScanningWithData:(id)arg1 forType:(long long)arg2;
- (void)stateDidChange:(long long)arg1;
- (void)stopScanningForType:(long long)arg1;

@end
