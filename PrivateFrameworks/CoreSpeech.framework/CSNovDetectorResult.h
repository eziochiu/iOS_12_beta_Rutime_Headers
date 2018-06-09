/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSNovDetectorResult : NSObject {
    unsigned long long  _bestEnd;
    unsigned long long  _bestPhrase;
    float  _bestScore;
    unsigned long long  _bestStart;
    bool  _earlyWarning;
    bool  _isRescoring;
    unsigned long long  _sampleFed;
}

@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) unsigned long long bestPhrase;
@property (nonatomic) float bestScore;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) bool earlyWarning;
@property (nonatomic) bool isRescoring;
@property (nonatomic) unsigned long long sampleFed;

- (unsigned long long)bestEnd;
- (unsigned long long)bestPhrase;
- (float)bestScore;
- (unsigned long long)bestStart;
- (id)dictionary;
- (bool)earlyWarning;
- (id)initWithResult:(id)arg1;
- (bool)isRescoring;
- (unsigned long long)sampleFed;
- (void)setBestEnd:(unsigned long long)arg1;
- (void)setBestPhrase:(unsigned long long)arg1;
- (void)setBestScore:(float)arg1;
- (void)setBestStart:(unsigned long long)arg1;
- (void)setEarlyWarning:(bool)arg1;
- (void)setIsRescoring:(bool)arg1;
- (void)setSampleFed:(unsigned long long)arg1;

@end
