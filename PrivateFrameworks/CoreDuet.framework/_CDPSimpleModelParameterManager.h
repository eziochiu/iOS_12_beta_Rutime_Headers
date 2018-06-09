/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPSimpleModelParameterManager : NSObject <_CDSocialInteractionAdvisorTuningDelegate> {
    _CDPSimpleModelParameterManagerAccountState * _accountState;
    NSString * _accountStateKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _CDPModelTuningState *lastTuningState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountIdentifierForSettings:(id)arg1;
- (void)getLambda:(float*)arg1 w0:(float*)arg2 threshold:(float*)arg3;
- (id)initWithSettings:(id)arg1;
- (id)lastTuningState;
- (void)loadAccountState;
- (void)modelTuner:(id)arg1 heartBeatWithlambda:(float)arg2 w0:(float)arg3 threshold:(float)arg4 score:(float)arg5 progress:(float)arg6;
- (void)modelTunerWillResume:(id)arg1;
- (void)modelTunerWillStop:(id)arg1;
- (void)saveAccountState;

@end
