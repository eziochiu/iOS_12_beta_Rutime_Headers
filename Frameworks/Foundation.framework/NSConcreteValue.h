/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteValue : NSValue {
    unsigned long long  _specialFlags;
    void * typeInfo;
}

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2;
- (const void*)_value;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void*)arg1;
- (void)getValue:(void*)arg1 size:(unsigned long long)arg2;
- (unsigned long long)hash;
- (bool)isEqualToValue:(id)arg1;
- (const char *)objCType;

@end
