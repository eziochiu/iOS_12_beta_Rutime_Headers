/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKNumericSuggestionsEnterValueAlgorithm : PKNumericSuggestionsAlgorithm {
    NSDecimalNumber * _cardBalance;
    NSString * _currencyCode;
    long long  _decimalPrecision;
    NSArray * _defaultSuggestions;
    NSArray * _defaultValues;
    bool  _hasValidDefaultSuggestions;
    PKNumericSuggestionLastInput * _lastInput;
    NSDecimalNumber * _maxBalance;
    NSDecimalNumber * _maxLoadAmount;
    NSDecimalNumber * _minBalance;
    NSDecimalNumber * _minLoadAmount;
    unsigned long long  _powerOfTenFactor;
    NSDecimalNumberHandler * _roundingBehavior;
    bool  _useBuiltInDefaults;
    NSArray * _valuesToDefaults;
}

@property (nonatomic, copy) NSDecimalNumber *cardBalance;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) long long decimalPrecision;
@property (nonatomic, copy) NSArray *defaultValues;
@property (nonatomic, readonly) bool hasValidDefaultSuggestions;
@property (nonatomic, copy) NSDecimalNumber *maxBalance;
@property (nonatomic, copy) NSDecimalNumber *maxLoadAmount;
@property (nonatomic, copy) NSDecimalNumber *minBalance;
@property (nonatomic, copy) NSDecimalNumber *minLoadAmount;
@property (nonatomic) unsigned long long powerOfTenFactor;

- (void).cxx_destruct;
- (bool)_amountIsValid:(id)arg1;
- (void)_generateCalculatedSuggestions;
- (id)_generateDefaultSuggestions;
- (id)_generateValuesToDefaults;
- (id)_maxAmountSuggestion;
- (bool)_possibleAmountIsValidWithDefaultValue:(id)arg1 amount:(id)arg2;
- (id)_possibleValueForAmount:(id)arg1;
- (id)_useMaxAmountSuggestion;
- (bool)_useMaximumAmountSuggestionWithAmount:(id)arg1;
- (id)cardBalance;
- (id)currencyCode;
- (long long)decimalPrecision;
- (id)defaultValues;
- (bool)hasValidDefaultSuggestions;
- (id)init;
- (id)initWithLastInput:(id)arg1;
- (id)maxBalance;
- (id)maxLoadAmount;
- (id)minBalance;
- (id)minLoadAmount;
- (unsigned long long)powerOfTenFactor;
- (void)setCardBalance:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDecimalPrecision:(long long)arg1;
- (void)setDefaultValues:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (void)setPowerOfTenFactor:(unsigned long long)arg1;
- (void)setUseBuiltInDefaults:(bool)arg1;
- (id)suggestionsWithAmount:(id)arg1;

@end
