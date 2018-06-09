/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardActivityAlertScanner : NSObject {
    unsigned long long  _position;
    NSString * _string;
}

+ (bool)characterIsStringValueCharacter:(unsigned short)arg1;
+ (id)scanAlertValueFromString:(id)arg1;
+ (id)scannerWithString:(id)arg1;

- (void).cxx_destruct;
- (bool)atEnd;
- (id)initWithString:(id)arg1;
- (unsigned short)nextCharacter;
- (unsigned short)nextUnescapedCharacter;
- (unsigned long long)position;
- (id)scanAlertValue;
- (unsigned short)scanCharacter;
- (unsigned short)scanCharacterWithEscaping:(bool)arg1;
- (id)scanKeyValuePair;
- (bool)scanPastCharacter:(unsigned short)arg1;
- (bool)scanPastItemDelimiter;
- (bool)scanPastKeyValueSeparator;
- (void)scanPastWhitespace;
- (id)scanQuotedStringValue;
- (id)scanStringValue;
- (id)scanUnquotedStringValue;

@end
