/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationRandomGenerator : NSObject <TSDAnimationRandomGenerator> {
    struct TSCERandGenerator { struct TSCECellRandSeed { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { struct CC_SHA1state_st { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8[16]; int x_1_2_9; } x_2_1_1; unsigned char x_2_1_2[20]; unsigned char x_2_1_3[20]; unsigned int x_2_1_4; } x2; } * _randGenerator;
    unsigned long long  _seed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double randomDouble;
@property (nonatomic) unsigned long long seed;
@property (readonly) Class superclass;

+ (unsigned int)generateNewSeed;
+ (id)randomGeneratorFromPluginContext:(id)arg1;

- (struct { float x1; float x2; })GLPoint2DRandomPoint;
- (struct { float x1; float x2; float x3; })GLPoint3DRandomDirection;
- (struct { float x1; float x2; float x3; })GLPoint3DRandomPoint;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DRandomPoint;
- (void)dealloc;
- (double)doubleBetween:(double)arg1 :(double)arg2;
- (id)initWithSeed:(id)arg1;
- (long long)intBetween:(long long)arg1 :(long long)arg2;
- (double)randomDouble;
- (unsigned long long)seed;
- (void)setSeed:(unsigned long long)arg1;

@end
