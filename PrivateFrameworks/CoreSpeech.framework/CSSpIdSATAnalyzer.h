/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpIdSATAnalyzer : NSObject {
    void * _novDetect;
    NSString * _satAudioDir;
    NSString * _satModelDir;
    unsigned long long  _satRunMode;
    NSString * _satRunModeStr;
    unsigned long long  _spIdType;
    NSString * _spIdTypeStr;
    NSString * _userName;
}

@property (nonatomic, retain) NSString *satAudioDir;
@property (nonatomic, retain) NSString *satModelDir;
@property (nonatomic) unsigned long long satRunMode;
@property (nonatomic, retain) NSString *satRunModeStr;
@property (nonatomic, readonly) float satScoreThreshold;
@property (nonatomic) unsigned long long spIdType;
@property (nonatomic, retain) NSString *spIdTypeStr;
@property (nonatomic, readonly) NSString *sysConfigFilepath;
@property (nonatomic, readonly) NSString *sysConfigRoot;
@property (nonatomic, retain) NSString *userName;

+ (id)createSATAnalyzersForCSSpIdType:(unsigned long long)arg1 withAsset:(id)arg2;

- (void).cxx_destruct;
- (double)_getFloatValueForNDAPIConfigOption:(id)arg1 defaultValue:(double)arg2;
- (id)_getValueForNDAPIConfigOption:(id)arg1;
- (float)analyzeSpeakerVector:(id)arg1 numVectors:(unsigned long long)arg2;
- (void)dealloc;
- (void)deleteVectorAtIndex:(int)arg1;
- (id)initWithCSSpIdType:(unsigned long long)arg1 forRunMode:(unsigned long long)arg2 profile:(id)arg3 locale:(id)arg4 assetResourcePath:(id)arg5 assetHash:(id)arg6;
- (id)satAudioDir;
- (id)satModelDir;
- (unsigned long long)satRunMode;
- (id)satRunModeStr;
- (float)satScoreThreshold;
- (void)setSatAudioDir:(id)arg1;
- (void)setSatModelDir:(id)arg1;
- (void)setSatRunMode:(unsigned long long)arg1;
- (void)setSatRunModeStr:(id)arg1;
- (void)setSpIdType:(unsigned long long)arg1;
- (void)setSpIdTypeStr:(id)arg1;
- (void)setUserName:(id)arg1;
- (unsigned long long)spIdType;
- (id)spIdTypeStr;
- (id)sysConfigFilepath;
- (id)sysConfigRoot;
- (void)updateSAT;
- (id)userName;

@end
