/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding> {
    NSURLAuthenticationChallengeInternal * _internal;
}

@property (readonly, copy) NSError *error;
@property (readonly, copy) NSURLResponse *failureResponse;
@property (readonly) long long previousFailureCount;
@property (readonly, copy) NSURLCredential *proposedCredential;
@property (readonly, copy) NSURLProtectionSpace *protectionSpace;
@property (readonly, retain) <NSURLAuthenticationChallengeSender> *sender;

+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge { }*)arg1 sender:(id)arg2;
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge { }*)arg1 sender:(id)arg2;
+ (bool)supportsSecureCoding;

- (struct _CFURLAuthChallenge { }*)_createCFAuthChallenge;
- (id)_initWithCFAuthChallenge:(struct _CFURLAuthChallenge { }*)arg1 sender:(id)arg2;
- (id)_initWithListOfProtectionSpaces:(id)arg1 CurrentProtectionSpace:(id)arg2 proposedCredential:(id)arg3 previousFailureCount:(long long)arg4 failureResponse:(id)arg5 error:(id)arg6 sender:(id)arg7;
- (bool)_isPasswordBasedChallenge;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)failureResponse;
- (id)init;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (long long)previousFailureCount;
- (id)proposedCredential;
- (id)protectionSpace;
- (id)sender;
- (void)setSender:(id)arg1;

@end