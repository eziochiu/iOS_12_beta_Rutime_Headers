/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSMutableDictionary * _usage;
    id  _validationToken;
}

@property (nonatomic, readonly) NSNumber *dynamicUsage;
@property (nonatomic, readonly) NSNumber *onDemandResourcesUsage;
@property (nonatomic, readonly) NSNumber *sharedUsage;
@property (nonatomic, readonly) NSNumber *staticUsage;

+ (id)ODRConnection;
+ (id)ODRUsageForBundleIdentifier:(id)arg1 error:(id*)arg2;
+ (id)_serverQueue;
+ (id)mobileInstallationQueue;
+ (id)propertyQueue;
+ (bool)supportsSecureCoding;
+ (id)usageFromMobileInstallationForBundleIdentifier:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_fetchWithXPCConnection:(id)arg1 error:(id*)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2 validationToken:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)dynamicUsage;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchClientSideWithError:(id*)arg1;
- (bool)fetchServerSideWithConnection:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)onDemandResourcesUsage;
- (void)removeAllCachedUsageValues;
- (id)sharedUsage;
- (id)staticUsage;

@end
