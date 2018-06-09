/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDReview : PBCodable <NSCopying> {
    struct { 
        unsigned int reviewTime : 1; 
    }  _has;
    GEOPDRating * _rating;
    NSString * _reviewId;
    double  _reviewTime;
    GEOPDUser * _reviewer;
    NSMutableArray * _snippets;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasRating;
@property (nonatomic, readonly) bool hasReviewId;
@property (nonatomic) bool hasReviewTime;
@property (nonatomic, readonly) bool hasReviewer;
@property (nonatomic, retain) GEOPDRating *rating;
@property (nonatomic, retain) NSString *reviewId;
@property (nonatomic) double reviewTime;
@property (nonatomic, retain) GEOPDUser *reviewer;
@property (nonatomic, retain) NSMutableArray *snippets;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)reviewsForPlaceData:(id)arg1;
+ (Class)snippetType;

- (void).cxx_destruct;
- (id)_bestSnippet;
- (id)_bestSnippetLocale;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRating;
- (bool)hasReviewId;
- (bool)hasReviewTime;
- (bool)hasReviewer;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)rating;
- (bool)readFrom:(id)arg1;
- (id)reviewId;
- (double)reviewTime;
- (id)reviewer;
- (void)setHasReviewTime:(bool)arg1;
- (void)setRating:(id)arg1;
- (void)setReviewId:(id)arg1;
- (void)setReviewTime:(double)arg1;
- (void)setReviewer:(id)arg1;
- (void)setSnippets:(id)arg1;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (id)snippets;
- (unsigned long long)snippetsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
