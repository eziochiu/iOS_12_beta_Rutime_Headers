/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardLexer : NSObject {
    NSArray * _activeTokenSets;
    char * _bytes;
    unsigned long long  _cursor;
    NSMutableData * _data;
    long long  _errorCount;
    unsigned long long  _length;
    unsigned long long  _peekedPoint;
    bool  _unicode;
}

- (void).cxx_destruct;
- (void)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(bool)arg2 stopTokens:(int)arg3 trim:(bool)arg4 maximumValueLength:(unsigned long long)arg5 intoString:(id)arg6;
- (bool)advancePastEOL;
- (bool)advancePastEOLSingle;
- (bool)advancePastEOLUnicode;
- (bool)advanceToEOL;
- (bool)advanceToEOLSingle;
- (bool)advanceToEOLUnicode;
- (void)advanceToPeekPoint;
- (long long)advanceToSingleByteString;
- (long long)advanceToString;
- (bool)advanceToToken:(int)arg1 throughTypes:(long long)arg2;
- (long long)advanceToUnicodeString;
- (bool)advancedPastToken:(int)arg1;
- (void)appendDataInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toData:(id)arg2;
- (void)appendNextEscapedCharacterToData:(id)arg1;
- (void)appendNextQuotedPrintableDataToData:(id)arg1;
- (bool)atEOF;
- (unsigned short)charAtPosition:(unsigned long long)arg1 withOffset:(long long)arg2;
- (unsigned long long)cursor;
- (id)dataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })emptyRangeStartingAtCursor;
- (long long)errorCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })expandRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 untilNextByteIs:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3 maximumValueLength:(unsigned long long)arg4;
- (id)nextBase64Data;
- (id)nextBase64Line:(bool*)arg1;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (id)nextQuotedStringValueInEncoding:(unsigned long long)arg1;
- (id)nextSingleByteBase64Line:(bool*)arg1;
- (id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(bool)arg2 stopTokens:(int)arg3 trim:(bool)arg4 maximumValueLength:(unsigned long long)arg5;
- (id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(bool)arg2 stopTokens:(int)arg3 trim:(bool)arg4 maximumValueLength:(unsigned long long)arg5;
- (int)nextTokenPeek:(bool)arg1;
- (int)nextTokenPeek:(bool)arg1 length:(long long)arg2;
- (int)nextTokenPeekSingle:(bool)arg1 length:(long long)arg2;
- (int)nextTokenPeekUnicode:(bool)arg1 length:(long long)arg2;
- (id)nextUnicodeBase64Line:(bool*)arg1;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(bool)arg2 trim:(bool)arg3 maximumValueLength:(unsigned long long)arg4;
- (int)peekAtNextToken;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeWithLength:(unsigned long long)arg1 lTrim:(unsigned long long)arg2 rTrim:(unsigned long long)arg3;
- (int)readNextToken;
- (void)skipToStopTokens:(int)arg1;
- (id)stringByRoundingData:(id)arg1 toNextWholeCharacterUsingEncoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4 maximumValueLength:(unsigned long long)arg5;
- (id)stringFromData:(id)arg1 encoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4;
- (id)stringFromSubData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)stringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 encoding:(unsigned long long)arg2;
- (int)tokenAtCursor;
- (int)tokenAtCursorIgnoringLineFolding;
- (id)tokenSetForLength:(long long)arg1;
- (id)trimData:(id)arg1 withPrefixLength:(unsigned long long)arg2 suffixLength:(unsigned long long)arg3;
- (void)unicodeSkipToStopTokens:(int)arg1;
- (id)unicodeStringByRoundingData:(id)arg1 toNextWholeCharacterUsingEncoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4 maximumValueLength:(unsigned long long)arg5;

@end
