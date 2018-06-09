/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMutableApplicationControllerOptions : SKUIApplicationControllerOptions

@property (getter=isBootstrapScriptFallbackEnabled, nonatomic) bool bootstrapScriptFallbackEnabled;
@property (nonatomic) double bootstrapScriptFallbackMaximumAge;
@property (nonatomic) double bootstrapScriptTimeoutInterval;
@property (nonatomic) bool pageRenderMetricsEnabled;
@property (nonatomic) bool requiresLocalBootstrapScript;
@property (nonatomic) bool supportsFullApplicationReload;
@property (nonatomic) long long tabBarControllerStyle;
@property (nonatomic) bool useTransientStorageForTests;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBootstrapScriptFallbackEnabled:(bool)arg1;
- (void)setBootstrapScriptFallbackMaximumAge:(double)arg1;
- (void)setBootstrapScriptTimeoutInterval:(double)arg1;
- (void)setPageRenderMetricsEnabled:(bool)arg1;
- (void)setRequiresLocalBootstrapScript:(bool)arg1;
- (void)setSupportsFullApplicationReload:(bool)arg1;
- (void)setTabBarControllerStyle:(long long)arg1;
- (void)setUseTransientStorageForTests:(bool)arg1;

@end
