/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addCharactersInString:(id)arg1;
- (id)bitmapRepresentation;
- (bool)characterIsMember:(unsigned short)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (bool)hasMemberInPlane:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)invert;
- (id)invertedSet;
- (bool)isEqual:(id)arg1;
- (bool)isSupersetOfSet:(id)arg1;
- (bool)longCharacterIsMember:(unsigned int)arg1;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeCharactersInString:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;

@end
