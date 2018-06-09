/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPMessageRequest : HTSHTTPMessage {
    NSString * _requestMethod;
    NSURL * _requestURL;
}

@property (nonatomic, copy) NSString *requestMethod;
@property (nonatomic, copy) NSURL *requestURL;

- (struct __CFHTTPMessage { }*)copyMessage;
- (void)dealloc;
- (id)initWithRequest:(struct __CFHTTPMessage { }*)arg1;
- (id)requestMethod;
- (id)requestURL;
- (bool)responseCanUseGZip;
- (id)responseWithStatus:(int)arg1;
- (void)setRequestMethod:(id)arg1;
- (void)setRequestURL:(id)arg1;

@end
