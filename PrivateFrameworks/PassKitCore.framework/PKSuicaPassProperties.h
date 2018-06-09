/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSuicaPassProperties : PKTransitPassProperties {
    bool  _balanceAllowedForCommute;
    bool  _greenCarTicketUsed;
    bool  _inShinkansenStation;
    bool  _lowBalanceGateNotificationEnabled;
}

@property (getter=isBalanceAllowedForCommute, nonatomic, readonly) bool balanceAllowedForCommute;
@property (getter=isBlacklisted, nonatomic, readonly) bool blacklisted;
@property (getter=isGreenCarTicketUsed, nonatomic, readonly) bool greenCarTicketUsed;
@property (getter=isInShinkansenStation, nonatomic, readonly) bool inShinkansenStation;
@property (getter=isInStation, nonatomic, readonly) bool inStation;
@property (getter=isLowBalanceGateNotificationEnabled, nonatomic, readonly) bool lowBalanceGateNotificationEnabled;
@property (nonatomic, readonly, copy) NSDecimalNumber *transitBalance;
@property (nonatomic, readonly, copy) NSString *transitBalanceCurrencyCode;

+ (id)passPropertiesForPass:(id)arg1;

- (id)_initWithProperties:(id)arg1;
- (bool)isBalanceAllowedForCommute;
- (bool)isGreenCarTicketUsed;
- (bool)isInShinkansenStation;
- (bool)isLowBalanceGateNotificationEnabled;

@end
