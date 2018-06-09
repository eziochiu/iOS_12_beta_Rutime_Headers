/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATHTTPMessageParser : NSObject {
    <CATHTTPMessageParserDelegate> * _delegate;
    unsigned long long  mCurrentBytesReceived;
    NSDictionary * mCurrentHeaderFields;
    struct __CFHTTPMessage { } * mCurrentMessage;
}

@property (nonatomic) <CATHTTPMessageParserDelegate> *delegate;

+ (id)encodeRequestData:(id)arg1;
+ (id)responseHeaderForContentWithLength:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)appendBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidReceiveRequestData:(id)arg1;
- (void)delegateDidReceiveRequestWithURL:(id)arg1;
- (void)delegateDidReceiveResponseData:(id)arg1 moreComing:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end
