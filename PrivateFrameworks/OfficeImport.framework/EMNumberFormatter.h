/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMNumberFormatter : NSObject {
    NSString * _baseICUFormatString;
    struct __CFNumberFormatter { } * _bigNumberFormatter;
    struct __CFNumberFormatter { } * _currencyFormatter;
    unsigned short  _currencySymbol;
    struct __CFDateFormatter { } * _dateFormatter;
    struct __CFNumberFormatter { } * _doubleFormatter;
    NSString * _excelFormatString;
    int  _formatType;
    struct __CFNumberFormatter { } * _genericFormatter;
    bool  _isNegativeRed;
    struct __CFNumberFormatter { } * _percentFormatter;
}

+ (id)formatterForFormat:(id)arg1;

- (void).cxx_destruct;
- (struct __CFNumberFormatter { }*)_bigNumberFormatter;
- (struct __CFNumberFormatter { }*)_currencyFormatter;
- (struct __CFDateFormatter { }*)_dateFormatter;
- (struct __CFNumberFormatter { }*)_doubleFormatter;
- (struct __CFNumberFormatter { }*)_genericFormatterForNumberOfSignificantDigits:(unsigned long long)arg1;
- (id)_icuFormatStringForCurrencyFormat;
- (id)_icuFormatStringForDateFormat;
- (void)_parseExcelFormatString:(id)arg1;
- (struct __CFNumberFormatter { }*)_percentFormatter;
- (void)convertGenericNumberFormat:(id)arg1;
- (id)convertedGenericNumberFormatWithFormat:(id)arg1;
- (void)dealloc;
- (id)formatCurrency:(double)arg1;
- (id)formatDate:(id)arg1;
- (id)formatDefault:(double)arg1;
- (id)formatDefault:(double)arg1 showingNumberOfDigits:(unsigned long long)arg2;
- (id)formatDoubleValue:(double)arg1;
- (id)formatFraction:(double)arg1;
- (id)formatPercent:(double)arg1;
- (id)formatPhoneNumber:(double)arg1;
- (int)formatType;
- (id)formatValue:(double)arg1 inWorkbook:(id)arg2;
- (id)initForGeneralFormatting;
- (id)initWithExcelFormatString:(id)arg1;
- (bool)isNegativeRed;
- (unsigned long long)optimalNumberOfDigitsForValue:(double)arg1;

@end
