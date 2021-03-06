/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBAppPlugin : MBContainer

@property (nonatomic, readonly) NSString *bundleDir;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSString *entitlementsRelativePath;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) NSString *ownerBundleID;

+ (id)appPluginWithPropertyList:(id)arg1;

- (id)bundleDir;
- (id)domain;
- (id)entitlements;
- (id)entitlementsRelativePath;
- (id)groups;
- (id)ownerBundleID;

@end
