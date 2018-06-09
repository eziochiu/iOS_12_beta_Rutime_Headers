/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMutableRoute : TURoute

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
@property (getter=isPreferred, nonatomic) bool preferred;
@property (getter=isPreferredAndActive, nonatomic) bool preferredAndActive;
@property (getter=isReceiver, nonatomic) bool receiver;
@property (getter=isSpeaker, nonatomic) bool speaker;
@property (nonatomic) bool supportsPreferredAndActive;
@property (nonatomic) bool supportsRelay;
@property (getter=isWiredHeadphones, nonatomic) bool wiredHeadphones;
@property (getter=isWiredHeadset, nonatomic) bool wiredHeadset;
@property (getter=isWirelessHeadset, nonatomic) bool wirelessHeadset;

+ (bool)supportsSecureCoding;

@end
