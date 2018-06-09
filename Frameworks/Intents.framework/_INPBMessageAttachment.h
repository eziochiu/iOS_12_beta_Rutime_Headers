/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMessageAttachment : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBMessageAttachment> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBURLValue * _fileURL;
    _INPBString * _filename;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBURLValue *fileURL;
@property (nonatomic, retain) _INPBString *filename;
@property (nonatomic, readonly) bool hasFileURL;
@property (nonatomic, readonly) bool hasFilename;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)fileURL;
- (id)filename;
- (bool)hasFileURL;
- (bool)hasFilename;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
