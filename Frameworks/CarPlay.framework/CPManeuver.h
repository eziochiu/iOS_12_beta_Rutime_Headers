/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPManeuver : NSObject <NSCopying, NSSecureCoding> {
    NSMeasurement * _distanceFromPreviousManeuver;
    NSUUID * _identifier;
    NSArray * _instructionVariants;
    NSSet * _junctionElementAngles;
    NSMeasurement * _junctionExitAngle;
    unsigned long long  _junctionType;
    unsigned long long  _maneuverType;
    NSArray * _roadFollowingManeuverVariants;
    UIImage * _symbol;
    unsigned long long  _trafficSide;
    id  _userInfo;
}

@property (nonatomic, copy) NSMeasurement *distanceFromPreviousManeuver;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) NSArray *instructionVariants;
@property (nonatomic, copy) NSSet *junctionElementAngles;
@property (nonatomic, copy) NSMeasurement *junctionExitAngle;
@property (nonatomic) unsigned long long junctionType;
@property (nonatomic) unsigned long long maneuverType;
@property (nonatomic, copy) NSArray *roadFollowingManeuverVariants;
@property (nonatomic, retain) UIImage *symbol;
@property (nonatomic) unsigned long long trafficSide;
@property (nonatomic, retain) id userInfo;

+ (id)_descriptionForJunctionType:(unsigned long long)arg1;
+ (id)_descriptionForManeuverType:(unsigned long long)arg1;
+ (id)_descriptionForTrafficSide:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)distanceFromPreviousManeuver;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instructionVariants;
- (id)junctionElementAngles;
- (id)junctionExitAngle;
- (unsigned long long)junctionType;
- (unsigned long long)maneuverType;
- (id)roadFollowingManeuverVariants;
- (void)setDistanceFromPreviousManeuver:(id)arg1;
- (void)setInstructionVariants:(id)arg1;
- (void)setJunctionElementAngles:(id)arg1;
- (void)setJunctionExitAngle:(id)arg1;
- (void)setJunctionType:(unsigned long long)arg1;
- (void)setManeuverType:(unsigned long long)arg1;
- (void)setRoadFollowingManeuverVariants:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setTrafficSide:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)symbol;
- (unsigned long long)trafficSide;
- (id)userInfo;

@end
