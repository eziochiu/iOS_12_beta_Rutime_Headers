/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTTextDependentSpeakerRecognizer : NSObject <EARPSRAudioProcessorDelegate> {
    NSString * _assetHash;
    <VTTextDependentSpeakerRecognizerDelegate> * _delegate;
    bool  _isTdPsrAbleToProcess;
    float  _lastRequestSatScore;
    void * _novDetect;
    unsigned long long  _numSamplesProecssed;
    NSMutableData * _psrAudioDataForLogging;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _resourcePath;
    NSString * _satDirectory;
    NSData * _speakerVector;
    EARPSRAudioProcessor * _speakerVectorGenerator;
    NSObject<OS_dispatch_queue> * _stateSerialQueue;
    NSString * _tdSATModelDirPath;
    NSString * _tdSATModelFilePath;
}

@property (nonatomic, retain) NSString *assetHash;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VTTextDependentSpeakerRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long getSATVectorCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) float lastRequestSatScore;
@property (nonatomic) unsigned long long numSamplesProecssed;
@property (nonatomic, retain) NSMutableData *psrAudioDataForLogging;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *resourcePath;
@property (nonatomic, retain) NSString *satDirectory;
@property (nonatomic, retain) NSData *speakerVector;
@property (nonatomic, retain) EARPSRAudioProcessor *speakerVectorGenerator;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateSerialQueue;
@property (readonly) Class superclass;
@property (nonatomic) bool tdPsrCanProcessRequest;
@property (nonatomic, retain) NSString *tdSATModelDirPath;
@property (nonatomic, retain) NSString *tdSATModelFilePath;

+ (void)_createDirectoryIfDoesNotExist:(id)arg1;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (bool)psrTdAssetExistsAtResourcePath:(id)arg1;

- (void).cxx_destruct;
- (double)_getFloatValueForNDAPIConfigOption:(id)arg1 defaultValue:(double)arg2;
- (int)_getSATVectorCount;
- (id)_getValueForNDAPIConfigOption:(id)arg1;
- (id)assetHash;
- (void)dealloc;
- (id)delegate;
- (void)deleteVectorAtIndex:(int)arg1;
- (void)endAudio;
- (double)getCombinationWeight;
- (long long)getSATVectorCount;
- (double)getThresholdSAT;
- (id)initWithResourcePath:(id)arg1 satDirectory:(id)arg2 assetHash:(id)arg3 shouldCreateModelDir:(bool)arg4 delegate:(id)arg5;
- (float)lastRequestSatScore;
- (void)logWithAudioFilepath:(id)arg1;
- (unsigned long long)numSamplesProecssed;
- (void)processAudio:(const short*)arg1 numSamples:(unsigned long long)arg2;
- (id)psrAudioDataForLogging;
- (void)psrAudioProcessor:(id)arg1 hasResult:(id)arg2 numElements:(unsigned long long)arg3;
- (id)queue;
- (void)removeInvalidSATModel;
- (void)resetForNewRequest;
- (id)resourcePath;
- (id)satDirectory;
- (void)setAssetHash:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastRequestSatScore:(float)arg1;
- (void)setNumSamplesProecssed:(unsigned long long)arg1;
- (void)setPsrAudioDataForLogging:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setSatDirectory:(id)arg1;
- (void)setSpeakerVector:(id)arg1;
- (void)setSpeakerVectorGenerator:(id)arg1;
- (void)setStateSerialQueue:(id)arg1;
- (void)setTdPsrCanProcessRequest:(bool)arg1;
- (void)setTdSATModelDirPath:(id)arg1;
- (void)setTdSATModelFilePath:(id)arg1;
- (id)speakerVector;
- (id)speakerVectorGenerator;
- (id)stateSerialQueue;
- (bool)tdPsrCanProcessRequest;
- (id)tdSATModelDirPath;
- (id)tdSATModelFilePath;
- (void)updateSAT;

@end
