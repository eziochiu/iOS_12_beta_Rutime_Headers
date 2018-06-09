/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceMotionLite : NSObject <NSCopying, NSSecureCoding> {
    CMAttitude * _attitude;
    float  _compassTemperature;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _gravity;
    float  _gyroTemperature;
    unsigned long long  _machTimestamp;
    NSString * _physicalDeviceUniqueID;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rawAcceleration;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rawMagneticField;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rawRotationRate;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rotationRate;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _userAcceleration;
    bool  _usingCompass;
}

@property (nonatomic, readonly) CMAttitude *attitude;
@property (nonatomic, readonly) float compassTemperature;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } gravity;
@property (nonatomic, readonly) float gyroTemperature;
@property (nonatomic, readonly) unsigned long long machTimestamp;
@property (nonatomic, readonly, copy) NSString *physicalDeviceUniqueID;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } rawAcceleration;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } rawMagneticField;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } rawRotationRate;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } rotationRate;
@property (nonatomic, readonly) float tilt;
@property (nonatomic, readonly) float tip;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } userAcceleration;
@property (getter=isUsingCompass, nonatomic, readonly) bool usingCompass;

+ (bool)supportsSecureCoding;

- (id)attitude;
- (float)compassTemperature;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; })gravity;
- (float)gyroTemperature;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotionLite:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; unsigned long long x6; bool x7; float x8; float x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; } x10; unsigned char x11[3]; })arg1 andDeviceID:(id)arg2;
- (bool)isUsingCompass;
- (unsigned long long)machTimestamp;
- (id)physicalDeviceUniqueID;
- (struct { double x1; double x2; double x3; })rawAcceleration;
- (struct { double x1; double x2; double x3; })rawMagneticField;
- (struct { double x1; double x2; double x3; })rawRotationRate;
- (struct { double x1; double x2; double x3; })rotationRate;
- (float)tilt;
- (float)tip;
- (struct { double x1; double x2; double x3; })userAcceleration;

@end
