/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryFilter : PBCodable <NSCopying> {
    CKDPLocationBound * _bounds;
    CKDPRecordFieldIdentifier * _fieldName;
    CKDPRecordFieldValue * _fieldValue;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
}

@property (nonatomic, retain) CKDPLocationBound *bounds;
@property (nonatomic, retain) CKDPRecordFieldIdentifier *fieldName;
@property (nonatomic, retain) CKDPRecordFieldValue *fieldValue;
@property (nonatomic, readonly) bool hasBounds;
@property (nonatomic, readonly) bool hasFieldName;
@property (nonatomic, readonly) bool hasFieldValue;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)bounds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldName;
- (id)fieldValue;
- (bool)hasBounds;
- (bool)hasFieldName;
- (bool)hasFieldValue;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFieldValue:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
