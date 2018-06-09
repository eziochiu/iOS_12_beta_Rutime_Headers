/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleCString : NSString {
    int  _unused;
    char * bytes;
    int  numBytes;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (const char *)_fastCStringContents:(bool)arg1;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (unsigned long long)cStringLength;
- (bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)fastestEncoding;
- (bool)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasPrefix:(id)arg1;
- (bool)hasSuffix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)smallestEncoding;
- (id)stringByAppendingString:(id)arg1;

@end
