/* made by EzioChiu.
 */

@protocol _INPBSendMessageIntentResponse <NSObject>

@required

- (bool)hasSentMessage;
- (_INPBMessage *)sentMessage;
- (void)setSentMessage:(_INPBMessage *)arg1;

@end
