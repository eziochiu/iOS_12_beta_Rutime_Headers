/* made by EzioChiu.
 */

@protocol CNDonatedContactsPredicate <NSObject>

@required

- (CNEither *)contactsFromDonationStore:(CNDonationStore *)arg1;

@end
