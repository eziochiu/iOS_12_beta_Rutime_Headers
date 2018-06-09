/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarComposedData : NSObject <NSCopying> {
    NSString * _doubleHeightStatus;
    bool  _itemEnabled;
    struct { 
        bool itemIsEnabled[36]; 
        BOOL timeString[64]; 
        BOOL shortTimeString[64]; 
        BOOL dateString[256]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        unsigned int deviceIsRTL : 1; 
        unsigned int lock : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
        BOOL personName[100]; 
        unsigned int electronicTollCollectionAvailable : 1; 
        unsigned int wifiLinkWarning : 1; 
        unsigned int wifiSearching : 1; 
        double backgroundActivityDisplayStartDate; 
        unsigned int shouldShowEmergencyOnlyStatus : 1; 
    }  _rawData;
    UISystemNavigationAction * _systemNavigationItem;
}

@property (nonatomic, copy) NSString *doubleHeightStatus;
@property (nonatomic, readonly) struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*rawData;
@property (nonatomic, retain) UISystemNavigationAction *systemNavigationItem;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doubleHeightStatus;
- (id)initWithRawData:(const struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isItemEnabled:(int)arg1;
- (struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)rawData;
- (void)setDoubleHeightStatus:(id)arg1;
- (void)setItem:(int)arg1 enabled:(bool)arg2;
- (void)setSystemNavigationItem:(id)arg1;
- (id)systemNavigationItem;

@end
