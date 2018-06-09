/* made by EzioChiu.
 */

@protocol _CPEndNetworkSearchFeedback <NSObject>

@required

- (double)duration;
- (NSString *)fbq;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)parsecStatus;
- (NSString *)partialClientIp;
- (long long)responseSize;
- (void)setDuration:(double)arg1;
- (void)setFbq:(NSString *)arg1;
- (void)setParsecStatus:(NSString *)arg1;
- (void)setPartialClientIp:(NSString *)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTimingData:(_CPNetworkTimingData *)arg1;
- (void)setUuid:(NSString *)arg1;
- (int)statusCode;
- (unsigned long long)timestamp;
- (_CPNetworkTimingData *)timingData;
- (NSString *)uuid;

@end
