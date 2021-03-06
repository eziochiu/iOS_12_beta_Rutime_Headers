/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDPluginLoader : NSObject

+ (id)_accountsPluginDirectoryURL:(id)arg1;
+ (id)_buildPluginCache;
+ (id)_currentSystemVersion;
+ (id)_validatedBundleAtURL:(id)arg1;
+ (id)pluginBundlesAtSubpath:(id)arg1;
+ (id)pluginForIdentifier:(id)arg1 subpath:(id)arg2;
+ (id)pluginWithName:(id)arg1 inSubpath:(id)arg2;

@end
