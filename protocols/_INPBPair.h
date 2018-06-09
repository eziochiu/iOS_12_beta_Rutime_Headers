/* made by EzioChiu.
 */

@protocol _INPBPair <NSObject>

@required

- (bool)hasKey;
- (bool)hasPairCurrencyAmountValue;
- (bool)hasPairCustomObject;
- (bool)hasPairDataString;
- (bool)hasPairDistanceValue;
- (bool)hasPairDoubleValue;
- (bool)hasPairImageValue;
- (bool)hasPairIntegerValue;
- (bool)hasPairLocationValue;
- (bool)hasPairPaymentMethodValue;
- (bool)hasPairPersonValue;
- (bool)hasPairStringValue;
- (bool)hasPairTemperatureValue;
- (bool)hasPairUrlValue;
- (NSString *)key;
- (_INPBCurrencyAmountValue *)pairCurrencyAmountValue;
- (_INPBCustomObject *)pairCustomObject;
- (_INPBDataString *)pairDataString;
- (_INPBDistanceValue *)pairDistanceValue;
- (_INPBDoubleValue *)pairDoubleValue;
- (_INPBImageValue *)pairImageValue;
- (_INPBIntegerValue *)pairIntegerValue;
- (_INPBLocationValue *)pairLocationValue;
- (_INPBPaymentMethodValue *)pairPaymentMethodValue;
- (_INPBContactValue *)pairPersonValue;
- (_INPBStringValue *)pairStringValue;
- (_INPBTemperatureValue *)pairTemperatureValue;
- (_INPBURLValue *)pairUrlValue;
- (void)setKey:(NSString *)arg1;
- (void)setPairCurrencyAmountValue:(_INPBCurrencyAmountValue *)arg1;
- (void)setPairCustomObject:(_INPBCustomObject *)arg1;
- (void)setPairDataString:(_INPBDataString *)arg1;
- (void)setPairDistanceValue:(_INPBDistanceValue *)arg1;
- (void)setPairDoubleValue:(_INPBDoubleValue *)arg1;
- (void)setPairImageValue:(_INPBImageValue *)arg1;
- (void)setPairIntegerValue:(_INPBIntegerValue *)arg1;
- (void)setPairLocationValue:(_INPBLocationValue *)arg1;
- (void)setPairPaymentMethodValue:(_INPBPaymentMethodValue *)arg1;
- (void)setPairPersonValue:(_INPBContactValue *)arg1;
- (void)setPairStringValue:(_INPBStringValue *)arg1;
- (void)setPairTemperatureValue:(_INPBTemperatureValue *)arg1;
- (void)setPairUrlValue:(_INPBURLValue *)arg1;

@end
