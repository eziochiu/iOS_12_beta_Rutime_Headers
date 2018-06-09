/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariContactAutoFillDidFillCustomContactSetEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isShowingMeCardSets : 1; 
    }  _has;
    bool  _isShowingMeCardSets;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIsShowingMeCardSets;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isShowingMeCardSets;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsShowingMeCardSets;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isShowingMeCardSets;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsShowingMeCardSets:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsShowingMeCardSets:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
