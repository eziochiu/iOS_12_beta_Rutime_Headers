/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFHotspotDevice : NSObject <WFNetworkListRecord> {
    SFRemoteHotspotDevice * _hotspotDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFRemoteHotspotDevice *hotspotDevice;
@property (nonatomic, readonly) NSString *ssid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isEqualToHotspotDevice:(id)arg1;
- (bool)_isEqualToNetwork:(id)arg1;
- (bool)canBeDisplayedAsCurrent;
- (id)description;
- (unsigned long long)hash;
- (id)hotspotBatteryLife;
- (id)hotspotCellularProtocol;
- (id)hotspotDevice;
- (id)hotspotSignalStrength;
- (bool)iOSHotspot;
- (id)init;
- (id)initWithHotspotDevice:(id)arg1;
- (bool)isAdhoc;
- (bool)isEqual:(id)arg1;
- (bool)isHotspot20;
- (bool)isInstantHotspot;
- (bool)isSecure;
- (bool)isUnconfiguredAccessory;
- (long long)rssi;
- (float)scaledRSSI;
- (long long)securityMode;
- (void)setHotspotDevice:(id)arg1;
- (void)setScaledRSSI:(float)arg1;
- (id)ssid;
- (id)subtitle;
- (id)title;

@end
