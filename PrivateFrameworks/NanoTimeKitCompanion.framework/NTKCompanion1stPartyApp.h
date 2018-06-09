/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanion1stPartyApp : NTKCompanionApp {
    unsigned long long  _complicationType;
    UIImage * _icon;
    NSString * _iconName;
}

@property (nonatomic) unsigned long long complicationType;
@property (nonatomic, copy) NSString *iconName;

+ (id)allApps;
+ (id)companionAppWithAppInfo:(/* Warning: unhandled struct encoding: '{_NTKCompanion1stPartyInfo=@@Q@}' */ struct _NTKCompanion1stPartyInfo { id x1; unsigned long long x2; id x3; })arg1;
+ (bool)complicationTypeMapsToRemovedSystemApp:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)complication;
- (unsigned long long)complicationType;
- (id)icon;
- (id)iconName;
- (id)initWithAppInfo:(/* Warning: unhandled struct encoding: '{_NTKCompanion1stPartyInfo=@@Q@}' */ struct _NTKCompanion1stPartyInfo { id x1; unsigned long long x2; id x3; })arg1;
- (void)setComplicationType:(unsigned long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconName:(id)arg1;

@end
