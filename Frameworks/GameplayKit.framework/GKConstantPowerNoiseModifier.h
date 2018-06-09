/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKConstantPowerNoiseModifier : GKNoiseModifier {
    double  _power;
}

- (id)cloneModule;
- (id)init;
- (id)initWithConstantPower:(double)arg1;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
