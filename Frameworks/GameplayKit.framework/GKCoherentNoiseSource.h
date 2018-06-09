/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKCoherentNoiseSource : GKNoiseSource {
    double  _frequency;
    double  _lacunarity;
    long long  _octaveCount;
    int  _seed;
}

@property (nonatomic) double frequency;
@property (nonatomic) double lacunarity;
@property (nonatomic) long long octaveCount;
@property (nonatomic) int seed;

- (id)cloneModule;
- (double)frequency;
- (double)lacunarity;
- (long long)octaveCount;
- (int)seed;
- (void)setFrequency:(double)arg1;
- (void)setLacunarity:(double)arg1;
- (void)setOctaveCount:(long long)arg1;
- (void)setSeed:(int)arg1;
- (double)valueAt;

@end
