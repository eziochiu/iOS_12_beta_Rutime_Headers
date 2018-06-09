/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCurrencyFormat : TSKFormat <NSCopying> {
    bool  _accountingStyle;
    unsigned long long  _currencyCodeIndex;
    unsigned long long  _decimalPlaces;
    int  _negativeStyle;
    bool  _showThousandsSeparator;
}

@property (nonatomic, readonly) bool accountingStyle;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic) unsigned long long currencyCodeIndex;
@property (nonatomic, readonly) unsigned long long decimalPlaces;
@property (nonatomic, readonly) int negativeStyle;
@property (nonatomic, readonly) bool showThousandsSeparator;

- (bool)accountingStyle;
- (id)asCurrencyFormat;
- (id)currencyCode;
- (unsigned long long)currencyCodeIndex;
- (unsigned long long)decimalPlaces;
- (unsigned long long)hash;
- (id)initWithDecimalPlaces:(unsigned long long)arg1 negativeStyle:(int)arg2 showSeparator:(bool)arg3 accountingStyle:(bool)arg4 currencyCode:(id)arg5;
- (id)initWithFormatType:(int)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)negativeStyle;
- (void)setCurrencyCodeIndex:(unsigned long long)arg1;
- (bool)showThousandsSeparator;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;

@end
