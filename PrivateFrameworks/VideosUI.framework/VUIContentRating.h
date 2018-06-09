/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIContentRating : NSObject <NSCopying> {
    unsigned long long  _rank;
    NSString * _ratingDescription;
    NSString * _ratingLabel;
    long long  _ratingSystem;
}

@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (nonatomic) unsigned long long rank;
@property (nonatomic, copy) NSString *ratingDescription;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

- (void).cxx_destruct;
- (id)_initWithRatingSystem:(long long)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRatingSystem:(long long)arg1 explicitContent:(bool)arg2;
- (id)initWithRatingSystemString:(id)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4;
- (id)initWithStringRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (unsigned long long)rank;
- (id)ratingDescription;
- (id)ratingLabel;
- (long long)ratingSystem;
- (void)setRank:(unsigned long long)arg1;
- (void)setRatingDescription:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingSystem:(long long)arg1;
- (id)stringRepresentation;

@end
