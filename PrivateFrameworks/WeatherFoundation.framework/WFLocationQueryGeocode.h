/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFLocationQueryGeocode : NSObject <WFLocationQuery> {
    bool  _finished;
    WFResponse * _response;
    id /* block */  _resultHandler;
    CLGeocoder * _reverseGeocoder;
    MKLocalSearch * _search;
    MKLocalSearchCompletion * _searchCompletion;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _searchCoordinate;
    NSString * _searchString;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _unshiftedCoordinate;
    WFTaskIdentifier * identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) WFTaskIdentifier *identifier;
@property (retain) WFResponse *response;
@property (copy) id /* block */ resultHandler;
@property (nonatomic, retain) CLGeocoder *reverseGeocoder;
@property (nonatomic, retain) MKLocalSearch *search;
@property (readonly) MKLocalSearchCompletion *searchCompletion;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } searchCoordinate;
@property (readonly) NSString *searchString;
@property (readonly) Class superclass;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } unshiftedCoordinate;

+ (id)clReverseGeocoderCache;
+ (void)invalidateCaches;
+ (id)mkLocalSearchGeoCodeCache;
+ (id)queryWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
+ (id)queryWithDictionaryRepresentation:(id)arg1 resultHandler:(id /* block */)arg2;
+ (id)queryWithSearchCompletion:(id)arg1 resultHandler:(id /* block */)arg2;
+ (id)queryWithSearchString:(id)arg1 resultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_handleErrorResponse:(id)arg1;
- (id)_mkLocalSearchRequest;
- (id)_reverseGeocoderLocation;
- (void)_startCLGeocoderReverseGeo;
- (void)_startMKLocalSearch;
- (void)cancel;
- (void)handleSearchResponseWithLocation:(id)arg1;
- (id)identifier;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)initWithSearchString:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)response;
- (id /* block */)resultHandler;
- (id)reverseGeocoder;
- (id)search;
- (id)searchCompletion;
- (struct CLLocationCoordinate2D { double x1; double x2; })searchCoordinate;
- (id)searchString;
- (void)setIdentifier:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)setReverseGeocoder:(id)arg1;
- (void)setSearch:(id)arg1;
- (void)setSearchCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setUnshiftedCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)start;
- (struct CLLocationCoordinate2D { double x1; double x2; })unshiftedCoordinate;

@end
