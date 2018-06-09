/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPDeviceScanner : WPClient {
    NSMutableDictionary * _activeScans;
    bool  _anyScanResultsRequested;
    <WPDeviceScannerDelegate> * _delegate;
    NSMutableArray * _liveDevices;
}

@property (nonatomic, retain) NSMutableDictionary *activeScans;
@property (nonatomic) bool anyScanResultsRequested;
@property (nonatomic) <WPDeviceScannerDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *liveDevices;

- (void).cxx_destruct;
- (id)activeScans;
- (void)addPuckType:(id)arg1 toDictionary:(id)arg2;
- (void)anyDiscoveredDevice:(id)arg1;
- (bool)anyScanResultsRequested;
- (id)clientAsString;
- (id)delegate;
- (id)description;
- (void)deviceDiscovered:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (id)liveDevices;
- (void)parseAirPrint:(char *)arg1 forSize:(int)arg2 intoDictionary:(id)arg3;
- (void)parseCompanyData:(char *)arg1 forSize:(int)arg2 intoDictionary:(id)arg3;
- (bool)parseType:(unsigned char)arg1 atOffset:(char *)arg2 withSize:(int)arg3 intoDictionary:(id)arg4;
- (void)postDevice:(id)arg1;
- (void)postDevices:(id)arg1;
- (void)registerForAnyScanResults:(bool)arg1;
- (void)registerForDevicesMatching:(id)arg1 options:(id)arg2;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)setActiveScans:(id)arg1;
- (void)setAnyScanResultsRequested:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLiveDevices:(id)arg1;
- (void)stateDidChange:(long long)arg1;
- (void)timerFinished:(id)arg1;
- (void)unregisterAllDeviceChanges;
- (void)unregisterForDevices:(id)arg1;

@end
