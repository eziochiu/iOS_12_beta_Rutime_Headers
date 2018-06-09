/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFUserAuthenticationResponder : NSObject <SBFAuthenticationResponder> {
    id /* block */  _failureHandler;
    id /* block */  _invalidHandler;
    id /* block */  _successHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ failureHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidHandler;
@property (nonatomic, copy) id /* block */ successHandler;
@property (readonly) Class superclass;

+ (id)responderWithSuccessHandler:(id /* block */)arg1 failureHandler:(id /* block */)arg2 invalidHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)failureHandler;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (id)initWithSuccessHandler:(id /* block */)arg1 failureHandler:(id /* block */)arg2 invalidHandler:(id /* block */)arg3;
- (id /* block */)invalidHandler;
- (void)setFailureHandler:(id /* block */)arg1;
- (void)setInvalidHandler:(id /* block */)arg1;
- (void)setSuccessHandler:(id /* block */)arg1;
- (id /* block */)successHandler;

@end
