/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCEndpointOperation : RCOperation {
    NSDictionary * _changeTagsByRequestKey;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _configurationCompletionHandler;
    NSDictionary * _configurationResourcesByRequestKey;
    RCConfigurationSettings * _configurationSettings;
    NSURL * _endpointURL;
}

@property (nonatomic, retain) NSDictionary *changeTagsByRequestKey;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) id /* block */ configurationCompletionHandler;
@property (nonatomic, retain) NSDictionary *configurationResourcesByRequestKey;
@property (nonatomic, retain) RCConfigurationSettings *configurationSettings;
@property (nonatomic, retain) NSURL *endpointURL;

- (void).cxx_destruct;
- (id)_configurationErrorForEndpointErrors:(id)arg1;
- (void)_fetchConfigurationWithSettings:(id)arg1;
- (void)_parseEndpointResponse:(id)arg1 configurationSettings:(id)arg2 completion:(id /* block */)arg3;
- (id)changeTagsByRequestKey;
- (id)completionQueue;
- (id /* block */)configurationCompletionHandler;
- (id)configurationResourcesByRequestKey;
- (id)configurationSettings;
- (id)endpointURL;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)requestDataForSettings:(id)arg1;
- (void)setChangeTagsByRequestKey:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setConfigurationCompletionHandler:(id /* block */)arg1;
- (void)setConfigurationResourcesByRequestKey:(id)arg1;
- (void)setConfigurationSettings:(id)arg1;
- (void)setEndpointURL:(id)arg1;
- (bool)validateOperation;

@end
