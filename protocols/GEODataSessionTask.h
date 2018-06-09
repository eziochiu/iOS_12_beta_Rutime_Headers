/* made by EzioChiu.
 */

@protocol GEODataSessionTask <NSObject>

@required

- (void)cancel;
- (GEOClientMetrics *)clientMetrics;
- (NSError *)error;
- (bool)failedDueToCancel;
- (unsigned long long)incomingPayloadSize;
- (unsigned long long)outgoingPayloadSize;
- (<NSObject> *)parsedResponse;
- (bool)protocolBufferHasPreamble;
- (NSData *)receivedData;
- (NSString *)remoteAddressAndPort;
- (<GEORequestCounterTicket> *)requestCounterTicket;
- (void)start;
- (unsigned int)taskIdentifier;

@end
