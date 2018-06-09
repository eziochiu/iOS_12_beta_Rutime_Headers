/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsStyleCoordinator : NSObject {
    NSMutableArray * _animations;
    NSMutableArray * _completions;
}

- (void).cxx_destruct;
- (void)animateAlongsideTransition:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performAnimations;
- (void)performCompletions;

@end
