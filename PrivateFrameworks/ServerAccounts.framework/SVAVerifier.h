/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerAccounts.framework/ServerAccounts
 */

@interface SVAVerifier : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    bool  _canceledByUser;
    id /* block */  _completionBlock;
    NSURLSessionDataTask * _dataTask;
    NSString * _password;
    NSMutableData * _responseData;
    NSString * _serverAddress;
    NSURLSession * _session;
    NSArray * _trustedCertificates;
    NSString * _userName;
}

@property (nonatomic) bool canceledByUser;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSURLSessionDataTask *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSString *serverAddress;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *trustedCertificates;
@property (nonatomic, retain) NSString *userName;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)canceledByUser;
- (id /* block */)completionBlock;
- (id)dataTask;
- (id)dataclassPropertiesFromProfilesDictionary:(id)arg1;
- (void)handleAuthenticationChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)password;
- (id)responseData;
- (id)serverAccountsErrorForURLSessionError:(id)arg1;
- (id)serverAddress;
- (id)session;
- (void)setCanceledByUser:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDataTask:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setServerAddress:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTrustedCertificates:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)trustedCertificates;
- (id)userName;
- (void)verifyAccount:(id)arg1 withTrustedCertificates:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)verifyAccount:(id)arg1 withTrustedCertificates:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
