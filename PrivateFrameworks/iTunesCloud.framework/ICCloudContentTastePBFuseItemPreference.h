/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICCloudContentTastePBFuseItemPreference : PBCodable <NSCopying> {
    long long  _adamId;
    long long  _createdOffsetMillis;
    NSString * _externalId;
    struct { 
        unsigned int adamId : 1; 
        unsigned int createdOffsetMillis : 1; 
        unsigned int preferenceType : 1; 
    }  _has;
    int  _preference;
    int  _preferenceType;
}

@property (nonatomic) long long adamId;
@property (nonatomic) long long createdOffsetMillis;
@property (nonatomic, retain) NSString *externalId;
@property (nonatomic) bool hasAdamId;
@property (nonatomic) bool hasCreatedOffsetMillis;
@property (nonatomic, readonly) bool hasExternalId;
@property (nonatomic) bool hasPreferenceType;
@property (nonatomic) int preference;
@property (nonatomic) int preferenceType;

- (void).cxx_destruct;
- (long long)adamId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)createdOffsetMillis;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalId;
- (bool)hasAdamId;
- (bool)hasCreatedOffsetMillis;
- (bool)hasExternalId;
- (bool)hasPreferenceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)preference;
- (int)preferenceType;
- (bool)readFrom:(id)arg1;
- (void)setAdamId:(long long)arg1;
- (void)setCreatedOffsetMillis:(long long)arg1;
- (void)setExternalId:(id)arg1;
- (void)setHasAdamId:(bool)arg1;
- (void)setHasCreatedOffsetMillis:(bool)arg1;
- (void)setHasPreferenceType:(bool)arg1;
- (void)setPreference:(int)arg1;
- (void)setPreferenceType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
