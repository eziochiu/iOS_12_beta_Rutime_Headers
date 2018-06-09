/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPExtensionProvider : FPProvider {
    NSURL * _bundleURL;
    NSString * _containingBundleIdentifier;
    bool  _isAvailableSystemWide;
    bool  _supportsEnumeration;
}

+ (id)beginMonitoringProviderChangesWithHandler:(id /* block */)arg1;
+ (void)endMonitoringProviderChanges:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 domain:(id)arg2 localizedName:(id)arg3 storageURL:(id)arg4 supportedFileTypes:(id)arg5 type:(long long)arg6 bundleURL:(id)arg7 supportsEnumeration:(bool)arg8 isAvailableSystemWide:(bool)arg9 isReadOnly:(bool)arg10 isEnabled:(bool)arg11 containingBundleIdentifier:(id)arg12 usesUniqueItemIdentifiers:(bool)arg13;
- (id)bundleURL;
- (id)containingBundleIdentifier;
- (id)initWithProperties:(id)arg1 domain:(id)arg2;
- (bool)isAvailableSystemWide;
- (bool)supportsEnumeration;

@end
