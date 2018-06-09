/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTURLRequestMessage : FTIDSMessage <NSCopying> {
    NSData * _requestBody;
    NSDictionary * _requestHeaders;
    NSDictionary * _requestStringParams;
    unsigned long long  _requestType;
    NSURL * _requestURL;
    NSData * _responseBody;
    NSDictionary * _responseHeaders;
    NSNumber * _responseStatusCode;
    NSDictionary * _timingData;
}

@property (nonatomic, copy) NSData *requestBody;
@property (nonatomic, copy) NSDictionary *requestHeaders;
@property (nonatomic, copy) NSDictionary *requestStringParams;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, copy) NSURL *requestURL;
@property (nonatomic, copy) NSData *responseBody;
@property (nonatomic, copy) NSDictionary *responseHeaders;
@property (nonatomic, copy) NSNumber *responseStatusCode;
@property (nonatomic, copy) NSDictionary *timingData;

- (void).cxx_destruct;
- (id)additionalMessageHeaders;
- (id)additionalQueryStringParameters;
- (bool)allowDualDelivery;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)handleResponseBody:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (void)handleResponseStatus:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 type:(unsigned long long)arg2 headers:(id)arg3 stringParams:(id)arg4 body:(id)arg5;
- (bool)isIDSMessage;
- (id)messageBodyDataOverride;
- (id)requestBody;
- (id)requestHeaders;
- (id)requestStringParams;
- (unsigned long long)requestType;
- (id)requestURL;
- (id)responseBody;
- (id)responseHeaders;
- (id)responseStatusCode;
- (void)setRequestBody:(id)arg1;
- (void)setRequestHeaders:(id)arg1;
- (void)setRequestStringParams:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setResponseBody:(id)arg1;
- (void)setResponseHeaders:(id)arg1;
- (void)setResponseStatusCode:(id)arg1;
- (void)setTimingData:(id)arg1;
- (id)timingData;
- (bool)wantsBodySignature;
- (bool)wantsHTTPGet;
- (bool)wantsIDSServer;
- (bool)wantsIDSSignatures;
- (bool)wantsManagedRetries;

@end
