/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKMoveNoiseModifier : GKNoiseModifier {
    void _delta;
}

- (id)cloneModule;
- (id)init;
- (id)initWithDelta;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
