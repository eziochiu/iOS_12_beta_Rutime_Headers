/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRandomDistribution : NSObject <MPRandom> {
    long long  _highestValue;
    long long  _lowestValue;
    unsigned long long  _numberOfPossibleOutcomes;
    <MPRandom> * _source;
}

@property (nonatomic, readonly) long long highestValue;
@property (nonatomic, readonly) long long lowestValue;
@property (nonatomic, readonly) unsigned long long numberOfPossibleOutcomes;

- (void).cxx_destruct;
- (long long)highestValue;
- (id)init;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (long long)lowestValue;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (unsigned long long)numberOfPossibleOutcomes;

@end
