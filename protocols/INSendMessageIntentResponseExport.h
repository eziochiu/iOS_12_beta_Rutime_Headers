/* made by EzioChiu.
 */

@protocol INSendMessageIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INMessage *)sentMessage;
- (void)setSentMessage:(INMessage *)arg1;

@end
