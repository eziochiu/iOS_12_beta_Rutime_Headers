/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {
    NSData * _bodyData;
    SSMetricsPageEvent * _metricsPageEvent;
    NSHTTPURLResponse * _urlResponse;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSHTTPURLResponse *URLResponse;
@property (nonatomic, readonly) NSData *bodyData;
@property (nonatomic, readonly) NSData *databaseEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long expectedContentLength;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SSMetricsPageEvent *metricsPageEvent;
@property (nonatomic, readonly) NSData *radio_decompressedBodyData;
@property (nonatomic, readonly) bool ssv_isExpiredResponse;
@property (nonatomic, readonly) NSString *storeCorrelationID;
@property (nonatomic, readonly) NSString *suggestedFilename;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textEncodingName;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)MIMEType;
- (id)URL;
- (id)URLResponse;
- (id)allHeaderFields;
- (id)bodyData;
- (id)copyXPCEncoding;
- (id)databaseEncoding;
- (void)dealloc;
- (long long)expectedContentLength;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)metricsPageEvent;
- (void)setMetricsPageEvent:(id)arg1;
- (bool)ssv_isExpiredResponse;
- (long long)statusCode;
- (id)storeCorrelationID;
- (id)suggestedFilename;
- (id)textEncodingName;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

- (id)radio_decompressedBodyData;

@end
