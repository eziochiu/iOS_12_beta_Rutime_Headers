/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechConnection : NSObject {
    <VSSpeechConnectionDelegate> * _delegate;
    VSSpeechConnectionDelegateWrapper * _delegateWrapper;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _threadSafeQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <VSSpeechConnectionDelegate> *delegate;
@property (nonatomic, retain) VSSpeechConnectionDelegateWrapper *delegateWrapper;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (nonatomic, readonly) VSSpeechRequest *request;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *threadSafeQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_connectionInvalidated;
- (id)_remoteObject;
- (id)_remoteObjectWithErrorHandler:(id /* block */)arg1;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)beginAudioPowerUpdateWithReply:(id /* block */)arg1;
- (void)cachePresynthesizedAudioRequest:(id)arg1;
- (oneway void)cleanUnusedAssets:(id /* block */)arg1;
- (id)concurrentSynthesisRequests;
- (void)continueCurrentSpeechRequest;
- (void)dealloc;
- (id)delegate;
- (id)delegateWrapper;
- (void)endAudioPowerUpdate;
- (void)getAutoDownloadedVoiceAssets:(id /* block */)arg1;
- (void)getLocalVoiceAssets:(id /* block */)arg1;
- (void)getLocalVoiceResources:(id /* block */)arg1;
- (void)getLogToFile:(id /* block */)arg1;
- (void)getTTSServerVoicesWithFilter:(id)arg1 reply:(id /* block */)arg2;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(id /* block */)arg5;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(id /* block */)arg2;
- (id)identifier;
- (id)init;
- (bool)isSystemSpeaking;
- (bool)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1;
- (id)presynthesizedAudioRequest;
- (void)prewarmIfNeededWithRequest:(id)arg1;
- (id)request;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateWrapper:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLogToFile:(bool)arg1;
- (void)setPresynthesizedAudioRequest:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setThreadSafeQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startPresynthesizedAudioRequest:(id)arg1;
- (void)startSpeechRequest:(id)arg1;
- (void)startSynthesisRequest:(id)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1;
- (void)stopPresynthesizedAudioRequest;
- (id)threadSafeQueue;
- (void)updateWithConnectionIdentifier:(id)arg1;
- (id)xpcConnection;

@end
