/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADDeviceInfo : NSObject <NSSecureCoding> {
    bool  _batteryDischarging;
    NSString * _buildVersion;
    bool  _carKitConnected;
    NSString * _deviceModel;
    int  _interfaceIdiom;
    NSArray * _keyboards;
    int  _orientation;
    NSNumber * _scale;
    NSNumber * _screenHeight;
    NSNumber * _screenWidth;
    NSString * _systemName;
    NSString * _systemVersion;
}

@property (nonatomic) bool batteryDischarging;
@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic) bool carKitConnected;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic) int interfaceIdiom;
@property (nonatomic, retain) NSArray *keyboards;
@property (nonatomic) int orientation;
@property (nonatomic, retain) NSNumber *scale;
@property (nonatomic, retain) NSNumber *screenHeight;
@property (nonatomic, retain) NSNumber *screenWidth;
@property (nonatomic, retain) NSString *systemName;
@property (nonatomic, retain) NSString *systemVersion;

+ (bool)supportsSecureCoding;

- (bool)batteryDischarging;
- (id)buildVersion;
- (bool)carKitConnected;
- (void)dealloc;
- (id)description;
- (id)deviceModel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)interfaceIdiom;
- (id)keyboards;
- (int)orientation;
- (id)scale;
- (id)screenHeight;
- (id)screenWidth;
- (void)setBatteryDischarging:(bool)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setCarKitConnected:(bool)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setInterfaceIdiom:(int)arg1;
- (void)setKeyboards:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setScale:(id)arg1;
- (void)setScreenHeight:(id)arg1;
- (void)setScreenWidth:(id)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (id)systemName;
- (id)systemVersion;

@end
