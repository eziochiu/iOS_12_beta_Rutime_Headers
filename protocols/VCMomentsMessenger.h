/* made by EzioChiu.
 */

@protocol VCMomentsMessenger <NSObject>

@required

- (unsigned int)capabilities;
- (void)cleanupActiveRequests;
- (void)deregisterClient;
- (bool)processClientRequest:(NSDictionary *)arg1 error:(id*)arg2;
- (void)registerClient;
- (void)setMomentsDelegate:(id <VCMomentsMessengerDelegate>)arg1;

@end
