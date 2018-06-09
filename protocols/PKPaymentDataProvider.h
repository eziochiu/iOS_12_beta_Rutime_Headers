/* made by EzioChiu.
 */

@protocol PKPaymentDataProvider <NSObject>

@required

- (PKPaymentApplication *)defaultPaymentApplicationForPassUniqueIdentifier:(NSString *)arg1;
- (NSString *)defaultPaymentPassIdentifier;
- (<PKPaymentDataProviderDelegate> *)delegate;
- (NSString *)deviceName;
- (bool)isDeviceInRestrictedMode;
- (bool)isPaymentHandoffDisabled;
- (NSString *)secureElementIdentifier;
- (bool)secureElementIsProductionSigned;
- (void)setDefaultPaymentApplication:(void *)arg1 forPassUniqueIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentApplication *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPass *, void*
- (void)setDefaultPaymentPassIdentifier:(NSString *)arg1;
- (void)setDelegate:(id <PKPaymentDataProviderDelegate>)arg1;
- (void)setPaymentHandoffDisabled:(bool)arg1;

@optional

- (void)addDelegate:(id <PKPaymentDataProviderDelegate>)arg1;
- (void)balancesForPaymentPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)deletePaymentTransactionWithIdentifier:(NSString *)arg1 forPassWithUniqueIdentifier:(NSString *)arg2;
- (PKExpressPassInformation *)expressPassInformationForMode:(NSString *)arg1;
- (NSSet *)expressPassesInformation;
- (NSSet *)expressPassesInformationWithCardType:(long long)arg1;
- (void)felicaStateWithPassUniqueIdentifier:(void *)arg1 paymentApplication:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, PKPaymentApplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKFelicaTransitAppletState *, void*
- (void)removeDelegate:(id <PKPaymentDataProviderDelegate>)arg1;
- (void)removeExpressPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, PKExpressPassInformation *, void*
- (void)removeExpressPassWithUniqueIdentifier:(void *)arg1 visibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, PKExpressPassInformation *, void*
- (void)removeExpressPassesWithCardType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)removeExpressPassesWithCardType:(void *)arg1 visibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)setExpressWithPassInformation:(void *)arg1 credential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKExpressPassInformation *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, PKExpressPassInformation *, void*
- (void)setExpressWithPassInformation:(void *)arg1 visibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKExpressPassInformation *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, PKExpressPassInformation *, void*
- (void)startServiceModeForPassWithUniqueIdentifier:(NSString *)arg1 visibleViewController:(id)arg2;
- (bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (bool)supportsExpressMode:(NSString *)arg1;
- (bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (bool)supportsInAppPaymentsForPass:(PKPass *)arg1;
- (bool)supportsMessagesForPass:(PKPass *)arg1;
- (bool)supportsNotificationsForPass:(PKPass *)arg1;
- (bool)supportsTransactionsForPass:(PKPass *)arg1;
- (void)transactionCountByYearForPassWithUniqueIdentifier:(void *)arg1 withTransactionSource:(void *)arg2 withBackingData:(void *)arg3 calendar:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, unsigned long long, unsigned long long, NSCalendar *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (NSString *)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(void *)arg1 withTransactionSource:(void *)arg2 withBackingData:(void *)arg3 limit:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, unsigned long long, unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionsForPaymentPassWithUniqueIdentifier:(void *)arg1 withTransactionSource:(void *)arg2 withBackingData:(void *)arg3 startDate:(void *)arg4 endDate:(void *)arg5 limit:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: NSString *, unsigned long long, unsigned long long, NSDate *, NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionsForPaymentPassWithUniqueIdentifier:(void *)arg1 withTransactionSource:(void *)arg2 withNotificationServiceData:(void *)arg3 limit:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, unsigned long long, unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transitStateWithPassUniqueIdentifier:(void *)arg1 paymentApplication:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, PKPaymentApplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKTransitAppletState *, void*

@end
