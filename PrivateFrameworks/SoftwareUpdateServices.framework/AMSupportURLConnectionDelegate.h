/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface AMSupportURLConnectionDelegate : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate> {
    NSMutableData * _data;
    NSError * _error;
    NSDictionary * options;
    bool  requestComplete;
    NSURLResponse * response;
}

@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)error;
- (id)init;
- (id)initWithData:(id)arg1 Options:(id)arg2;
- (id)waitForResponseOrError:(id*)arg1;

@end
