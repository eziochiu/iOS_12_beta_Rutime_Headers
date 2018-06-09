/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExtensionPlugInBundleManager : NSObject {
    NSMutableDictionary * _intentsSupported;
    NSDictionary * _pluginsPlistDictionary;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_registerBundle:(id)arg1 bundleIdentifier:(id)arg2;
- (id)extensionForIntent:(id)arg1;
- (id)init;
- (bool)loadBundleForBundleIdentifier:(id)arg1 wasPrewarmed:(bool*)arg2;

@end
