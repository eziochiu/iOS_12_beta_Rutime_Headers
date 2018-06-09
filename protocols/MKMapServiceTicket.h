/* made by EzioChiu.
 */

@protocol MKMapServiceTicket <NSObject>

@required

- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)applyToPlaceInfo:(GEORPPlaceInfo *)arg1;
- (GEOMapRegion *)boundingRegion;
- (NSArray *)browseCategories;
- (void)cancel;
- (GEOResolvedItem *)clientResolvedResult;
- (GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
- (GEODirectionIntent *)directionIntent;
- (NSArray *)displayHeaderSubstitutes;
- (unsigned int)dymSuggestionVisibleTime;
- (NSError *)error;
- (NSArray *)exactMapItems;
- (bool)isChainResultSet;
- (NSArray *)refinedMapItems;
- (NSArray *)relatedSearchSuggestions;
- (double)requestResponseTime;
- (NSString *)resultDisplayHeader;
- (NSArray *)retainedSearchMetadata;
- (int)searchResultType;
- (NSString *)sectionHeader;
- (bool)shouldEnableRedoSearch;
- (bool)showDymSuggestionCloseButton;
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 queue:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, NSObject<OS_dispatch_queue> *, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, long long, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithRefinedHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithRefinedHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, long long, id /* block */, void*, void, id /* block */, bool, void*
- (GEOMapServiceTraits *)traits;

@end
