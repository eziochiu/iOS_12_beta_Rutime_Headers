/* made by EzioChiu.
 */

@protocol EMAccountFactory

@required

- (<EMAccount> *)accountWithIdentifier:(NSString *)arg1;
- (<EMAccount> *)accountWithSystemAccount:(ACAccount *)arg1;

@end
