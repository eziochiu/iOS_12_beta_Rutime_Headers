/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUser : NSObject <NSCopying> {
    NSNumber * _dsid;
    bool  _hasAllowances;
    bool  _hasManagementSettings;
    NSString * _name;
    NSString * _passcode;
    bool  _remoteUser;
    bool  _screenTimeEnabled;
    unsigned long long  _source;
    unsigned long long  _type;
}

@property (nonatomic, readonly) bool canRemoveAllowances;
@property (nonatomic, readonly) bool canRemovePasscode;
@property (nonatomic, readonly) bool canStopScreenTime;
@property (nonatomic, readonly) bool canStopSharingScreenTime;
@property (nonatomic, readonly) bool canTogglePasscode;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic, readonly) bool forceParentalControls;
@property (nonatomic) bool hasAllowances;
@property (nonatomic) bool hasManagementSettings;
@property (nonatomic, readonly) bool hasPasscode;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *passcode;
@property (getter=isRemoteUser, nonatomic) bool remoteUser;
@property (getter=isScreenTimeEnabled, nonatomic) bool screenTimeEnabled;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long type;

+ (id)keyPathsForValuesAffectingCanRemoveAllowances;
+ (id)keyPathsForValuesAffectingCanRemovePasscode;
+ (id)keyPathsForValuesAffectingCanStopScreenTime;
+ (id)keyPathsForValuesAffectingCanStopSharingScreenTime;
+ (id)keyPathsForValuesAffectingCanTogglePasscode;
+ (id)keyPathsForValuesAffectingHasPasscode;

- (void).cxx_destruct;
- (bool)canRemoveAllowances;
- (bool)canRemovePasscode;
- (bool)canStopScreenTime;
- (bool)canStopSharingScreenTime;
- (bool)canTogglePasscode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dsid;
- (bool)forceParentalControls;
- (bool)hasAllowances;
- (bool)hasManagementSettings;
- (bool)hasPasscode;
- (id)init;
- (id)initWithPersonalUser:(id)arg1 familyUser:(id)arg2;
- (bool)isRemoteUser;
- (bool)isScreenTimeEnabled;
- (id)name;
- (id)passcode;
- (void)setDsid:(id)arg1;
- (void)setHasAllowances:(bool)arg1;
- (void)setHasManagementSettings:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPasscode:(id)arg1;
- (void)setRemoteUser:(bool)arg1;
- (void)setScreenTimeEnabled:(bool)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)source;
- (unsigned long long)type;

@end
