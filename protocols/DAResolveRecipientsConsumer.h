/* made by EzioChiu.
 */

@protocol DAResolveRecipientsConsumer <DAActionConsumer>

@required

- (void)resolvedRecipientsByEmailAddress:(NSDictionary *)arg1;

@end
