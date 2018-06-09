/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKMersenneTwisterRandomSource : GKRandomSource {
    struct mersenne_twister_engine<unsigned long long, 64, 312, 156, 31, 13043109905998158313, 29, 6148914691236517205, 17, 8202884508482404352, 37, 18444473444759240704, 43, 6364136223846793005> { 
        unsigned long long __x_[312]; 
        unsigned long long __i_; 
    }  _engine;
    unsigned long long  _seed;
}

@property (nonatomic) unsigned long long seed;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(unsigned long long)arg1;
- (unsigned long long)nextBits:(int)arg1;
- (bool)nextBool;
- (long long)nextInt;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (float)nextUniform;
- (unsigned long long)seed;
- (void)setSeed:(unsigned long long)arg1;

@end
