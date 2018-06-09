/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPMediaPredicate : PBCodable <NSCopying> {
    MPPCompoundPredicate * _compoundPredicate;
    MPPConditionalPredicate * _conditionalPredicate;
    struct { 
        unsigned int type : 1; 
    }  _has;
    MPPPersistentIDsPredicate * _persistentIDsPredicate;
    MPPPropertyPredicate * _propertyPredicate;
    MPPSearchStringPredicate * _searchStringPredicate;
    int  _type;
}

@property (nonatomic, retain) MPPCompoundPredicate *compoundPredicate;
@property (nonatomic, retain) MPPConditionalPredicate *conditionalPredicate;
@property (nonatomic, readonly) bool hasCompoundPredicate;
@property (nonatomic, readonly) bool hasConditionalPredicate;
@property (nonatomic, readonly) bool hasPersistentIDsPredicate;
@property (nonatomic, readonly) bool hasPropertyPredicate;
@property (nonatomic, readonly) bool hasSearchStringPredicate;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) MPPPersistentIDsPredicate *persistentIDsPredicate;
@property (nonatomic, retain) MPPPropertyPredicate *propertyPredicate;
@property (nonatomic, retain) MPPSearchStringPredicate *searchStringPredicate;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)compoundPredicate;
- (id)conditionalPredicate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompoundPredicate;
- (bool)hasConditionalPredicate;
- (bool)hasPersistentIDsPredicate;
- (bool)hasPropertyPredicate;
- (bool)hasSearchStringPredicate;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)persistentIDsPredicate;
- (id)propertyPredicate;
- (bool)readFrom:(id)arg1;
- (id)searchStringPredicate;
- (void)setCompoundPredicate:(id)arg1;
- (void)setConditionalPredicate:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPersistentIDsPredicate:(id)arg1;
- (void)setPropertyPredicate:(id)arg1;
- (void)setSearchStringPredicate:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
