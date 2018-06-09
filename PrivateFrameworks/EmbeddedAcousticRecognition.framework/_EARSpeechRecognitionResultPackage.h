/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying> {
    _EARAudioAnalytics * _audioAnalytics;
    bool  _isFinal;
    _EARSpeechRecognition * _preITNRecognition;
    _EARSpeechRecognition * _recognition;
    bool  _recognitionIsFormatted;
}

@property (nonatomic, readonly, copy) _EARAudioAnalytics *audioAnalytics;
@property (nonatomic, readonly) bool isFinal;
@property (nonatomic, readonly, copy) _EARSpeechRecognition *preITNRecognition;
@property (nonatomic, readonly, copy) _EARSpeechRecognition *recognition;
@property (nonatomic, readonly) bool recognitionIsFormatted;

- (void).cxx_destruct;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(bool)arg3 isFinal:(bool)arg4;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(bool)arg3 isFinal:(bool)arg4 audioAnalytics:(id)arg5;
- (id)audioAnalytics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isFinal;
- (id)nBestResults;
- (id)preITNRecognition;
- (id)recognition;
- (bool)recognitionIsFormatted;

@end