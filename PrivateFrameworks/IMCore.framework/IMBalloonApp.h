/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMBalloonApp : NSObject {
    NSBundle * _appBundle;
    Class  _browserClass;
    NSString * _browserDisplayName;
    Class  _bubbleClass;
    bool  _canSendDataPayloads;
    Class  _customTypingIndicatorLayerClass;
    Class  _dataSourceClass;
    Class  _entryClass;
    NSString * _identifier;
    bool  _isBetaPlugin;
    bool  _isLaunchProhibited;
    bool  _isStickerPackOnly;
    NSNumber * _itemID;
    <PKPlugIn> * _plugin;
    NSBundle * _pluginBundle;
    bool  _pluginLoaded;
    unsigned long long  _presentationContexts;
    bool  _shouldBalloonHideAppIcon;
    bool  _shouldHideAppSwitcher;
    bool  _showInBrowser;
    NSString * _version;
}

@property (nonatomic, retain) NSBundle *appBundle;
@property (nonatomic, retain) Class browserClass;
@property (nonatomic, retain) NSString *browserDisplayName;
@property (nonatomic, retain) Class bubbleClass;
@property (nonatomic) bool canSendDataPayloads;
@property (nonatomic, retain) Class customTypingIndicatorLayerClass;
@property (nonatomic, retain) Class dataSourceClass;
@property (nonatomic, retain) Class entryClass;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isBetaPlugin;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isLaunchProhibited;
@property (nonatomic, readonly) bool isStickerPackOnly;
@property (nonatomic, retain) NSNumber *itemID;
@property (nonatomic, retain) <PKPlugIn> *plugin;
@property (nonatomic, retain) NSBundle *pluginBundle;
@property (nonatomic) bool pluginLoaded;
@property (nonatomic) unsigned long long presentationContexts;
@property (nonatomic) bool shouldBalloonHideAppIcon;
@property (nonatomic) bool shouldHideAppSwitcher;
@property (nonatomic) bool showInBrowser;
@property (nonatomic, readonly) NSString *version;

+ (void)_setUnremovableDisabledApps:(id)arg1;
+ (id)_unremovableDisabledApps;
+ (id)appWithPluginBundle:(id)arg1;
+ (id)appWithPluginBundle:(id)arg1 appBundle:(id)arg2;
+ (id)appWithPluginBundle:(id)arg1 extension:(id)arg2;
+ (id)appWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;
+ (unsigned long long)presentationContextsForInfoPlistArray:(id)arg1 isStickerPackOnly:(bool)arg2;

- (void).cxx_destruct;
- (void)_loadBundle;
- (id)appBundle;
- (Class)browserClass;
- (id)browserDisplayName;
- (Class)bubbleClass;
- (bool)canSendDataPayloads;
- (Class)customTypingIndicatorLayerClass;
- (Class)dataSourceClass;
- (Class)entryClass;
- (id)extensionConnection;
- (id)identifier;
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;
- (bool)isBetaPlugin;
- (bool)isEnabled;
- (bool)isLaunchProhibited;
- (bool)isStickerPackOnly;
- (id)itemID;
- (id)plugin;
- (id)pluginBundle;
- (bool)pluginLoaded;
- (unsigned long long)presentationContexts;
- (id)proxyWithErrorHandle:(id /* block */)arg1;
- (void)setAppBundle:(id)arg1;
- (void)setBrowserClass:(Class)arg1;
- (void)setBrowserDisplayName:(id)arg1;
- (void)setBubbleClass:(Class)arg1;
- (void)setCanSendDataPayloads:(bool)arg1;
- (void)setCustomTypingIndicatorLayerClass:(Class)arg1;
- (void)setDataSourceClass:(Class)arg1;
- (void)setEntryClass:(Class)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsLaunchProhibited:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)setPluginBundle:(id)arg1;
- (void)setPluginLoaded:(bool)arg1;
- (void)setPresentationContexts:(unsigned long long)arg1;
- (void)setShouldBalloonHideAppIcon:(bool)arg1;
- (void)setShouldHideAppSwitcher:(bool)arg1;
- (void)setShowInBrowser:(bool)arg1;
- (bool)shouldBalloonHideAppIcon;
- (bool)shouldHideAppSwitcher;
- (bool)showInBrowser;
- (id)version;

@end
