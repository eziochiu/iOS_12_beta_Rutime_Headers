/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUAssertionHandler : NSAssertionHandler {
    <NUAssertionPolicyHandler> * _policy;
}

@property (retain) <NUAssertionPolicyHandler> *policy;

+ (id)currentHandler;
+ (bool)runningUnitTests;

- (void).cxx_destruct;
- (void)continueAfterAssertInFunction:(id)arg1 file:(id)arg2 lineNumber:(unsigned long long)arg3 description:(id)arg4 arguments:(char *)arg5;
- (id)defaultPolicy;
- (id)defaultTestingPolicy;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(unsigned long long)arg3 description:(id)arg4 arguments:(char *)arg5;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;
- (id)init;
- (id)newAssertionInfoInMethod:(SEL)arg1 object:(id)arg2 function:(id)arg3 file:(id)arg4 lineNumber:(unsigned long long)arg5 description:(id)arg6 arguments:(char *)arg7;
- (id)policy;
- (void)setPolicy:(id)arg1;

@end
