/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying> {
    bool  _dynamic;
    bool  _enabledItemsOnly;
    unsigned int  _evaluationOrder;
    bool  _filtered;
    bool  _genius;
    struct { 
        unsigned int evaluationOrder : 1; 
        unsigned int limitKind : 1; 
        unsigned int limitOrder : 1; 
        unsigned int limitValue : 1; 
        unsigned int dynamic : 1; 
        unsigned int enabledItemsOnly : 1; 
        unsigned int filtered : 1; 
        unsigned int genius : 1; 
        unsigned int limited : 1; 
        unsigned int reverseLimitOrder : 1; 
    }  _has;
    int  _limitKind;
    unsigned int  _limitOrder;
    unsigned int  _limitValue;
    bool  _limited;
    bool  _reverseLimitOrder;
    NSData * _smartCriteria;
}

@property (nonatomic) bool dynamic;
@property (nonatomic) bool enabledItemsOnly;
@property (nonatomic) unsigned int evaluationOrder;
@property (nonatomic) bool filtered;
@property (nonatomic) bool genius;
@property (nonatomic) bool hasDynamic;
@property (nonatomic) bool hasEnabledItemsOnly;
@property (nonatomic) bool hasEvaluationOrder;
@property (nonatomic) bool hasFiltered;
@property (nonatomic) bool hasGenius;
@property (nonatomic) bool hasLimitKind;
@property (nonatomic) bool hasLimitOrder;
@property (nonatomic) bool hasLimitValue;
@property (nonatomic) bool hasLimited;
@property (nonatomic) bool hasReverseLimitOrder;
@property (nonatomic, readonly) bool hasSmartCriteria;
@property (nonatomic) int limitKind;
@property (nonatomic) unsigned int limitOrder;
@property (nonatomic) unsigned int limitValue;
@property (nonatomic) bool limited;
@property (nonatomic) bool reverseLimitOrder;
@property (nonatomic, retain) NSData *smartCriteria;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)dynamic;
- (bool)enabledItemsOnly;
- (unsigned int)evaluationOrder;
- (bool)filtered;
- (bool)genius;
- (bool)hasDynamic;
- (bool)hasEnabledItemsOnly;
- (bool)hasEvaluationOrder;
- (bool)hasFiltered;
- (bool)hasGenius;
- (bool)hasLimitKind;
- (bool)hasLimitOrder;
- (bool)hasLimitValue;
- (bool)hasLimited;
- (bool)hasReverseLimitOrder;
- (bool)hasSmartCriteria;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)limitKind;
- (unsigned int)limitOrder;
- (unsigned int)limitValue;
- (bool)limited;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)reverseLimitOrder;
- (void)setDynamic:(bool)arg1;
- (void)setEnabledItemsOnly:(bool)arg1;
- (void)setEvaluationOrder:(unsigned int)arg1;
- (void)setFiltered:(bool)arg1;
- (void)setGenius:(bool)arg1;
- (void)setHasDynamic:(bool)arg1;
- (void)setHasEnabledItemsOnly:(bool)arg1;
- (void)setHasEvaluationOrder:(bool)arg1;
- (void)setHasFiltered:(bool)arg1;
- (void)setHasGenius:(bool)arg1;
- (void)setHasLimitKind:(bool)arg1;
- (void)setHasLimitOrder:(bool)arg1;
- (void)setHasLimitValue:(bool)arg1;
- (void)setHasLimited:(bool)arg1;
- (void)setHasReverseLimitOrder:(bool)arg1;
- (void)setLimitKind:(int)arg1;
- (void)setLimitOrder:(unsigned int)arg1;
- (void)setLimitValue:(unsigned int)arg1;
- (void)setLimited:(bool)arg1;
- (void)setReverseLimitOrder:(bool)arg1;
- (void)setSmartCriteria:(id)arg1;
- (id)smartCriteria;
- (void)writeTo:(id)arg1;

@end
