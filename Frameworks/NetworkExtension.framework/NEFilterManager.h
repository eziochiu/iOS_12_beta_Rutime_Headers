/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterManager : NSObject <NEPrettyDescription> {
    NEConfiguration * _configuration;
    NEConfigurationManager * _configurationManager;
    bool  _hasLoaded;
}

@property (retain) NEConfiguration *configuration;
@property (readonly) NEConfigurationManager *configurationManager;
@property (getter=isEnabled) bool enabled;
@property bool hasLoaded;
@property (copy) NSString *localizedDescription;
@property (retain) NEFilterProviderConfiguration *providerConfiguration;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)configuration;
- (id)configurationManager;
- (void)createEmptyConfiguration;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)hasLoaded;
- (id)init;
- (id)initFilterManagerWithPluginType:(id)arg1;
- (bool)isEnabled;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (id)localizedDescription;
- (id)providerConfiguration;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setProviderConfiguration:(id)arg1;

@end
