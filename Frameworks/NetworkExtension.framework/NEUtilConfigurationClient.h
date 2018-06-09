/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling> {
    NSString * _clientName;
    NSMutableArray * _createdConfigurations;
    NEConfiguration * _currentConfiguration;
    NSMutableArray * _currentConfigurations;
    NSMutableArray * _identities;
    bool  _isAlwaysOn;
    NEConfigurationManager * _manager;
}

@property (readonly) NSString *clientName;
@property (retain) NSMutableArray *createdConfigurations;
@property (retain) NEConfiguration *currentConfiguration;
@property (retain) NSMutableArray *currentConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disconnectOnDemandEnabled;
@property bool enabled;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableArray *identities;
@property (readonly) bool isAlwaysOn;
@property (readonly) NEConfigurationManager *manager;
@property bool onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (readonly) Class superclass;

+ (id)allClients;
+ (id)clientWithName:(id)arg1;
+ (void)removeClientWithName:(id)arg1;

- (void).cxx_destruct;
- (bool)addAppRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)addIdentityProperties:(id)arg1 withDomain:(long long)arg2;
- (bool)addOnDemandRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)addPathRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (id)clientName;
- (bool)createConfigurationWithParameters:(id)arg1 errorStr:(id*)arg2;
- (id)createdConfigurations;
- (id)currentConfiguration;
- (id)currentConfigurations;
- (void)dealloc;
- (id)decodeConfigurationWithIdentifier:(id)arg1 andDecoder:(id)arg2;
- (bool)disconnectOnDemandEnabled;
- (bool)enabled;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)identities;
- (id)initInternalWithClientName:(id)arg1;
- (id)initWithClientName:(id)arg1;
- (bool)isAlwaysOn;
- (bool)isIsAlwaysOn;
- (void)loadConfigurationWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadConfigurationsForceRefresh:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)loadFromDiskForGivenPath:(id)arg1 configName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)manager;
- (bool)onDemandEnabled;
- (id)onDemandRules;
- (id)protocolForParameters:(id)arg1;
- (id)readIndexFromDiskForGivenPatahWithError:(id)arg1 returnError:(id*)arg2 fileDecoder:(id*)arg3;
- (void)reloadIdentityListWithCompletionHandler:(id /* block */)arg1;
- (bool)removeAppRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)removeOnDemandRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)removePathRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setAlwaysOnParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setCommonParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setCreatedConfigurations:(id)arg1;
- (void)setCurrentConfiguration:(id)arg1;
- (void)setCurrentConfigurations:(id)arg1;
- (void)setDisconnectOnDemandEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)setFilterPluginWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setIPSecParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setIdentities:(id)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (bool)setPPPParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setPathControllerWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProtocolWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProviderTypeWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProxyParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProxyServer:(id)arg1 errorStr:(id*)arg2;
- (bool)setSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)swapConfigurationTypeWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetAlwaysOnParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetCommonParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetIPSecParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetPPPParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetProxyParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetProxyServer:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;

@end
