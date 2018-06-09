/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECEncodedWordEncoder : NSObject {
    NSString * _characterSet;
    NSData * _decodedText;
    long long  _encodedWordEncoding;
    NSString * _language;
    unsigned long long  _singleEncodedWordLength;
    NSString * _string;
    unsigned long long  _stringEncoding;
}

@property (nonatomic, copy) NSString *characterSet;
@property (nonatomic, copy) NSData *decodedText;
@property (nonatomic) long long encodedWordEncoding;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly) unsigned long long minimumLengthOfEncodedWord;
@property (nonatomic) unsigned long long singleEncodedWordLength;
@property (nonatomic, readonly, copy) NSString *string;
@property (nonatomic, readonly) unsigned long long stringEncoding;

- (void).cxx_destruct;
- (unsigned long long)_bEncodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2;
- (const char *)_findNextByteThatNeedsQEncodingBetweenStartByte:(const char *)arg1 endByte:(const char *)arg2;
- (bool)_getBytesWithoutSplittingComposedCharacters:(void*)arg1 targetQEncodedTextLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 splitComposedCharacterSequence:(bool*)arg4 usedQEncodedTextLength:(unsigned long long*)arg5 extraLength:(unsigned long long*)arg6 extraQEncodedTextLength:(unsigned long long*)arg7 fromString:(id)arg8 stringEncoding:(unsigned long long)arg9 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg10 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg11;
- (unsigned long long)_lengthOfQEncodedTextForBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)_prepareForEncoding;
- (unsigned long long)_qEncodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2;
- (unsigned long long)_writeEncodedWordPreambleToBuffer:(char *)arg1 length:(unsigned long long)arg2;
- (void)_writeQEncodedTextAndEndSequenceToHeaderBytes:(char *)arg1 fromDecodedBytes:(const char *)arg2 length:(unsigned long long)arg3;
- (id)characterSet;
- (id)decodedText;
- (id)description;
- (unsigned long long)encodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2;
- (long long)encodedWordEncoding;
- (id)init;
- (id)initWithString:(id)arg1 stringEncoding:(unsigned long long)arg2 language:(id)arg3;
- (id)language;
- (unsigned long long)minimumLengthOfEncodedWord;
- (void)setCharacterSet:(id)arg1;
- (void)setDecodedText:(id)arg1;
- (void)setEncodedWordEncoding:(long long)arg1;
- (void)setSingleEncodedWordLength:(unsigned long long)arg1;
- (unsigned long long)singleEncodedWordLength;
- (id)string;
- (unsigned long long)stringEncoding;

@end
