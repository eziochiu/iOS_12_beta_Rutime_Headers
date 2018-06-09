/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
 */

@interface NCSComplication : NSObject <NSCopying> {
    bool  _active;
    NSString * _appBundleIdentifier;
    bool  _cannotBeDisabled;
    NSString * _complicationBundleIdentifier;
    unsigned long long  _installState;
    NSString * _name;
    NSString * _sockPuppetIdentifier;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic) bool cannotBeDisabled;
@property (nonatomic, copy) NSString *complicationBundleIdentifier;
@property (nonatomic, readonly) NSString *complicationIdentifier;
@property (nonatomic) unsigned long long installState;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sockPuppetIdentifier;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (bool)cannotBeDisabled;
- (id)complicationBundleIdentifier;
- (id)complicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)installState;
- (bool)isActive;
- (bool)isInstalled;
- (id)name;
- (void)setActive:(bool)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setCannotBeDisabled:(bool)arg1;
- (void)setComplicationBundleIdentifier:(id)arg1;
- (void)setInstallState:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setSockPuppetIdentifier:(id)arg1;
- (id)sockPuppetIdentifier;

@end
