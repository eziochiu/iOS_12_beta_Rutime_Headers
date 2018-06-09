/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal {
    NSMutableData * _bodyData;
    struct __CFReadStream { } * _bodyStream;
    _HMFCFHTTPServerConnection * _connection;
    struct _CFHTTPServerRequest { } * _requestRef;
}

@property (nonatomic, readonly) NSMutableData *bodyData;
@property (nonatomic, readonly) struct __CFReadStream { }*bodyStream;
@property (nonatomic, readonly) _HMFCFHTTPServerConnection *connection;
@property (nonatomic, readonly) struct _CFHTTPServerRequest { }*requestRef;

- (void).cxx_destruct;
- (id)URL;
- (void)appendBodyData:(id)arg1;
- (id)body;
- (id)bodyData;
- (struct __CFReadStream { }*)bodyStream;
- (id)connection;
- (void)dealloc;
- (id)headerFields;
- (id)init;
- (id)initWithConnection:(id)arg1 requestRef:(struct _CFHTTPServerRequest { }*)arg2;
- (id)method;
- (struct _CFHTTPServerRequest { }*)requestRef;
- (id)responseWithStatusCode:(long long)arg1;
- (void)setBody:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setURL:(id)arg1;

@end
