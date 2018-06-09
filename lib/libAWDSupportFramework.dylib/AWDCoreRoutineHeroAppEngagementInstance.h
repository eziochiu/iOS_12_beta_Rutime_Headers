/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineHeroAppEngagementInstance : PBCodable <NSCopying> {
    int  _actionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int actionType : 1; 
        unsigned int uiPlacement : 1; 
    }  _has;
    NSString * _suggestionId;
    unsigned long long  _timestamp;
    int  _uiPlacement;
}

@property (nonatomic) int actionType;
@property (nonatomic) bool hasActionType;
@property (nonatomic, readonly) bool hasSuggestionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUiPlacement;
@property (nonatomic, retain) NSString *suggestionId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int uiPlacement;

- (int)actionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasSuggestionId;
- (bool)hasTimestamp;
- (bool)hasUiPlacement;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUiPlacement:(bool)arg1;
- (void)setSuggestionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUiPlacement:(int)arg1;
- (id)suggestionId;
- (unsigned long long)timestamp;
- (int)uiPlacement;
- (void)writeTo:(id)arg1;

@end
