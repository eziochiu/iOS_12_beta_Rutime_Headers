/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface LZHbEqKhcixce9PA : NSObject <pjRPsXEyBJiXQnH9> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)computeScoresUsingSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)getScoreMessageWithIdentifier:(id)arg1 hostChallenge:(id)arg2 challengeResponse:(id)arg3 seid:(id)arg4 nonce:(id)arg5 completion:(id /* block */)arg6;
- (id)initWithServiceName:(id)arg1;

@end
