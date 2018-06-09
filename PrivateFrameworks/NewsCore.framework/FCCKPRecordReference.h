/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecordReference : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    FCCKPRecordIdentifier * _recordIdentifier;
    int  _type;
}

@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) FCCKPRecordIdentifier *recordIdentifier;
@property (nonatomic) int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecordIdentifier;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (void)setHasType:(bool)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
