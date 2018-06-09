/* made by EzioChiu.
 */

@protocol HMDFairPlaySAPSessionDelegate <NSObject>

@required

- (void)session:(void *)arg1 didReceiveClientExchangeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: HMDFairPlaySAPSession *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)session:(void *)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: HMDFairPlaySAPSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@optional

- (void)session:(HMDFairPlaySAPSession *)arg1 didCloseWithError:(NSError *)arg2;

@end
