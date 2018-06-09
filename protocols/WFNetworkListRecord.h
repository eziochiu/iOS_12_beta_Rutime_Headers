/* made by EzioChiu.
 */

@protocol WFNetworkListRecord <NSObject>

@required

- (bool)canBeDisplayedAsCurrent;
- (NSNumber *)hotspotBatteryLife;
- (NSString *)hotspotCellularProtocol;
- (NSNumber *)hotspotSignalStrength;
- (bool)iOSHotspot;
- (bool)isAdhoc;
- (bool)isInstantHotspot;
- (bool)isSecure;
- (bool)isUnconfiguredAccessory;
- (long long)rssi;
- (float)scaledRSSI;
- (NSString *)ssid;
- (NSString *)subtitle;
- (NSString *)title;

@end
