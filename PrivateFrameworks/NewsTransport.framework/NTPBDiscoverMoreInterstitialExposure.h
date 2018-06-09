/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBDiscoverMoreInterstitialExposure : PBCodable <NSCopying> {
    struct { 
        unsigned int nextArticleAffordanceType : 1; 
        unsigned int userAction : 1; 
        unsigned int withNextArticleAffordance : 1; 
    }  _has;
    int  _nextArticleAffordanceType;
    NSString * _tappedNextArticleAffordanceFeedId;
    int  _userAction;
    bool  _withNextArticleAffordance;
}

@property (nonatomic) bool hasNextArticleAffordanceType;
@property (nonatomic, readonly) bool hasTappedNextArticleAffordanceFeedId;
@property (nonatomic) bool hasUserAction;
@property (nonatomic) bool hasWithNextArticleAffordance;
@property (nonatomic) int nextArticleAffordanceType;
@property (nonatomic, retain) NSString *tappedNextArticleAffordanceFeedId;
@property (nonatomic) int userAction;
@property (nonatomic) bool withNextArticleAffordance;

- (void).cxx_destruct;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNextArticleAffordanceType;
- (bool)hasTappedNextArticleAffordanceFeedId;
- (bool)hasUserAction;
- (bool)hasWithNextArticleAffordance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)nextArticleAffordanceType;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasNextArticleAffordanceType:(bool)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setHasWithNextArticleAffordance:(bool)arg1;
- (void)setNextArticleAffordanceType:(int)arg1;
- (void)setTappedNextArticleAffordanceFeedId:(id)arg1;
- (void)setUserAction:(int)arg1;
- (void)setWithNextArticleAffordance:(bool)arg1;
- (id)tappedNextArticleAffordanceFeedId;
- (int)userAction;
- (bool)withNextArticleAffordance;
- (void)writeTo:(id)arg1;

@end
