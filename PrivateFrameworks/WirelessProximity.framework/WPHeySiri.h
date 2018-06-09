/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPHeySiri : WPClient {
    <WPHeySiriProtocol> * _delegate;
    bool  _isScanning;
}

@property (nonatomic) <WPHeySiriProtocol> *delegate;
@property bool isScanning;

- (void).cxx_destruct;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (id)clientAsString;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (bool)isScanning;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsScanning:(bool)arg1;
- (void)startAdvertisingWithData:(id)arg1;
- (void)startScanning;
- (void)startScanningAndAdvertisingWithData:(id)arg1;
- (void)stateDidChange:(long long)arg1;
- (void)stopAdvertising;
- (void)stopScanning;
- (void)stopScanningAndAdvertising;

@end
