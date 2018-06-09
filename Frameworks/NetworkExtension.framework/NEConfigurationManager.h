/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEConfigurationManager : NSObject {
    NSData * _SCPreferencesSignature;
    id /* block */  _changedHandler;
    int  _changedNotifyToken;
    NSObject<OS_dispatch_queue> * _changedQueue;
    long long  _configurationChangeSource;
    NSDictionary * _currentIndex;
    NSKeyedUnarchiver * _decoder;
    <NEConfigurationManagerDelegate> * _delegate;
    NSString * _description;
    long long  _generation;
    bool  _hasReadPermission;
    bool  _hasVPNAPIEntitlement;
    NEHelper * _helper;
    bool  _isNEHelper;
    bool  _isVPNPrivateAPI;
    bool  _isVPNPublicAPI;
    NSMutableDictionary * _loadedConfigurations;
    NSMutableDictionary * _loadedIndex;
    NSString * _pluginType;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _userUUID;
}

@property (retain) NSData *SCPreferencesSignature;
@property (copy) id /* block */ changedHandler;
@property int changedNotifyToken;
@property (retain) NSObject<OS_dispatch_queue> *changedQueue;
@property long long configurationChangeSource;
@property (retain) NSDictionary *currentIndex;
@property (retain) NSKeyedUnarchiver *decoder;
@property (retain) <NEConfigurationManagerDelegate> *delegate;
@property long long generation;
@property bool hasReadPermission;
@property bool hasVPNAPIEntitlement;
@property (readonly) NEHelper *helper;
@property (copy) id /* block */ incomingMessageHandler;
@property bool isNEHelper;
@property bool isVPNPrivateAPI;
@property bool isVPNPublicAPI;
@property (retain) NSMutableDictionary *loadedConfigurations;
@property (retain) NSMutableDictionary *loadedIndex;
@property (readonly) NSString *pluginType;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSUUID *userUUID;

+ (long long)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2;
+ (bool)configurationIsEnabled:(id)arg1;
+ (void)disableConfiguration:(id)arg1 onDemandOnly:(bool)arg2;
+ (id)sharedManager;
+ (id)sharedManagerForAllUsers;
+ (void)updateFlags:(unsigned long long*)arg1 withConfiguration:(id)arg2;

- (void).cxx_destruct;
- (id)SCPreferencesSignature;
- (id /* block */)changedHandler;
- (int)changedNotifyToken;
- (id)changedQueue;
- (void)clearLoadedConfigurationsWithIDs:(id)arg1;
- (long long)configurationChangeSource;
- (bool)configurationHasChanged:(id)arg1;
- (id)copyChangedConfigurationIDs:(id)arg1;
- (void)copyIdentities:(id)arg1 fromDomain:(long long)arg2 withCompletionQueue:(id)arg3 handler:(id /* block */)arg4;
- (id)currentIndex;
- (void)dealloc;
- (id)decodeConfigurationWithIdentifier:(id)arg1;
- (id)decoder;
- (id)delegate;
- (id)description;
- (void)didLoadConfiguration:(id)arg1;
- (void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2;
- (id)errorWithCode:(long long)arg1 specifics:(id)arg2;
- (void)fetchCarrierBundleNATKeepAliveIntervalOverCell:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchClientListenerWithBundleID:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)fetchUpgradeInfoForPluginType:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (id)filterIndexWithFilter:(id)arg1;
- (long long)generation;
- (void)getCurrentIndexWithCompletionHandler:(id /* block */)arg1;
- (void)handleApplicationsRemoved:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)handleFileRemovedWithCompletionHandler:(id /* block */)arg1;
- (void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(struct __SCPreferences { }*)arg4;
- (bool)hasReadPermission;
- (bool)hasVPNAPIEntitlement;
- (id)helper;
- (id /* block */)incomingMessageHandler;
- (id)init;
- (id)initWithPluginType:(id)arg1;
- (id)initWithUserUUID:(id)arg1;
- (bool)isNEHelper;
- (bool)isVPNPrivateAPI;
- (bool)isVPNPublicAPI;
- (void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (id)loadedConfigurations;
- (id)loadedIndex;
- (id)makeMutableCopyOfIndex:(id)arg1;
- (void)notifyChanges;
- (id)pluginType;
- (void)postChangeNotification;
- (void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2;
- (void)postGeneration;
- (id)queue;
- (id)readIndexFromDiskWithError:(id*)arg1;
- (void)registerForChangeNotifications;
- (bool)reloadFromDisk;
- (void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences { }*)arg2;
- (bool)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2;
- (void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 isUpgrade:(bool)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences { }*)arg2 currentSignature:(id)arg3 userUUID:(id)arg4 notifyNow:(bool)arg5 isUpgrade:(bool)arg6;
- (void)sendRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)setChangedHandler:(id /* block */)arg1;
- (void)setChangedNotifyToken:(int)arg1;
- (void)setChangedQueue:(id)arg1;
- (void)setChangedQueue:(id)arg1 andHandler:(id /* block */)arg2;
- (void)setConfigurationChangeSource:(long long)arg1;
- (void)setCurrentIndex:(id)arg1;
- (void)setDecoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeneration:(long long)arg1;
- (void)setHasReadPermission:(bool)arg1;
- (void)setHasVPNAPIEntitlement:(bool)arg1;
- (void)setIncomingMessageHandler:(id /* block */)arg1;
- (void)setIsNEHelper:(bool)arg1;
- (void)setIsVPNPrivateAPI:(bool)arg1;
- (void)setIsVPNPublicAPI:(bool)arg1;
- (void)setLoadedConfigurations:(id)arg1;
- (void)setLoadedIndex:(id)arg1;
- (void)setSCPreferencesSignature:(id)arg1;
- (void)showObsoleteAppAlert;
- (void)syncWithSystemConfigurationWithAppNameCallback:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)triggerLocalAuthenticationForConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)updateSCPreferencesSignatureOnDisk;
- (void)upgradeLegacyPluginConfigurationsWithUpgradeInfo:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (id)userUUID;

@end
