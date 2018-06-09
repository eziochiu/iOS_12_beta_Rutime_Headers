/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSSecureCoding> {
    NSString * _bundleContainerPath;
    NSString * _bundleIdentifier;
    NSString * _bundlePath;
    XBLaunchInterface * _defaultInterface;
    NSArray * _launchInterfaces;
    bool  _launchesOpaque;
    NSString * _sandboxPath;
}

@property (nonatomic, readonly) bool allowsSavingLaunchImages;
@property (nonatomic, copy) NSString *bundleContainerPath;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundlePath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) XBLaunchInterface *defaultLaunchInterface;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *launchInterfaces;
@property (nonatomic) bool launchesOpaque;
@property (nonatomic, copy) NSString *sandboxPath;
@property (readonly) Class superclass;

+ (id)compatibilityInfoForAppInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setLaunchInterfaces:(id)arg1;
- (bool)allowsSavingLaunchImages;
- (id)bundleContainerPath;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)defaultLaunchInterface;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)launchInterfaceIdentifierForRequest:(id)arg1;
- (id)launchInterfaceWithIdentifier:(id)arg1;
- (id)launchInterfaces;
- (bool)launchesOpaque;
- (id)sandboxPath;
- (void)setBundleContainerPath:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setLaunchesOpaque:(bool)arg1;
- (void)setSandboxPath:(id)arg1;

@end
