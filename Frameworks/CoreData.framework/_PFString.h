/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFString : NSString {
    int  _cd_rc;
    unsigned int  _length;
    id  _sourceData;
}

+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (const char *)UTF8String;
- (const char *)_fastCStringContents:(bool)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (const char *)cString;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getCString:(char *)arg1;
- (void)getCharacters:(unsigned short*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
