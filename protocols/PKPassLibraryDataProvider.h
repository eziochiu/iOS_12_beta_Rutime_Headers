/* made by EzioChiu.
 */

@protocol PKPassLibraryDataProvider <NSObject>

@required

- (bool)canAddPaymentPass;
- (PKPass *)passWithPassTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (PKPass *)passWithUniqueID:(NSString *)arg1;
- (NSArray *)paymentPasses;
- (NSString *)peerPaymentPassUniqueID;
- (void)removePass:(PKPass *)arg1;

@end
