/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface _IMBalloonExtensionApp : IMBalloonApp {
    NSExtension * _extension;
    LSPlugInKitProxy * _proxy;
}

@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) LSPlugInKitProxy *proxy;

- (void).cxx_destruct;
- (id)extension;
- (id)extensionConnection;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 proxy:(id)arg4;
- (id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;
- (bool)isBetaPlugin;
- (bool)isEnabled;
- (bool)isLaunchProhibited;
- (bool)isStickerPackOnly;
- (id)itemID;
- (id)plugin;
- (id)proxy;
- (id)proxyWithErrorHandle:(id /* block */)arg1;
- (void)setExtension:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setProxy:(id)arg1;
- (id)version;

@end
