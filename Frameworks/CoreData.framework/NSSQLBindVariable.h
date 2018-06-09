/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBindVariable : NSObject {
    NSAttributeDescription * _attributeDescription;
    int  _cd_rc;
    unsigned int  _flags;
    unsigned int  _index;
    long long  _int64;
    unsigned char  _sqlType;
    id  _value;
}

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsCoercion;
- (id)attributeDescription;
- (void)dealloc;
- (bool)hasObjectValue;
- (unsigned int)index;
- (id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2;
- (id)initWithUnsignedInt:(unsigned int)arg1 sqlType:(unsigned char)arg2;
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3;
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3 allowCoercion:(bool)arg4;
- (long long)int64;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setIndex:(unsigned int)arg1;
- (void)setInt64:(long long)arg1;
- (void)setSQLType:(unsigned char)arg1;
- (void)setUnsignedInt:(unsigned int)arg1;
- (void)setValue:(id)arg1;
- (unsigned char)sqlType;
- (unsigned int)unsignedInt;
- (id)value;

@end
