/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechInternalSettings : NSObject {
    bool  _internalBuild;
    NSUserDefaults * _internalDefaults;
    bool  _isInternalBuild;
}

@property (nonatomic) bool disableAssetCleaning;
@property (nonatomic) bool disableCache;
@property (nonatomic) bool disableNewBackend;
@property (nonatomic) bool disableServerTimeoutFallback;
@property (nonatomic) bool enableAudioDump;
@property (nonatomic) bool enableHomePodSimulation;
@property (nonatomic) bool enableLocalVoices;
@property (nonatomic) bool forceServerTTS;
@property (nonatomic, readonly) bool internalBuild;
@property (nonatomic, retain) NSUserDefaults *internalDefaults;
@property (nonatomic) bool isInternalBuild;
@property (nonatomic) float serverTTSTimeout;

+ (id)standardInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)disableAssetCleaning;
- (bool)disableCache;
- (bool)disableNewBackend;
- (bool)disableServerTimeoutFallback;
- (bool)enableAudioDump;
- (bool)enableHomePodSimulation;
- (bool)enableLocalVoices;
- (bool)forceServerTTS;
- (id)init;
- (bool)internalBuild;
- (id)internalDefaults;
- (bool)isInternalBuild;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)serverTTSTimeout;
- (void)setDisableAssetCleaning:(bool)arg1;
- (void)setDisableCache:(bool)arg1;
- (void)setDisableNewBackend:(bool)arg1;
- (void)setDisableServerTimeoutFallback:(bool)arg1;
- (void)setEnableAudioDump:(bool)arg1;
- (void)setEnableHomePodSimulation:(bool)arg1;
- (void)setEnableLocalVoices:(bool)arg1;
- (void)setForceServerTTS:(bool)arg1;
- (void)setInternalDefaults:(id)arg1;
- (void)setIsInternalBuild:(bool)arg1;
- (void)setServerTTSTimeout:(float)arg1;

@end
