/* made by EzioChiu.
 */

@protocol GEOCompletionItem <NSObject>

@required

- (NSString *)calloutTitle;
- (GEOResolvedItem *)clientResolved;
- (GEODirectionIntent *)directionIntent;
- (float)disambiguationRadiusMeters;
- (NSArray *)displayLines;
- (NSData *)entryMetadata;
- (<GEOMapItem> *)geoMapItem;
- (bool)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (bool)hasDisambiguationRadiusMeters;
- (NSArray *)highlightsForLine:(unsigned long long)arg1;
- (GEOMapItemIdentifier *)identifier;
- (NSData *)metadata;
- (int)placeType;
- (NSString *)queryLine;
- (GEORetainedSearchMetadata *)retainedSearchMetadata;
- (GEOSearchCategory *)searchCategory;
- (void)sendFeedback;
- (long long)type;

@end
