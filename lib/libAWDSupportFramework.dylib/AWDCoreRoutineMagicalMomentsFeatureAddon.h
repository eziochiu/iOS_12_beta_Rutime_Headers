/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineMagicalMomentsFeatureAddon : PBCodable <NSCopying> {
    struct { 
        unsigned int value : 1; 
    }  _has;
    NSString * _name;
    int  _value;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasValue;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(int)arg1;
- (int)value;
- (void)writeTo:(id)arg1;

@end
