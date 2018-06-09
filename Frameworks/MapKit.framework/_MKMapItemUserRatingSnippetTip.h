/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKMapItemUserRatingSnippetTip : NSObject <MKMapItemProviderRatingSnippet> {
    MKMapItem * _mapItem;
    GEOMapItemTip * _tip;
}

@property (getter=_date, nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_geoMapItemTIp, nonatomic, readonly) GEOMapItemTip *geoMapItemTip;
@property (getter=_geoReview, nonatomic, readonly) <GEOMapItemReview> *geoReview;
@property (readonly) unsigned long long hash;
@property (getter=_localizedSnippet, nonatomic, readonly) NSString *localizedSnippet;
@property (getter=_localizedSnippetLocale, nonatomic, readonly) NSString *localizedSnippetLocale;
@property (getter=_maxScore, nonatomic, readonly) double maxScore;
@property (getter=_normalizedScore, nonatomic, readonly) double normalizedScore;
@property (getter=_reviewerImageURL, nonatomic, readonly) NSURL *reviewerImageURL;
@property (getter=_reviewerName, nonatomic, readonly) NSString *reviewerName;
@property (getter=_score, nonatomic, readonly) double score;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_date;
- (id)_geoMapItemTIp;
- (id)_geoReview;
- (id)_localizedSnippet;
- (id)_localizedSnippetLocale;
- (double)_maxScore;
- (double)_normalizedScore;
- (id)_reviewerImageURL;
- (id)_reviewerName;
- (double)_score;
- (id)initWithMapItem:(id)arg1 review:(id)arg2;
- (void)showWithCompletionHandler:(id /* block */)arg1;

@end
