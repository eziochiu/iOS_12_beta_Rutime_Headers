/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKRemoteDevice : NSObject <NSSecureCoding> {
    NSString * _backingColorCode;
    NSString * _buildNumber;
    NSString * _colorCode;
    NSString * _coverGlassColorCode;
    NSString * _enclosureColorCode;
    NSString * _housingColorCode;
    bool  _inCircle;
    NSDate * _lastUpdatedDate;
    NSString * _machineId;
    NSString * _model;
    NSString * _name;
    NSString * _operatingSystemName;
    NSString * _operatingSystemVersion;
    NSString * _serialNumber;
    bool  _trusted;
}

@property (nonatomic, readonly, copy) NSString *backingColorCode;
@property (nonatomic, readonly, copy) NSString *buildNumber;
@property (nonatomic, readonly, copy) NSString *colorCode;
@property (nonatomic, readonly, copy) NSString *coverGlassColorCode;
@property (nonatomic, readonly, copy) NSString *enclosureColorCode;
@property (nonatomic, readonly, copy) NSString *housingColorCode;
@property (nonatomic, readonly) bool inCircle;
@property (nonatomic, readonly, copy) NSDate *lastUpdatedDate;
@property (nonatomic, readonly, copy) NSString *machineId;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *operatingSystemName;
@property (nonatomic, readonly, copy) NSString *operatingSystemVersion;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (nonatomic, readonly) bool trusted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initWithInfo:(id)arg1;
- (id)backingColorCode;
- (id)buildNumber;
- (id)colorCode;
- (id)coverGlassColorCode;
- (id)description;
- (id)enclosureColorCode;
- (void)encodeWithCoder:(id)arg1;
- (id)housingColorCode;
- (bool)inCircle;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (id)lastUpdatedDate;
- (id)machineId;
- (id)model;
- (id)name;
- (id)operatingSystemName;
- (id)operatingSystemVersion;
- (id)serialNumber;
- (bool)trusted;

@end
