/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildAttributeValue : TSKSosBase <NSCopying> {
    bool  _boolValue;
    TSUColor * _colorValue;
    bool  _definedBoolValue;
    bool  _definedColorValue;
    bool  _definedDoubleValue;
    bool  _definedIntegerValue;
    bool  _definedPathSourceValue;
    bool  _definedStringValue;
    double  _doubleValue;
    int  _integerValue;
    TSDPathSource * _pathSourceValue;
    NSString * _stringValue;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) TSUColor *colorValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) <NSObject> *objectValue;
@property (nonatomic, readonly) TSDPathSource *pathSourceValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) unsigned long long type;

+ (id)emptyValue;
+ (id)valueWithBool:(bool)arg1;
+ (id)valueWithColor:(id)arg1;
+ (id)valueWithDouble:(double)arg1;
+ (id)valueWithInteger:(long long)arg1;
+ (id)valueWithPathSource:(id)arg1;
+ (id)valueWithString:(id)arg1;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)colorValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValue;
- (unsigned long long)hash;
- (id)initWithBoolValue:(bool)arg1;
- (id)initWithColorValue:(id)arg1;
- (id)initWithDoubleValue:(double)arg1;
- (id)initWithIntegerValue:(long long)arg1;
- (id)initWithPathSourceValue:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (long long)integerValue;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)objectValue;
- (bool)p_attributesAreEmpty;
- (id)pathSourceValue;
- (id)stringValue;
- (unsigned long long)type;

@end
