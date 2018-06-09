/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSEntitlements : NSObject {
    NSString * _applicationBundleIdentifier;
    NSDictionary * _entitlements;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSString *classKitEnvironment;
@property (nonatomic, readonly, copy) NSDictionary *entitlements;

+ (id)allowedEntitlements;
+ (id)entitlementsForCurrentTaskWithError:(id*)arg1;
+ (id)entitlementsWithConnection:(id)arg1 error:(id*)arg2;
+ (id)entitlementsWithSecTask:(struct __SecTask { }*)arg1 overrides:(id)arg2 error:(id*)arg3;
+ (bool)isDashboardAppProcess;
+ (bool)isInternalProcess;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (bool)boolValueForEntitlement:(id)arg1 error:(id*)arg2;
- (id)classKitEnvironment;
- (id)entitlements;
- (bool)hasEntitlement:(id)arg1;
- (id)init;
- (id)initWithEntitlements:(id)arg1;
- (bool)isDashboardAPIEnabled;
- (bool)isInDevelopmentEnvironment;
- (bool)isInternal;
- (bool)isPublicClassKitAPIEnabled;
- (bool)isRegisterDashboardEnabled;
- (id)stringValueForEntitlement:(id)arg1 error:(id*)arg2;

@end
