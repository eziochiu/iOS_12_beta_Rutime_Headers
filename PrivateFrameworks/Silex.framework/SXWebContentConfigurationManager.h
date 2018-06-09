/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentConfigurationManager : NSObject <SXWebContentConfigurationManager> {
    SXWebContentConfiguration * _configuration;
    <SXWebContentScript> * _configurationScript;
    <SXWebContentLogger> * _logger;
    <SXWebContentScriptsManager> * _webContentScriptsManager;
}

@property (nonatomic, copy) SXWebContentConfiguration *configuration;
@property (nonatomic, retain) <SXWebContentScript> *configurationScript;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXWebContentLogger> *logger;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXWebContentScriptsManager> *webContentScriptsManager;

- (void).cxx_destruct;
- (id)configuration;
- (id)configurationScript;
- (id)initWithWebContentScriptsManager:(id)arg1 logger:(id)arg2;
- (id)logger;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationScript:(id)arg1;
- (id)webContentScriptsManager;

@end
