/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarData : NSObject <NSCopying, NSSecureCoding> {
    _UIStatusBarDataActivityEntry * _activityEntry;
    _UIStatusBarDataEntry * _airPlayEntry;
    _UIStatusBarDataEntry * _airplaneModeEntry;
    _UIStatusBarDataEntry * _alarmEntry;
    _UIStatusBarDataEntry * _assistantEntry;
    _UIStatusBarDataStringEntry * _backNavigationEntry;
    _UIStatusBarDataBackgroundActivityEntry * _backgroundActivityEntry;
    _UIStatusBarDataBluetoothEntry * _bluetoothEntry;
    _UIStatusBarDataEntry * _carPlayEntry;
    _UIStatusBarDataCellularEntry * _cellularEntry;
    _UIStatusBarDataStringEntry * _dateEntry;
    _UIStatusBarDataBoolEntry * _electronicTollCollectionEntry;
    _UIStatusBarDataStringEntry * _forwardNavigationEntry;
    _UIStatusBarDataEntry * _liquidDetectionEntry;
    _UIStatusBarDataLocationEntry * _locationEntry;
    _UIStatusBarDataLockEntry * _lockEntry;
    _UIStatusBarDataBatteryEntry * _mainBatteryEntry;
    _UIStatusBarDataEntry * _nikeEntry;
    _UIStatusBarDataStringEntry * _personNameEntry;
    _UIStatusBarDataBoolEntry * _quietModeEntry;
    _UIStatusBarDataEntry * _rotationLockEntry;
    _UIStatusBarDataStringEntry * _shortTimeEntry;
    _UIStatusBarDataTetheringEntry * _tetheringEntry;
    _UIStatusBarDataThermalEntry * _thermalEntry;
    _UIStatusBarDataStringEntry * _timeEntry;
    _UIStatusBarDataEntry * _ttyEntry;
    _UIStatusBarDataIntegerEntry * _volumeEntry;
    _UIStatusBarDataEntry * _vpnEntry;
    _UIStatusBarDataWifiEntry * _wifiEntry;
}

@property (nonatomic, copy) _UIStatusBarDataActivityEntry *activityEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *airPlayEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *airplaneModeEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *alarmEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *assistantEntry;
@property (nonatomic, copy) _UIStatusBarDataStringEntry *backNavigationEntry;
@property (nonatomic, copy) _UIStatusBarDataBackgroundActivityEntry *backgroundActivityEntry;
@property (nonatomic, copy) _UIStatusBarDataBluetoothEntry *bluetoothEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *carPlayEntry;
@property (nonatomic, copy) _UIStatusBarDataCellularEntry *cellularEntry;
@property (nonatomic, copy) _UIStatusBarDataStringEntry *dateEntry;
@property (nonatomic, copy) _UIStatusBarDataBoolEntry *electronicTollCollectionEntry;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, copy) _UIStatusBarDataStringEntry *forwardNavigationEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *liquidDetectionEntry;
@property (nonatomic, copy) _UIStatusBarDataLocationEntry *locationEntry;
@property (nonatomic, copy) _UIStatusBarDataLockEntry *lockEntry;
@property (nonatomic, copy) _UIStatusBarDataBatteryEntry *mainBatteryEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *nikeEntry;
@property (nonatomic, copy) _UIStatusBarDataStringEntry *personNameEntry;
@property (nonatomic, copy) _UIStatusBarDataBoolEntry *quietModeEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *rotationLockEntry;
@property (nonatomic, copy) _UIStatusBarDataStringEntry *shortTimeEntry;
@property (nonatomic, copy) _UIStatusBarDataTetheringEntry *tetheringEntry;
@property (nonatomic, copy) _UIStatusBarDataThermalEntry *thermalEntry;
@property (nonatomic, copy) _UIStatusBarDataStringEntry *timeEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *ttyEntry;
@property (nonatomic, copy) _UIStatusBarDataIntegerEntry *volumeEntry;
@property (nonatomic, copy) _UIStatusBarDataEntry *vpnEntry;
@property (nonatomic, copy) _UIStatusBarDataWifiEntry *wifiEntry;

+ (id)entryKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyUpdate:(id)arg1 keys:(id)arg2;
- (id)activityEntry;
- (id)airPlayEntry;
- (id)airplaneModeEntry;
- (id)alarmEntry;
- (void)applyUpdate:(id)arg1;
- (id)assistantEntry;
- (id)backNavigationEntry;
- (id)backgroundActivityEntry;
- (id)bluetoothEntry;
- (id)carPlayEntry;
- (id)cellularEntry;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingUpdate:(id)arg1 keys:(id)arg2;
- (id)dateEntry;
- (id)description;
- (id)electronicTollCollectionEntry;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardNavigationEntry;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)liquidDetectionEntry;
- (id)locationEntry;
- (id)lockEntry;
- (id)mainBatteryEntry;
- (void)makeUpdateFromData:(id)arg1;
- (id)nikeEntry;
- (id)personNameEntry;
- (id)quietModeEntry;
- (id)rotationLockEntry;
- (void)setActivityEntry:(id)arg1;
- (void)setAirPlayEntry:(id)arg1;
- (void)setAirplaneModeEntry:(id)arg1;
- (void)setAlarmEntry:(id)arg1;
- (void)setAssistantEntry:(id)arg1;
- (void)setBackNavigationEntry:(id)arg1;
- (void)setBackgroundActivityEntry:(id)arg1;
- (void)setBluetoothEntry:(id)arg1;
- (void)setCarPlayEntry:(id)arg1;
- (void)setCellularEntry:(id)arg1;
- (void)setDateEntry:(id)arg1;
- (void)setElectronicTollCollectionEntry:(id)arg1;
- (void)setForwardNavigationEntry:(id)arg1;
- (void)setLiquidDetectionEntry:(id)arg1;
- (void)setLocationEntry:(id)arg1;
- (void)setLockEntry:(id)arg1;
- (void)setMainBatteryEntry:(id)arg1;
- (void)setNikeEntry:(id)arg1;
- (void)setPersonNameEntry:(id)arg1;
- (void)setQuietModeEntry:(id)arg1;
- (void)setRotationLockEntry:(id)arg1;
- (void)setShortTimeEntry:(id)arg1;
- (void)setTetheringEntry:(id)arg1;
- (void)setThermalEntry:(id)arg1;
- (void)setTimeEntry:(id)arg1;
- (void)setTtyEntry:(id)arg1;
- (void)setVolumeEntry:(id)arg1;
- (void)setVpnEntry:(id)arg1;
- (void)setWifiEntry:(id)arg1;
- (id)shortTimeEntry;
- (id)tetheringEntry;
- (id)thermalEntry;
- (id)timeEntry;
- (id)ttyEntry;
- (id)updateFromData:(id)arg1;
- (id)volumeEntry;
- (id)vpnEntry;
- (id)wifiEntry;

@end