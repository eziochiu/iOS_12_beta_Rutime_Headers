/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchCompletion : NSObject {
    bool  _alreadySentFeedback;
    MKLocalSearchCompletion * _directionIntentDestination;
    MKLocalSearchCompletion * _directionIntentOrigin;
    <GEOCompletionItem> * _item;
    NSString * _localizedSectionHeader;
    MKMapItem * _mapItem;
    bool  _shouldDisplayNoResults;
    NSString * _sourceID;
}

@property (getter=_alreadySentFeedback, nonatomic, readonly) bool alreadySentFeedback;
@property (nonatomic, readonly) GEOSearchCategory *category;
@property (nonatomic, readonly) GEOResolvedItem *clientResolved;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, retain) MKLocalSearchCompletion *directionIntentDestination;
@property (nonatomic, retain) MKLocalSearchCompletion *directionIntentOrigin;
@property (getter=_disambiguationRadiusMeters, nonatomic, readonly) float disambiguationRadiusMeters;
@property (nonatomic, readonly) NSArray *displayLines;
@property (nonatomic, readonly) <GEOCompletionItem> *geoCompletionItem;
@property (getter=_hasDisambiguationRadiusMeters, nonatomic, readonly) bool hasDisambiguationRadiusMeters;
@property (nonatomic, copy) NSString *localizedSectionHeader;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (getter=_placeType, nonatomic, readonly) int placeType;
@property (nonatomic, readonly) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSArray *subtitleHighlightRanges;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *titleHighlightRanges;
@property (getter=_type, nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (bool)_alreadySentFeedback;
- (float)_disambiguationRadiusMeters;
- (bool)_hasDisambiguationRadiusMeters;
- (int)_placeType;
- (long long)_type;
- (id)calloutTitle;
- (id)category;
- (id)clientResolved;
- (id)copyStorage;
- (id)description;
- (id)directionIntent;
- (id)directionIntentDestination;
- (id)directionIntentOrigin;
- (id)displayLines;
- (id)geoCompletionItem;
- (bool)getCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1;
- (unsigned long long)hash;
- (id)highlightsForLine:(unsigned long long)arg1;
- (id)iconWithScale:(double)arg1;
- (id)initWithGeoCompletionItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)localizedSectionHeader;
- (id)mapItem;
- (id)queryLine;
- (id)retainedSearchMetadata;
- (void)sendFeedback;
- (void)setDirectionIntentDestination:(id)arg1;
- (void)setDirectionIntentOrigin:(id)arg1;
- (void)setLocalizedSectionHeader:(id)arg1;
- (void)setSourceID:(id)arg1;
- (id)sourceID;
- (id)subtitle;
- (id)subtitleHighlightRanges;
- (id)title;
- (id)titleHighlightRanges;

@end
