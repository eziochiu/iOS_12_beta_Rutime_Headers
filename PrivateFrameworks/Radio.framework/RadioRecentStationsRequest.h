/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsRequest : RadioRequest {
    RadioStation * _currentStation;
    NSString * _currentStationStringID;
    SSURLConnectionRequest * _request;
    bool  _shouldGroupResponses;
    unsigned long long  _stationCount;
}

@property (nonatomic) bool shouldGroupResponses;
@property (nonatomic) unsigned long long stationCount;

- (void).cxx_destruct;
- (void)_configureRequestPropertiesForCaching:(id)arg1 returningCacheKey:(id*)arg2;
- (id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)arg1;
- (id)_recentStationsResponseWithConnectionResponse:(id)arg1 returningError:(id*)arg2;
- (void)cancel;
- (void)getCachedRecentStationsResponseWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCurrentStation:(id)arg1;
- (id)initWithCurrentStationStringID:(id)arg1;
- (void)setShouldGroupResponses:(bool)arg1;
- (void)setStationCount:(unsigned long long)arg1;
- (bool)shouldGroupResponses;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)stationCount;

@end
