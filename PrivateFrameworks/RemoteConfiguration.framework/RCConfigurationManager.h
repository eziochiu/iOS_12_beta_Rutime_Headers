/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCConfigurationManager : NSObject {
    RCAsyncSerialQueue * _configRequestSerialQueue;
    NSMutableDictionary * _configResourceByRequestKey;
    RCConfigurationSettings * _configurationSettings;
    NSURL * _contentDirectoryURL;
    RCDeviceInfo * _deviceInfo;
    RCKeyValueStore * _localStore;
}

@property (nonatomic, retain) RCAsyncSerialQueue *configRequestSerialQueue;
@property (nonatomic, retain) NSMutableDictionary *configResourceByRequestKey;
@property (nonatomic, retain) RCConfigurationSettings *configurationSettings;
@property (nonatomic, retain) NSURL *contentDirectoryURL;
@property (nonatomic, retain) RCDeviceInfo *deviceInfo;
@property (nonatomic, retain) RCKeyValueStore *localStore;

- (void).cxx_destruct;
- (bool)_areConfigurationResourcesValid:(id)arg1 requestKeys:(id)arg2;
- (id)_decodeConfigurationResource:(id)arg1;
- (id)_encodeConfigurationResource:(id)arg1;
- (id)_endpointURLForEnvironment:(unsigned long long)arg1;
- (void)_fetchConfigurationFromFallbackURLWithSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchMultiConfigurationFromEndpointURL:(id)arg1 settings:(id)arg2 changeTagsByRequestKey:(id)arg3 completion:(id /* block */)arg4;
- (bool)_isAllowedToReachEndpointWithSettings:(id)arg1 configurationResource:(id)arg2 endpointURL:(id)arg3;
- (bool)_isValidConfigurationResource:(id)arg1;
- (void)_loadConfigurationResourcesFromStore;
- (void)_saveConfigurationResource:(id)arg1;
- (id)configRequestSerialQueue;
- (id)configResourceByRequestKey;
- (id)configurationSettings;
- (id)contentDirectoryURL;
- (id)deviceInfo;
- (void)fetchConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchMultiConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchSingleConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithContentDirectoryURL:(id)arg1;
- (id)localStore;
- (void)setConfigRequestSerialQueue:(id)arg1;
- (void)setConfigResourceByRequestKey:(id)arg1;
- (void)setConfigurationSettings:(id)arg1;
- (void)setContentDirectoryURL:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setLocalStore:(id)arg1;

@end
