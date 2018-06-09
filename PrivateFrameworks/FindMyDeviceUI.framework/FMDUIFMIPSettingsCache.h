/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/FindMyDeviceUI
 */

@interface FMDUIFMIPSettingsCache : NSObject {
    unsigned long long  _fmipState;
    bool  _fmipStateAvailable;
    bool  _lowBatteryLocateEnabled;
    bool  _lowBatteryLocateStateAvailable;
}

@property (nonatomic, readonly) bool fmipEnabled;
@property (nonatomic) unsigned long long fmipState;
@property (nonatomic) bool fmipStateAvailable;
@property (nonatomic, readonly) bool fmipStateChangeInProgress;
@property (nonatomic) bool lowBatteryLocateEnabled;
@property (nonatomic) bool lowBatteryLocateStateAvailable;

+ (id)sharedInstance;

- (void)_loadFMIPState;
- (void)_loadLowBatteryState;
- (bool)fmipEnabled;
- (unsigned long long)fmipState;
- (bool)fmipStateAvailable;
- (bool)fmipStateChangeInProgress;
- (id)init;
- (bool)lowBatteryLocateEnabled;
- (bool)lowBatteryLocateStateAvailable;
- (void)setFmipState:(unsigned long long)arg1;
- (void)setFmipStateAvailable:(bool)arg1;
- (void)setLowBatteryLocateEnabled:(bool)arg1;
- (void)setLowBatteryLocateStateAvailable:(bool)arg1;

@end
