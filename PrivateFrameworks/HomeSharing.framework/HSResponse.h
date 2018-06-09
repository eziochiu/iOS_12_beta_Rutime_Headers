/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSResponse : NSObject {
    NSString * _MIMEType;
    NSError * _error;
    unsigned long long  _responseCode;
    NSData * _responseData;
    NSURL * _responseDataFileURL;
    NSDictionary * _responseHeaderFields;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long responseCode;
@property (nonatomic, readonly) NSData *responseData;
@property (nonatomic, copy) NSURL *responseDataFileURL;
@property (nonatomic, readonly) NSDictionary *responseHeaderFields;

+ (id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
+ (id)responseWithResponse:(id)arg1;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)description;
- (id)error;
- (id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
- (unsigned long long)responseCode;
- (id)responseData;
- (id)responseDataFileURL;
- (id)responseHeaderFields;
- (void)setResponseDataFileURL:(id)arg1;

@end
