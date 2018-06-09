/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _AnimationManagerRunner : NSObject <VKAnimationRunner> {
    struct AnimationManager { int (**x1)(); struct _retain_ptr<_AnimationManagerRunner *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_2_1_1)(); id x_2_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_2_1_3; const void*x_2_1_4; void*x_2_1_5; void*x_2_1_6; int x_2_1_7; in void*x_2_1_8; out unsigned int x_2_1_9/* : ? */; void*x_2_1_10; BOOL x_2_1_11; void*x_2_1_12; } x2; struct _release_objc { } x3; } * _animationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (id)initWithAnimationManager:(struct AnimationManager { int (**x1)(); struct _retain_ptr<_AnimationManagerRunner *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_2_1_1)(); id x_2_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_2_1_3; const void*x_2_1_4; void*x_2_1_5; void*x_2_1_6; int x_2_1_7; in void*x_2_1_8; out unsigned int x_2_1_9/* : ? */; void*x_2_1_10; BOOL x_2_1_11; void*x_2_1_12; } x2; struct _release_objc { } x3; }*)arg1;

@end
