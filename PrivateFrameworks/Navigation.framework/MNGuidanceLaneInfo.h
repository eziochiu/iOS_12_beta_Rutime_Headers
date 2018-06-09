/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNGuidanceLaneInfo : NSObject <NSSecureCoding> {
    long long  _distanceDetailLevel;
    NSArray * _instructions;
    bool  _isForManeuver;
    NSArray * _lanes;
    NSArray * _titles;
    NSUUID * _uniqueID;
    NSDictionary * _variableOverrides;
}

@property (nonatomic, readonly) long long distanceDetailLevel;
@property (nonatomic, readonly) NSArray *instructions;
@property (nonatomic, readonly) bool isForManeuver;
@property (nonatomic, readonly) NSArray *lanes;
@property (nonatomic, readonly) NSArray *titles;
@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) NSDictionary *variableOverrides;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (long long)distanceDetailLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 isForManeuver:(bool)arg2 lanes:(id)arg3 titles:(id)arg4 instructions:(id)arg5 variableOverrides:(id)arg6 distanceDetailLevel:(long long)arg7;
- (id)instructions;
- (bool)isForManeuver;
- (id)lanes;
- (id)titles;
- (id)uniqueID;
- (id)variableOverrides;

@end
