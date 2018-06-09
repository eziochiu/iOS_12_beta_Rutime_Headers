/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemContentRating : NSObject <NSCopying> {
    NSDictionary * _dictionary;
    long long  _rank;
    NSString * _ratingDescription;
    NSString * _ratingLabel;
    long long  _ratingSystem;
    SSItemArtworkImage * _ratingSystemLogo;
    bool  _shouldHideWhenRestricted;
}

@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (nonatomic) long long rank;
@property (nonatomic, copy) NSString *ratingDescription;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;
@property (nonatomic, copy) SSItemArtworkImage *ratingSystemLogo;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic) bool shouldHideWhenRestricted;

+ (long long)ratingSystemFromString:(id)arg1;

- (bool)_isRatingSystemForApps:(long long)arg1;
- (bool)_isRatingSystemForMovies:(long long)arg1;
- (bool)_isRatingSystemForMusic:(long long)arg1;
- (bool)_isRatingSystemForTV:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (bool)isExplicitContent;
- (bool)isRestricted;
- (long long)rank;
- (id)ratingDescription;
- (id)ratingLabel;
- (long long)ratingSystem;
- (id)ratingSystemLogo;
- (void)setRank:(long long)arg1;
- (void)setRatingDescription:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingSystem:(long long)arg1;
- (void)setRatingSystemLogo:(id)arg1;
- (void)setShouldHideWhenRestricted:(bool)arg1;
- (bool)shouldHideWhenRestricted;
- (id)valueForProperty:(id)arg1;

@end
