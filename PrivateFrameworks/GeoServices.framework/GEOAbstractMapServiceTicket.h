/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAbstractMapServiceTicket : GEOAbstractTicket <GEOMapServiceTicket> {
    NSArray * _browseCategories;
    bool  _chainResultSet;
    GEOResolvedItem * _clientResolvedResult;
    GEORelatedSearchSuggestion * _defaultRelatedSuggestion;
    GEODirectionIntent * _directionIntent;
    NSArray * _displayHeaderSubstitutes;
    unsigned int  _dymSuggestionVisibleTime;
    NSArray * _relatedSearchSuggestions;
    GEOMapRegion * _resultBoundingRegion;
    NSString * _resultDisplayHeader;
    NSString * _resultSectionHeader;
    NSArray * _retainedSearchMetadata;
    int  _searchResultType;
    bool  _shouldEnableRedoSearch;
    bool  _showDymSuggestionCloseButton;
}

@property (nonatomic, readonly) NSArray *browseCategories;
@property (nonatomic) unsigned long long cachePolicy;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (getter=isChainResultSet, nonatomic, readonly) bool chainResultSet;
@property (nonatomic, readonly) GEOResolvedItem *clientResolvedResult;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, readonly) NSArray *displayHeaderSubstitutes;
@property (nonatomic, readonly) unsigned int dymSuggestionVisibleTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) NSArray *retainedSearchMetadata;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) bool shouldEnableRedoSearch;
@property (nonatomic, readonly) bool showDymSuggestionCloseButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (id)browseCategories;
- (id)clientResolvedResult;
- (id)defaultRelatedSuggestion;
- (id)directionIntent;
- (id)displayHeaderSubstitutes;
- (unsigned int)dymSuggestionVisibleTime;
- (bool)isChainResultSet;
- (id)relatedSearchSuggestions;
- (id)resultBoundingRegion;
- (id)resultDisplayHeader;
- (id)resultSectionHeader;
- (id)retainedSearchMetadata;
- (int)searchResultType;
- (bool)shouldEnableRedoSearch;
- (bool)showDymSuggestionCloseButton;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4 queue:(id)arg5;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4 queue:(id)arg5;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;

@end
