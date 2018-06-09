/* made by EzioChiu.
 */

@protocol CNDonationValueVisitor <NSObject>

@required

- (void)visitDonationValue:(CNDonationValue *)arg1 emailAddress:(NSString *)arg2 label:(NSString *)arg3;
- (void)visitDonationValue:(CNDonationValue *)arg1 imageData:(NSData *)arg2;
- (void)visitDonationValue:(CNDonationValue *)arg1 nameComponents:(NSPersonNameComponents *)arg2;
- (void)visitDonationValue:(CNDonationValue *)arg1 phoneNumber:(CNPhoneNumber *)arg2 label:(NSString *)arg3;
- (void)visitDonationValue:(CNDonationValue *)arg1 postalAddress:(CNPostalAddress *)arg2 style:(long long)arg3 label:(NSString *)arg4;

@end
