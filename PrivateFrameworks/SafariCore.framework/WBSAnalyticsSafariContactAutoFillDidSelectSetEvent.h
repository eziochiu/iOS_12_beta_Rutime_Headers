/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariContactAutoFillDidSelectSetEvent : PBCodable <NSCopying> {
    bool  _hadPreviouslyCustomizedSet;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int selectedSet : 1; 
        unsigned int hadPreviouslyCustomizedSet : 1; 
    }  _has;
    int  _selectedSet;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hadPreviouslyCustomizedSet;
@property (nonatomic) bool hasHadPreviouslyCustomizedSet;
@property (nonatomic) bool hasSelectedSet;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int selectedSet;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsSelectedSet:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hadPreviouslyCustomizedSet;
- (bool)hasHadPreviouslyCustomizedSet;
- (bool)hasSelectedSet;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)selectedSet;
- (id)selectedSetAsString:(int)arg1;
- (void)setHadPreviouslyCustomizedSet:(bool)arg1;
- (void)setHasHadPreviouslyCustomizedSet:(bool)arg1;
- (void)setHasSelectedSet:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSelectedSet:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
