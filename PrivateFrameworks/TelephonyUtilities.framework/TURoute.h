/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TURoute : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _airTunes;
    bool  _bluetooth;
    long long  _bluetoothEndpointType;
    bool  _bluetoothLE;
    bool  _carAudio;
    bool  _currentlyPicked;
    bool  _defaultRoute;
    long long  _deviceType;
    bool  _guest;
    NSArray * _identifiersOfOtherConnectedDevices;
    NSString * _name;
    bool  _preferred;
    bool  _preferredAndActive;
    bool  _receiver;
    bool  _speaker;
    bool  _supportsPreferredAndActive;
    bool  _supportsRelay;
    NSString * _uniqueIdentifier;
    bool  _wiredHeadphones;
    bool  _wiredHeadset;
    bool  _wirelessHeadset;
}

@property (getter=isAirTunes, nonatomic) bool airTunes;
@property (getter=isBluetooth, nonatomic) bool bluetooth;
@property (nonatomic) long long bluetoothEndpointType;
@property (getter=isBluetoothLE, nonatomic) bool bluetoothLE;
@property (getter=isCarAudio, nonatomic) bool carAudio;
@property (getter=isCurrentlyPicked, nonatomic) bool currentlyPicked;
@property (getter=isDefaultRoute, nonatomic) bool defaultRoute;
@property (nonatomic) long long deviceType;
@property (getter=isGuest, nonatomic) bool guest;
@property (nonatomic, copy) NSArray *identifiersOfOtherConnectedDevices;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isPreferred, nonatomic) bool preferred;
@property (getter=isPreferredAndActive, nonatomic) bool preferredAndActive;
@property (getter=isReceiver, nonatomic) bool receiver;
@property (getter=isSpeaker, nonatomic) bool speaker;
@property (nonatomic) bool supportsPreferredAndActive;
@property (nonatomic) bool supportsRelay;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (getter=isWiredHeadphones, nonatomic) bool wiredHeadphones;
@property (getter=isWiredHeadset, nonatomic) bool wiredHeadset;
@property (getter=isWirelessHeadset, nonatomic) bool wirelessHeadset;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)bluetoothEndpointType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifiersOfOtherConnectedDevices;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 name:(id)arg2;
- (bool)isAirTunes;
- (bool)isBluetooth;
- (bool)isBluetoothLE;
- (bool)isCarAudio;
- (bool)isCurrentlyPicked;
- (bool)isDefaultRoute;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRoute:(id)arg1;
- (bool)isGuest;
- (bool)isPreferred;
- (bool)isPreferredAndActive;
- (bool)isReceiver;
- (bool)isSpeaker;
- (bool)isWiredHeadphones;
- (bool)isWiredHeadset;
- (bool)isWirelessHeadset;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (void)setAirTunes:(bool)arg1;
- (void)setBluetooth:(bool)arg1;
- (void)setBluetoothEndpointType:(long long)arg1;
- (void)setBluetoothLE:(bool)arg1;
- (void)setCarAudio:(bool)arg1;
- (void)setCurrentlyPicked:(bool)arg1;
- (void)setDefaultRoute:(bool)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setGuest:(bool)arg1;
- (void)setIdentifiersOfOtherConnectedDevices:(id)arg1;
- (void)setPreferred:(bool)arg1;
- (void)setPreferredAndActive:(bool)arg1;
- (void)setReceiver:(bool)arg1;
- (void)setSpeaker:(bool)arg1;
- (void)setSupportsPreferredAndActive:(bool)arg1;
- (void)setSupportsRelay:(bool)arg1;
- (void)setWiredHeadphones:(bool)arg1;
- (void)setWiredHeadset:(bool)arg1;
- (void)setWirelessHeadset:(bool)arg1;
- (bool)supportsPreferredAndActive;
- (bool)supportsRelay;
- (id)uniqueIdentifier;

@end
