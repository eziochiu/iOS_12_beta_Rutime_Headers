/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSTCPIOCONNECTION__ : NSObject <NSURLSessionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)__make_private_streamsForHost:(id)arg1 port:(int)arg2 secure:(bool)arg3 trustChallenge:(int (*)arg4 inputStream:(id*)arg5 outputStream:(id*)arg6 tcpio:(bool)arg7;

- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;

@end
