/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMimeEnrichedReader : NSObject {
    struct __CFArray { } * _commandStack;
    long long  _currentIndex;
    unsigned int  _eatOneNewline;
    float  _indentWidth;
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directUniCharBuffer; 
        char *directCStringBuffer; 
        struct { 
            long long location; 
            long long length; 
        } rangeToBuffer; 
        long long bufferedRangeStart; 
        long long bufferedRangeEnd; 
    }  _inputBuffer;
    long long  _inputLength;
    unsigned int  _insideComment;
    int  _lastQuoteLevel;
    unsigned int  _noFillLevel;
    NSMutableString * _outputBuffer;
    id  _outputString;
    struct __CFString { } * _postpendHTML;
    struct __CFString { } * _prependHTML;
    unsigned int  _wantsPlainText;
}

+ (struct __CFCharacterSet { }*)parenSet;
+ (struct __CFCharacterSet { }*)punctuationSet;

- (void)appendNewLine:(id)arg1;
- (void)appendStringToBuffer:(id)arg1;
- (void)beginCommand:(id)arg1;
- (void)closeUpQuoting;
- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;
- (id)currentFont;
- (void)dealloc;
- (id)description;
- (void)endCommand:(id)arg1;
- (void)handleNoParameterCommand:(const struct { id x1; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 2; }*)arg1;
- (void)mismatchError:(id)arg1;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)parseParameterString:(id)arg1;
- (int)readTokenInto:(id*)arg1;
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;
- (void)setWantsHTML:(bool)arg1;
- (void)setupFontStackEntry:(/* Warning: unhandled struct encoding: '{_CommandStackEntry=^{?}@}' */ struct _CommandStackEntry { struct { /* ? */ } *x1; id x2; }*)arg1;

@end
