/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFormatUtilities_LocaleSpecificStorage : NSObject {
    NSString * _formatCurrencyString;
    NSString * _formatCurrencyStringMinus;
    NSString * _formatCurrencyStringRedOnly;
    NSString * _formatCurrencyStringWithParens;
    NSString * _formatDateTimeString;
    NSString * _formatDecimalString;
    NSString * _formatDecimalStringMinus;
    NSString * _formatDecimalStringRedOnly;
    NSString * _formatDecimalStringWithParens;
    NSString * _formatPercentageString;
    NSString * _formatPercentageStringMinus;
    NSString * _formatPercentageStringRedOnly;
    NSString * _formatPercentageStringWithParens;
    NSString * _formatScientificString;
    NSString * _formatScientificStringMinus;
    NSString * _formatScientificStringRedOnly;
    NSString * _formatScientificStringWithParens;
}

@property (readonly) NSString *formatCurrencyString;
@property (readonly) NSString *formatCurrencyStringMinus;
@property (readonly) NSString *formatCurrencyStringRedOnly;
@property (readonly) NSString *formatCurrencyStringWithParens;
@property (readonly) NSString *formatDateTimeString;
@property (readonly) NSString *formatDecimalString;
@property (readonly) NSString *formatDecimalStringMinus;
@property (readonly) NSString *formatDecimalStringRedOnly;
@property (readonly) NSString *formatDecimalStringWithParens;
@property (readonly) NSString *formatPercentageString;
@property (readonly) NSString *formatPercentageStringMinus;
@property (readonly) NSString *formatPercentageStringRedOnly;
@property (readonly) NSString *formatPercentageStringWithParens;
@property (readonly) NSString *formatScientificString;
@property (readonly) NSString *formatScientificStringMinus;
@property (readonly) NSString *formatScientificStringRedOnly;
@property (readonly) NSString *formatScientificStringWithParens;

+ (id)localeSpecificStorageForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)formatCurrencyString;
- (id)formatCurrencyStringMinus;
- (id)formatCurrencyStringRedOnly;
- (id)formatCurrencyStringWithParens;
- (id)formatDateTimeString;
- (id)formatDecimalString;
- (id)formatDecimalStringMinus;
- (id)formatDecimalStringRedOnly;
- (id)formatDecimalStringWithParens;
- (id)formatPercentageString;
- (id)formatPercentageStringMinus;
- (id)formatPercentageStringRedOnly;
- (id)formatPercentageStringWithParens;
- (id)formatScientificString;
- (id)formatScientificStringMinus;
- (id)formatScientificStringRedOnly;
- (id)formatScientificStringWithParens;
- (id)initWithLocale:(id)arg1;

@end
