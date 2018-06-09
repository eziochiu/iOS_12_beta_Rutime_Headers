/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface _MDHTMLParsing : NSObject {
    NSMutableDictionary * attributes;
    bool  inHead;
    bool  inScript;
    bool  inStyle;
    bool  inTitle;
    unsigned long long  indexingLimit;
    NSString * metaContent;
    NSString * metaHttpEquiv;
    NSString * metaName;
    unsigned char  newLineBuffer;
    unsigned long long  newLineLength;
    unsigned int  sourceCFEncoding;
    unsigned long long  sourceEncoding;
    unsigned int  titleLength;
    const char * titleStart;
    unsigned long long  uniCharLen;
    unsigned long long  uniCharSize;
    unsigned short * uniChars;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)appendNewline;
- (void)appendText:(const char *)arg1 length:(unsigned long long)arg2;
- (void)appendUnichars:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithEncoding:(unsigned long long)arg1;

@end
