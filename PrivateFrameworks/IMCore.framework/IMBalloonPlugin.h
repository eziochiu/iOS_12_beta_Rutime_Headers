/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMBalloonPlugin : NSObject {
    IMBalloonApp * _app;
    NSMutableArray * _balloonControllerPool;
    Class  _browserClass;
    long long  _browserGroup;
    NSString * _browserImageName;
    NSString * _browserImagePath;
    Class  _bubbleClass;
    NSBundle * _bundle;
    Class  _customTypingIndicatorLayerClass;
    Class  _dataSourceClass;
    Class  _entryClass;
    NSMutableDictionary * _messageToBalloonControllerMap;
    NSMutableDictionary * _messageToDatasourceMap;
    <PKPlugIn> * _plugin;
    bool  _pluginLoaded;
}

@property (nonatomic, retain) IMBalloonApp *app;
@property (nonatomic, readonly, retain) NSBundle *appBundle;
@property (nonatomic, retain) NSMutableArray *balloonControllerPool;
@property (getter=isBetaPlugin, nonatomic, readonly) bool betaPlugin;
@property (nonatomic, retain) Class browserClass;
@property (nonatomic, readonly, retain) NSString *browserDisplayName;
@property (nonatomic) long long browserGroup;
@property (nonatomic, retain) NSString *browserImageName;
@property (nonatomic, retain) NSString *browserImagePath;
@property (nonatomic, retain) Class bubbleClass;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, retain) Class customTypingIndicatorLayerClass;
@property (nonatomic, retain) Class dataSourceClass;
@property (nonatomic, retain) Class entryClass;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, retain) NSMutableDictionary *messageToBalloonControllerMap;
@property (nonatomic, retain) NSMutableDictionary *messageToDatasourceMap;
@property (nonatomic, retain) <PKPlugIn> *plugin;
@property (nonatomic, readonly, retain) NSBundle *pluginBundle;
@property (nonatomic) bool pluginLoaded;
@property (nonatomic, readonly) unsigned long long presentationContexts;
@property (nonatomic, readonly) bool shouldHideAppSwitcher;
@property (nonatomic, readonly) bool showInBrowser;
@property (nonatomic, readonly) NSString *version;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_getControllerFromReusePoolForChatItem:(id)arg1;
- (id)app;
- (id)appBundle;
- (id)balloonControllerForChatItem:(id)arg1;
- (id)balloonControllerPool;
- (Class)browserClass;
- (id)browserDisplayName;
- (long long)browserGroup;
- (id)browserImageName;
- (id)browserImagePath;
- (Class)bubbleClass;
- (id)bundle;
- (Class)customTypingIndicatorLayerClass;
- (Class)dataSourceClass;
- (id)dataSourceForPluginPayload:(id)arg1;
- (void)dealloc;
- (Class)entryClass;
- (id)existingBalloonControllerWithMessageGUID:(id)arg1;
- (id)existingDataSourceForMessageGUID:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundle:(id)arg1 app:(id)arg2;
- (void)insertDataSource:(id)arg1 forGUID:(id)arg2;
- (bool)isBetaPlugin;
- (bool)isEnabled;
- (bool)isStickerPackOnly;
- (id)messageToBalloonControllerMap;
- (id)messageToDatasourceMap;
- (void)moveController:(id)arg1 toReusePoolFromChatItem:(id)arg2;
- (id)plugin;
- (id)pluginBundle;
- (bool)pluginLoaded;
- (unsigned long long)presentationContexts;
- (void)removeController:(id)arg1 forChatItem:(id)arg2;
- (void)setApp:(id)arg1;
- (void)setBalloonControllerPool:(id)arg1;
- (void)setBrowserClass:(Class)arg1;
- (void)setBrowserGroup:(long long)arg1;
- (void)setBrowserImageName:(id)arg1;
- (void)setBrowserImagePath:(id)arg1;
- (void)setBubbleClass:(Class)arg1;
- (void)setBundle:(id)arg1;
- (void)setCustomTypingIndicatorLayerClass:(Class)arg1;
- (void)setDataSourceClass:(Class)arg1;
- (void)setEntryClass:(Class)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageToBalloonControllerMap:(id)arg1;
- (void)setMessageToDatasourceMap:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)setPluginLoaded:(bool)arg1;
- (bool)shouldHideAppSwitcher;
- (bool)showInBrowser;
- (bool)supportsControllerReuse;
- (void)unloadBundle;
- (id)version;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_attributionInfo;
- (id)__ck_badgeImage;
- (id)__ck_breadcrumbImage;
- (id)__ck_browserImage;
- (id)__ck_browserImageGenerateSynchronously:(bool)arg1;
- (id)__ck_browserImageName:(bool*)arg1;
- (void)__ck_prefetchBrowserImage;
- (id)__ck_statusImage;
- (id)__ck_statusImageForTransport;
- (id)__ck_statusJPEGImageDataForTransportWithCompressionFactor:(double)arg1;
- (id)_adamID;
- (id)_scaledImage:(id)arg1 xscale:(double)arg2 yscale:(double)arg3;
- (id)appStoreBadgeIcon;
- (id)description;
- (id)iconCache;
- (id)recentsBadgeIcon;

@end
