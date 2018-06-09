/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPrefetchConfig : PBCodable <NSCopying> {
    bool  _backgroundFetchEnabled;
    bool  _backgroundFetchEnabled2;
    double  _backgroundFetchMinimumInterval;
    long long  _feedPrefetchFavoritesLimit;
    bool  _feedPrefetchForYou;
    struct { 
        unsigned int backgroundFetchMinimumInterval : 1; 
        unsigned int feedPrefetchFavoritesLimit : 1; 
        unsigned int prefetchedForYouExpiration : 1; 
        unsigned int backgroundFetchEnabled : 1; 
        unsigned int backgroundFetchEnabled2 : 1; 
        unsigned int feedPrefetchForYou : 1; 
    }  _has;
    long long  _prefetchedForYouExpiration;
}

@property (nonatomic) bool backgroundFetchEnabled;
@property (nonatomic) bool backgroundFetchEnabled2;
@property (nonatomic) double backgroundFetchMinimumInterval;
@property (nonatomic) long long feedPrefetchFavoritesLimit;
@property (nonatomic) bool feedPrefetchForYou;
@property (nonatomic) bool hasBackgroundFetchEnabled;
@property (nonatomic) bool hasBackgroundFetchEnabled2;
@property (nonatomic) bool hasBackgroundFetchMinimumInterval;
@property (nonatomic) bool hasFeedPrefetchFavoritesLimit;
@property (nonatomic) bool hasFeedPrefetchForYou;
@property (nonatomic) bool hasPrefetchedForYouExpiration;
@property (nonatomic) long long prefetchedForYouExpiration;

- (bool)backgroundFetchEnabled;
- (bool)backgroundFetchEnabled2;
- (double)backgroundFetchMinimumInterval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)feedPrefetchFavoritesLimit;
- (bool)feedPrefetchForYou;
- (bool)hasBackgroundFetchEnabled;
- (bool)hasBackgroundFetchEnabled2;
- (bool)hasBackgroundFetchMinimumInterval;
- (bool)hasFeedPrefetchFavoritesLimit;
- (bool)hasFeedPrefetchForYou;
- (bool)hasPrefetchedForYouExpiration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)prefetchedForYouExpiration;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundFetchEnabled2:(bool)arg1;
- (void)setBackgroundFetchEnabled:(bool)arg1;
- (void)setBackgroundFetchMinimumInterval:(double)arg1;
- (void)setFeedPrefetchFavoritesLimit:(long long)arg1;
- (void)setFeedPrefetchForYou:(bool)arg1;
- (void)setHasBackgroundFetchEnabled2:(bool)arg1;
- (void)setHasBackgroundFetchEnabled:(bool)arg1;
- (void)setHasBackgroundFetchMinimumInterval:(bool)arg1;
- (void)setHasFeedPrefetchFavoritesLimit:(bool)arg1;
- (void)setHasFeedPrefetchForYou:(bool)arg1;
- (void)setHasPrefetchedForYouExpiration:(bool)arg1;
- (void)setPrefetchedForYouExpiration:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
