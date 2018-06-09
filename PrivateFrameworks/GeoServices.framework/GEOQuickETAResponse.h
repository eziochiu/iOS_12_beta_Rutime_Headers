/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOQuickETAResponse : NSObject {
    unsigned int  _baselineETASeconds;
    GEOLocation * _destinationLocation;
    double  _distance;
    double  _distanceToDepartureStop;
    unsigned int  _responseETASeconds;
    NSString * _routeDescription;
    NSMutableArray * _sortedETAs;
    GEOLocation * _sourceLocation;
    GEOQuickETATransitDeparturesInfo * _transitDeparturesInfo;
    double  _walkingDurationToDepartureStop;
}

@property (nonatomic, readonly) unsigned int baselineETASeconds;
@property (nonatomic, readonly) GEOLocation *destinationLocation;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double distanceToDepartureStop;
@property (nonatomic, readonly) unsigned int responseETASeconds;
@property (nonatomic, readonly) NSString *routeDescription;
@property (nonatomic, readonly) NSMutableArray *sortedETAs;
@property (nonatomic, readonly) GEOLocation *sourceLocation;
@property (nonatomic, readonly) GEOQuickETATransitDeparturesInfo *transitDeparturesInfo;
@property (nonatomic, readonly) double walkingDurationToDepartureStop;

- (void).cxx_destruct;
- (unsigned int)baselineETASeconds;
- (id)destinationLocation;
- (double)distance;
- (double)distanceToDepartureStop;
- (id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2;
- (id)initWithETAResult:(id)arg1 fromRequest:(id)arg2;
- (unsigned int)responseETASeconds;
- (id)routeDescription;
- (id)sortedETAs;
- (id)sourceLocation;
- (id)transitDeparturesInfo;
- (double)walkingDurationToDepartureStop;

@end
