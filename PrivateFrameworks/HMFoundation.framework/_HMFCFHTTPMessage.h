/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface _HMFCFHTTPMessage : HMFObject {
    struct __CFHTTPMessage { } * _message;
}

@property (nonatomic, copy) NSData *body;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (nonatomic, readonly) struct __CFHTTPMessage { }*message;

+ (id)dateFormatter;
+ (id)requestWithMethod:(id)arg1 url:(id)arg2 protocolVersion:(long long)arg3;
+ (id)responseWithStatusCode:(long long)arg1 statusDescription:(id)arg2 protocolVersion:(long long)arg3;

- (id)body;
- (long long)contentLength;
- (id)contentType;
- (id)date;
- (void)dealloc;
- (id)headerFields;
- (id)init;
- (id)initWithMessageRef:(struct __CFHTTPMessage { }*)arg1;
- (struct __CFHTTPMessage { }*)message;
- (void)setBody:(id)arg1;
- (void)setContentLength:(long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (id)valueForHeaderField:(id)arg1;

@end
