/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSMyriadPHash : NSObject <CSSelfTriggerDetectorDelegate, CSVoiceTriggerDelegate> {
    short  _signalEstimate;
    unsigned char  _signalFractional;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) short signalEstimate;
@property (nonatomic) unsigned char signalFractional;
@property (readonly) Class superclass;

+ (id)lastHash;

- (id)_audioLogDirectory;
- (id)_generateMyriadInfo:(unsigned long long)arg1 score:(float)arg2 channel:(unsigned long long)arg3 absoluteTime:(unsigned long long)arg4;
- (id)initWithAudioBuffer:(id)arg1;
- (unsigned short)pHash:(float*)arg1 length:(int)arg2;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;
- (void)setSignalEstimate:(short)arg1;
- (void)setSignalFractional:(unsigned char)arg1;
- (short)signalEstimate;
- (unsigned char)signalFractional;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;

@end
