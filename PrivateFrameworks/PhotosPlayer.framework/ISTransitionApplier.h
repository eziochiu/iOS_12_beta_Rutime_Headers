/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISTransitionApplier : NSObject <CAAnimationDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultApplier;

- (void)_applyAlpha:(double)arg1 blurRadius:(double)arg2 toLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(id /* block */)arg5;
- (void)_applyScale:(double)arg1 toLayer:(id)arg2 withTransitionOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(id /* block */)arg5;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 containerLayer:(id)arg5 completion:(id /* block */)arg6;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 containerLayer:(id)arg5 completion:(id /* block */)arg6;

@end
