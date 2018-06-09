/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideDriver : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBRideDriver> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBImageValue * _image;
    _INPBContactValue * _person;
    NSString * _phoneNumber;
    NSString * _rating;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasPerson;
@property (nonatomic, readonly) bool hasPhoneNumber;
@property (nonatomic, readonly) bool hasRating;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBImageValue *image;
@property (nonatomic, retain) _INPBContactValue *person;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *rating;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasImage;
- (bool)hasPerson;
- (bool)hasPhoneNumber;
- (bool)hasRating;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (id)person;
- (id)phoneNumber;
- (id)rating;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRating:(id)arg1;
- (void)writeTo:(id)arg1;

@end
