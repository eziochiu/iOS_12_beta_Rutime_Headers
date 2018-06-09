/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface __NSATSStringSegment : NSString {
    unsigned short  _buffer;
    const unsigned short * _characters;
    struct __CFString { } * _originalString;
    long long  _originalStringLength;
    struct { 
        long long location; 
        long long length; 
    }  _range;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (const unsigned short*)_fastCharacterContents;
- (bool)_isDeallocating;
- (void)_setOriginalString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)_tryRetain;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOriginalString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;
- (oneway void)release;

@end
