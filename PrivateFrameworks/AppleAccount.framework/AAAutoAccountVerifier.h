/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
    ACAccount * _account;
    int  _attempts;
    bool  _canceled;
    id /* block */  _handler;
    NSOperationQueue * _requesterQueue;
    MSSearch * _search;
}

@property (nonatomic, retain) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resendVerificationEmailForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_validateToken:(id)arg1;
- (void)_verify;
- (id)account;
- (void)cancel;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (bool)search:(id)arg1 didFindResults:(id)arg2;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (void)sendVerificationEmail;
- (void)setAccount:(id)arg1;
- (void)verifyWithHandler:(id /* block */)arg1;

@end
