/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAnimationDelegate : NSObject {
    struct PlatformCALayer { int (**x1)(); unsigned int x2; int x3; unsigned long long x4; struct RetainPtr<CALayer> { void *x_5_1_1; } x5; struct PlatformCALayerClient {} *x6; } * m_owner;
}

- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)setOwner:(struct PlatformCALayer { int (**x1)(); unsigned int x2; int x3; unsigned long long x4; struct RetainPtr<CALayer> { void *x_5_1_1; } x5; struct PlatformCALayerClient {} *x6; }*)arg1;

@end
