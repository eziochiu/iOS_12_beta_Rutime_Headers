/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlaybackTransitionCoordinatorStateMachineContext : NSObject <NFStateMachineContextType> {
    <SVPlaybackTransitionContext> * _context;
}

@property (nonatomic, readonly) <SVPlaybackTransitionContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)initWithTransitionContext:(id)arg1;

@end
