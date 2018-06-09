/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHotspotNetwork : NSObject {
    struct __CNNetwork { } * _network;
}

@property (readonly) NSString *BSSID;
@property (readonly) NSString *SSID;
@property (getter=didAutoJoin, readonly) bool autoJoined;
@property (getter=isChosenHelper, readonly) bool chosenHelper;
@property (readonly) NSString *interfaceName;
@property (getter=didJustJoin, readonly) bool justJoined;
@property struct __CNNetwork { }*network;
@property (getter=isSecure, readonly) bool secure;
@property (readonly) double signalStrength;

- (id)BSSID;
- (id)SSID;
- (void)dealloc;
- (id)description;
- (bool)didAutoJoin;
- (bool)didJustJoin;
- (id)initWithNetwork:(struct __CNNetwork { }*)arg1;
- (id)interfaceName;
- (bool)isChosenHelper;
- (bool)isSecure;
- (struct __CNNetwork { }*)network;
- (void)setConfidence:(long long)arg1;
- (void)setNetwork:(struct __CNNetwork { }*)arg1;
- (void)setPassword:(id)arg1;
- (double)signalStrength;

@end
