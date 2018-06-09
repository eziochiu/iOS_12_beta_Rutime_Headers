/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKClinicalAccount : NSObject <HKClinicalBrandable, NSCopying, NSSecureCoding> {
    HKClinicalGateway * _gateway;
    struct NSUUID { Class x1; } * _identifier;
    NSDate * _lastFetchDate;
    NSDate * _lastFullFetchDate;
    bool  _needsRelogin;
    long long  _state;
    bool  _userEnabled;
}

@property (nonatomic, readonly, copy) HKClinicalBrand *brand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) HKClinicalGateway *gateway;
@property (nonatomic, readonly) bool hasErrorState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSDate *lastFetchDate;
@property (nonatomic, readonly, copy) NSDate *lastFullFetchDate;
@property (getter=hasMultipleLocations, nonatomic, readonly) bool multiple;
@property (nonatomic, readonly) bool needsRelogin;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isUserEnabled, nonatomic, readonly) bool userEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gateway;
- (bool)hasErrorState;
- (struct NSUUID { Class x1; }*)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(struct NSUUID { Class x1; }*)arg1 state:(long long)arg2 userEnabled:(bool)arg3 needsRelogin:(bool)arg4 lastFetchDate:(id)arg5 lastFullFetchDate:(id)arg6 gateway:(id)arg7;
- (bool)isUserEnabled;
- (id)lastFetchDate;
- (id)lastFullFetchDate;
- (bool)needsRelogin;
- (long long)state;
- (id)subtitle;
- (id)title;

@end
