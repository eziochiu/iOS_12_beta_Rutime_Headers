/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariTappedAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying> {
    int  _category;
    int  _formProperty;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int category : 1; 
        unsigned int formProperty : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int category;
@property (nonatomic) int formProperty;
@property (nonatomic) bool hasCategory;
@property (nonatomic) bool hasFormProperty;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsCategory:(id)arg1;
- (int)StringAsFormProperty:(id)arg1;
- (int)category;
- (id)categoryAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)formProperty;
- (id)formPropertyAsString:(int)arg1;
- (bool)hasCategory;
- (bool)hasFormProperty;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setFormProperty:(int)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setHasFormProperty:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
