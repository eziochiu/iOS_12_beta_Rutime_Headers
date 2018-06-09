/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieMovie : SADomainObject

@property (nonatomic, copy) NSArray *actors;
@property (nonatomic, copy) NSArray *directors;
@property (nonatomic, copy) NSArray *genres;
@property (nonatomic, copy) NSURL *hiResTrailerUri;
@property (nonatomic, copy) NSURL *iTunesUri;
@property (nonatomic) bool is3d;
@property (nonatomic, copy) NSNumber *isAvailableOnItunesForPurchase;
@property (nonatomic, copy) NSNumber *isAvailableOnItunesForRent;
@property (nonatomic, copy) NSURL *lowResTrailerUri;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *posterImages;
@property (nonatomic, copy) NSURL *posterUri;
@property (nonatomic, copy) NSNumber *qualityRating;
@property (nonatomic, copy) NSString *rating;
@property (nonatomic, retain) SALocalSearchReviewList *reviews;
@property (nonatomic, copy) NSURL *rottenTomatoesUri;
@property (nonatomic) long long runtimeInMinutes;
@property (nonatomic, copy) NSArray *studios;
@property (nonatomic, copy) NSString *synopsis;
@property (nonatomic, copy) NSString *theaterShowtimeSearchRegionDescription;
@property (nonatomic, copy) NSArray *theaterShowtimes;
@property (nonatomic, copy) NSDate *theatricalReleaseDate;

+ (id)movie;
+ (id)movieWithDictionary:(id)arg1 context:(id)arg2;

- (id)actors;
- (id)directors;
- (id)encodedClassName;
- (id)genres;
- (id)groupIdentifier;
- (id)hiResTrailerUri;
- (id)iTunesUri;
- (bool)is3d;
- (id)isAvailableOnItunesForPurchase;
- (id)isAvailableOnItunesForRent;
- (id)lowResTrailerUri;
- (id)name;
- (id)posterImages;
- (id)posterUri;
- (id)qualityRating;
- (id)rating;
- (id)reviews;
- (id)rottenTomatoesUri;
- (long long)runtimeInMinutes;
- (void)setActors:(id)arg1;
- (void)setDirectors:(id)arg1;
- (void)setGenres:(id)arg1;
- (void)setHiResTrailerUri:(id)arg1;
- (void)setITunesUri:(id)arg1;
- (void)setIs3d:(bool)arg1;
- (void)setIsAvailableOnItunesForPurchase:(id)arg1;
- (void)setIsAvailableOnItunesForRent:(id)arg1;
- (void)setLowResTrailerUri:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPosterImages:(id)arg1;
- (void)setPosterUri:(id)arg1;
- (void)setQualityRating:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setReviews:(id)arg1;
- (void)setRottenTomatoesUri:(id)arg1;
- (void)setRuntimeInMinutes:(long long)arg1;
- (void)setStudios:(id)arg1;
- (void)setSynopsis:(id)arg1;
- (void)setTheaterShowtimeSearchRegionDescription:(id)arg1;
- (void)setTheaterShowtimes:(id)arg1;
- (void)setTheatricalReleaseDate:(id)arg1;
- (id)studios;
- (id)synopsis;
- (id)theaterShowtimeSearchRegionDescription;
- (id)theaterShowtimes;
- (id)theatricalReleaseDate;

@end
