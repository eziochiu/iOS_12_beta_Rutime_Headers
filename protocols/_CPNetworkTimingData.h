/* made by EzioChiu.
 */

@protocol _CPNetworkTimingData <NSObject>

@required

- (bool)QUICWhitelistedDomain;
- (bool)TFOSuccess;
- (double)connectEnd;
- (double)connectStart;
- (bool)connectionRace;
- (bool)connectionReused;
- (NSString *)connectionUUID;
- (double)domainLookupEnd;
- (double)domainLookupStart;
- (double)fetchStart;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)interfaceIdentifier;
- (NSData *)jsonData;
- (NSString *)networkProtocolName;
- (NSData *)peerAddress;
- (unsigned int)redirectCount;
- (unsigned int)redirectCountW3C;
- (double)redirectEnd;
- (double)redirectStart;
- (double)requestEnd;
- (unsigned int)requestHeaderSize;
- (double)requestStart;
- (unsigned int)responseBodyBytesDecoded;
- (unsigned int)responseBodyBytesReceived;
- (double)responseEnd;
- (unsigned int)responseHeaderSize;
- (double)responseStart;
- (double)secureConnectStart;
- (void)setConnectEnd:(double)arg1;
- (void)setConnectStart:(double)arg1;
- (void)setConnectionRace:(bool)arg1;
- (void)setConnectionReused:(bool)arg1;
- (void)setConnectionUUID:(NSString *)arg1;
- (void)setDomainLookupEnd:(double)arg1;
- (void)setDomainLookupStart:(double)arg1;
- (void)setFetchStart:(double)arg1;
- (void)setInterfaceIdentifier:(NSString *)arg1;
- (void)setNetworkProtocolName:(NSString *)arg1;
- (void)setPeerAddress:(NSData *)arg1;
- (void)setQUICWhitelistedDomain:(bool)arg1;
- (void)setRedirectCount:(unsigned int)arg1;
- (void)setRedirectCountW3C:(unsigned int)arg1;
- (void)setRedirectEnd:(double)arg1;
- (void)setRedirectStart:(double)arg1;
- (void)setRequestEnd:(double)arg1;
- (void)setRequestHeaderSize:(unsigned int)arg1;
- (void)setRequestStart:(double)arg1;
- (void)setResponseBodyBytesDecoded:(unsigned int)arg1;
- (void)setResponseBodyBytesReceived:(unsigned int)arg1;
- (void)setResponseEnd:(double)arg1;
- (void)setResponseHeaderSize:(unsigned int)arg1;
- (void)setResponseStart:(double)arg1;
- (void)setSecureConnectStart:(double)arg1;
- (void)setStartTimeCounts:(_CPTCPInfo *)arg1;
- (void)setStopTimeCounts:(_CPTCPInfo *)arg1;
- (void)setTFOSuccess:(bool)arg1;
- (void)setTimingDataInit:(double)arg1;
- (void)setTuscany:(_CPTuscanyConnectionInfo *)arg1;
- (_CPTCPInfo *)startTimeCounts;
- (_CPTCPInfo *)stopTimeCounts;
- (double)timingDataInit;
- (_CPTuscanyConnectionInfo *)tuscany;

@end
