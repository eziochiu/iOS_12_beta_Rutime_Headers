/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPStringRandomizer : NSObject {
    unsigned long long  _algorithm;
    <_DPStringRandomizer> * _randomizer;
}

@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) <_DPStringRandomizer> *randomizer;

+ (id)stringRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4;

- (void).cxx_destruct;
- (unsigned long long)algorithm;
- (id)description;
- (id)init;
- (id)initWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4;
- (id)randomizer;

@end
