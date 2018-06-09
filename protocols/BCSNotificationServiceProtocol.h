/* made by EzioChiu.
 */

@protocol BCSNotificationServiceProtocol

@required

- (void)cancelNotifications;
- (void)notifyParsedCodeWithData:(void *)arg1 codePayload:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: <BCSParsedData> *, <BCSCodePayload> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, AWDBarcodeSupportCodeDetectedEvent *, void*

@end
