/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoAdStateManager : NSObject <SXVideoAdStateProviding, SXVideoAdStateReporting> {
    NFStateMachine * _stateMachine;
    id /* block */  onFailBlock;
    id /* block */  onFinishBlock;
    id /* block */  onLearnMoreBlock;
    id /* block */  onPauseBlock;
    id /* block */  onPlayBlock;
    id /* block */  onResumeBlock;
    id /* block */  onSkipBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=onFail:, nonatomic, copy) id /* block */ onFailBlock;
@property (setter=onFinish:, nonatomic, copy) id /* block */ onFinishBlock;
@property (setter=onLearnMore:, nonatomic, copy) id /* block */ onLearnMoreBlock;
@property (setter=onPause:, nonatomic, copy) id /* block */ onPauseBlock;
@property (setter=onPlay:, nonatomic, copy) id /* block */ onPlayBlock;
@property (setter=onResume:, nonatomic, copy) id /* block */ onResumeBlock;
@property (setter=onSkip:, nonatomic, copy) id /* block */ onSkipBlock;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)finish;
- (id)init;
- (void)learnMore;
- (void)onFail:(id /* block */)arg1;
- (id /* block */)onFailBlock;
- (void)onFinish:(id /* block */)arg1;
- (id /* block */)onFinishBlock;
- (void)onLearnMore:(id /* block */)arg1;
- (id /* block */)onLearnMoreBlock;
- (void)onPause:(id /* block */)arg1;
- (id /* block */)onPauseBlock;
- (void)onPlay:(id /* block */)arg1;
- (id /* block */)onPlayBlock;
- (void)onResume:(id /* block */)arg1;
- (id /* block */)onResumeBlock;
- (void)onSkip:(id /* block */)arg1;
- (id /* block */)onSkipBlock;
- (void)pause;
- (void)play;
- (void)resume;
- (void)skip;
- (id)stateMachine;

@end
