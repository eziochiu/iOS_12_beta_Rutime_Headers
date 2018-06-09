/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HealthUIAWDHealthUIRecordsCategoryInteractionEvent : PBCodable <NSCopying> {
    int  _categoryID;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int categoryID : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned long long  _timestamp;
    int  _type;
}

@property (nonatomic) int categoryID;
@property (nonatomic) bool hasCategoryID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int type;

- (int)StringAsCategoryID:(id)arg1;
- (int)StringAsType:(id)arg1;
- (int)categoryID;
- (id)categoryIDAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategoryID;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryID:(int)arg1;
- (void)setHasCategoryID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
