/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlaybackTransitionContext : NSObject <SVPlaybackTransitionContext> {
    id /* block */  _completionBlock;
    <SVVideo> * _fromVideo;
    <SVVideo> * _toVideo;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideo> *fromVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideo> *toVideo;

- (void).cxx_destruct;
- (void)completeTransition:(bool)arg1;
- (id /* block */)completionBlock;
- (id)fromVideo;
- (id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)toVideo;

@end
