/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TISmartPunctuationController : NSObject {
    NSCharacterSet * _alphanumericCharacterSet;
    unsigned long long  _autoQuoteType;
    NSCharacterSet * _bookTitleMarkCharacterSet;
    NSCharacterSet * _cornerBracketCharacterSet;
    NSCharacterSet * _dashCharacterSet;
    NSCharacterSet * _decimalDigitCharacterSet;
    NSCharacterSet * _dutchApostropheFollowingSet;
    NSCharacterSet * _emDashCharacterSet;
    NSCharacterSet * _enDashCharacterSet;
    NSCharacterSet * _germanApostrophePrecedingSet;
    bool  _leftDoubleQuotationMarkInserted;
    bool  _leftSingleQuotationMarkInserted;
    NSCharacterSet * _openerCharacterSet;
    NSCharacterSet * _punctuationCharacterSet;
    bool  _smartDashesEnabled;
    TISmartPunctuationOptions * _smartPunctuationOptions;
    bool  _smartQuotesEnabled;
    NSCharacterSet * _whitespaceAndNewlineCharacterSet;
}

@property (nonatomic) unsigned long long autoQuoteType;
@property (nonatomic) bool smartDashesEnabled;
@property (nonatomic, retain) TISmartPunctuationOptions *smartPunctuationOptions;
@property (nonatomic) bool smartQuotesEnabled;

+ (id)_chineseContextualVariantMapping;

- (void).cxx_destruct;
- (id)_alternatingStringForInputString:(id)arg1 isLockedInput:(bool)arg2 hasMarkedText:(bool)arg3;
- (id)_checkInput:(id)arg1 forContextualChinesePunctuationInDocumentState:(id)arg2;
- (id)_checkInput:(id)arg1 forContextualDashesInDocumentState:(id)arg2;
- (id)_checkInput:(id)arg1 forContextualQuotesInDocumentState:(id)arg2;
- (void)_initializeDashCharacterSetsIfNecessary;
- (void)_initializeQuoteCharacterSetsIfNecessary;
- (unsigned long long)autoQuoteType;
- (id)init;
- (void)reset;
- (void)setAutoQuoteType:(unsigned long long)arg1;
- (void)setSmartDashesEnabled:(bool)arg1;
- (void)setSmartPunctuationOptions:(id)arg1;
- (void)setSmartQuotesEnabled:(bool)arg1;
- (bool)smartDashesEnabled;
- (id)smartPunctuationOptions;
- (id)smartPunctuationOutputForInput:(id)arg1 isLockedInput:(bool)arg2 documentState:(id)arg3;
- (id)smartPunctuationResultsForString:(id)arg1;
- (id)smartPunctuationedStringForString:(id)arg1;
- (bool)smartQuotesEnabled;

@end
