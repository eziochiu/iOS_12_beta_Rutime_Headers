/* made by EzioChiu.
 */

@protocol FBApplicationInfoProvider <NSObject>

@required

- (FBApplicationInfo *)applicationInfoForBundleIdentifier:(NSString *)arg1;

@end
