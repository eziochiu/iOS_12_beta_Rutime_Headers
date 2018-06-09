/* made by EzioChiu.
 */

@protocol AXUIClientDelegate <NSObject>

@optional

- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(AXUIClient *)arg1;
- (AXAccessQueue *)userInterfaceClient:(AXUIClient *)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;
- (bool)userInterfaceClient:(AXUIClient *)arg1 messageFromServerForWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg2;
- (bool)userInterfaceClient:(AXUIClient *)arg1 messageWithIdentifierRequiresWritingBlock:(unsigned long long)arg2;
- (NSDictionary *)userInterfaceClient:(AXUIClient *)arg1 processMessageFromServer:(NSDictionary *)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;
- (void)userInterfaceClient:(void *)arg1 processMessageFromServerAsynchronously:(void *)arg2 withIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: AXUIClient *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)userInterfaceClient:(AXUIClient *)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(NSMutableDictionary *)arg2;

@end
