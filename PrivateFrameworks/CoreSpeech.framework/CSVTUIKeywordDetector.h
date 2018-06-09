/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVTUIKeywordDetector : NSObject {
    CSAudioCircularBuffer * _audioBuffer;
    CSAsset * _currentAsset;
    unsigned long long  _extraSamplesAtStart;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzer;
    float  _keywordThreshold;
    NSString * _languageCode;
    float  _lastKeywordScore;
}

- (void).cxx_destruct;
- (unsigned long long)_sampleLengthFrom:(unsigned int)arg1 To:(unsigned int)arg2;
- (id)analyze:(id)arg1;
- (id)initWithLanguageCode:(id)arg1;
- (void)reset;
- (id)triggeredUtterance:(id)arg1;

@end