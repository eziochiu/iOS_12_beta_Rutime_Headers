/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCompletionTicket> {
    NSString * _searchQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
- (void)applyToSuggestionList:(id)arg1;
- (bool)hasShouldDisplayNoResults;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3;
- (bool)isRapEnabled;
- (bool)matchesFragment:(id)arg1;
- (double)retainSearchTime;
- (bool)shouldDisplayNoResults;
- (void)submitWithAutoCompletionHandler:(id /* block */)arg1 auditToken:(id)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithAutoCompletionHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
