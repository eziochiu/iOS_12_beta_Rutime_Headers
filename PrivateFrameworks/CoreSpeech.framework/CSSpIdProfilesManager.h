/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpIdProfilesManager : NSObject <CSSpIdSpeakerVectorGeneratorDelegate> {
    unsigned long long  _currOp;
    unsigned long long  _currUttLengthInMs;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpIdSATAnalyzer * _satAnalyzer;
    NSObject<OS_dispatch_semaphore> * _spIdSema;
    CSSpIdSpeakerVectorGenerator * _spIdSvg;
}

@property (nonatomic) unsigned long long currOp;
@property (nonatomic) unsigned long long currUttLengthInMs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSSpIdSATAnalyzer *satAnalyzer;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *spIdSema;
@property (nonatomic, retain) CSSpIdSpeakerVectorGenerator *spIdSvg;
@property (readonly) Class superclass;

+ (bool)_isDirectory:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_generateSpIdProfileForCSSpIdTypeUrl:(id)arg1 profileID:(id)arg2 localeStr:(id)arg3;
- (id)_generateSpIdProfileFromDir:(id)arg1 forLocale:(id)arg2;
- (id)_getContentsOfDirectory:(id)arg1;
- (id)_processAudioFile:(id)arg1 ofSpIdType:(unsigned long long)arg2 withAsset:(id)arg3;
- (unsigned long long)currOp;
- (unsigned long long)currUttLengthInMs;
- (void)deleteSpeakerIdProfileWithIdentifier:(id)arg1 forLocale:(id)arg2 completion:(id /* block */)arg3;
- (void)importSpIdProfileFromDir:(id)arg1 forLocale:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)queue;
- (void)retrainSpIdProfilesForLocale:(id)arg1 completion:(id /* block */)arg2;
- (id)satAnalyzer;
- (void)setCurrOp:(unsigned long long)arg1;
- (void)setCurrUttLengthInMs:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSatAnalyzer:(id)arg1;
- (void)setSpIdSema:(id)arg1;
- (void)setSpIdSvg:(id)arg1;
- (id)spIdSema;
- (id)spIdSvg;
- (void)speakerVectorGenerator:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;

@end
