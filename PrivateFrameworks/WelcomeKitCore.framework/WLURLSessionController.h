/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLURLSessionController : NSObject <NSURLSessionDelegate> {
    WLDeviceAuthentication * _auth;
    NSOperationQueue * _delegateOperationQueue;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURLSession *urlSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)initWithAuthentication:(id)arg1;
- (void)invalidate;
- (id)urlSession;

@end
