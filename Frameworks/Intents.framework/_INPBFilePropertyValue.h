/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBFilePropertyValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBFilePropertyValue> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBDateTimeRange * _dateTime;
    int  _fileType;
    struct { 
        unsigned int fileType : 1; 
    }  _has;
    _INPBContact * _person;
    _INPBLong * _quantity;
    _INPBString * _value;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBDateTimeRange *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int fileType;
@property (nonatomic, readonly) bool hasDateTime;
@property (nonatomic) bool hasFileType;
@property (nonatomic, readonly) bool hasPerson;
@property (nonatomic, readonly) bool hasQuantity;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBContact *person;
@property (nonatomic, retain) _INPBLong *quantity;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBString *value;

- (void).cxx_destruct;
- (int)StringAsFileType:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTime;
- (id)dictionaryRepresentation;
- (int)fileType;
- (id)fileTypeAsString:(int)arg1;
- (bool)hasDateTime;
- (bool)hasFileType;
- (bool)hasPerson;
- (bool)hasQuantity;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)person;
- (id)quantity;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDateTime:(id)arg1;
- (void)setFileType:(int)arg1;
- (void)setHasFileType:(bool)arg1;
- (void)setPerson:(id)arg1;
- (void)setQuantity:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
