/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteStep : NSObject {
    GEOComposedRoute * _composedRoute;
    int  _drivingSide;
    GEOStep * _geoStep;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _maneuverPointRange;
    NSString * _maneuverRoadName;
    NSString * _maneuverRoadOrExitName;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _pointRange;
    long long  _routeLegType;
    unsigned long long  _stepIndex;
}

@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *closestLogicalBoardOrAlightStep;
@property (nonatomic) GEOComposedRoute *composedRoute;
@property (nonatomic, readonly) unsigned int distance;
@property (nonatomic, readonly) int drivingSide;
@property (nonatomic, readonly) unsigned int duration;
@property (nonatomic, readonly) struct { double x1; double x2; } endGeoCoordinate;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) GEOPBTransitStop *endingStop;
@property (nonatomic, readonly) GEOStep *geoStep;
@property (nonatomic, readonly) bool hasDuration;
@property (nonatomic, readonly) GEOInstructionSet *instructions;
@property (nonatomic, readonly) bool isArrivalStep;
@property (nonatomic, readonly) bool isUncertainArrival;
@property (nonatomic, readonly) GEOComposedRouteLeg *leg;
@property (nonatomic, readonly) unsigned int maneuverEndPointIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } maneuverPointRange;
@property (nonatomic, readonly) NSString *maneuverRoadName;
@property (nonatomic, readonly) NSString *maneuverRoadOrExitName;
@property (nonatomic, readonly) unsigned int maneuverStartPointIndex;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *nextAlightingStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *nextBoardingStep;
@property (getter=getNextStep, nonatomic, readonly) GEOComposedRouteStep *nextStep;
@property (nonatomic, readonly) GEOPBTransitStop *nextStop;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } pointRange;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *previousAlightingStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *previousBoardingStep;
@property (getter=getPreviousStep, nonatomic, readonly) GEOComposedRouteStep *previousStep;
@property (nonatomic, readonly) GEOPBTransitStop *previousStop;
@property (nonatomic, readonly) NSArray *routeDetailsPrimaryArtwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *routeDetailsSecondaryArtwork;
@property (nonatomic, readonly) long long routeLegType;
@property (nonatomic, readonly) bool shouldCreateAlightExitGroup;
@property (nonatomic, readonly) bool shouldCreateArrivalGroup;
@property (nonatomic, readonly) bool shouldCreateEnterBoardGroup;
@property (nonatomic, readonly) bool shouldCreateFerryProgressionGroup;
@property (nonatomic, readonly) bool shouldCreateTransferGroup;
@property (nonatomic, readonly) bool shouldCreateTripProgressionGroup;
@property (nonatomic, readonly) struct { double x1; double x2; } startGeoCoordinate;
@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) unsigned int startTime;
@property (nonatomic, readonly) GEOPBTransitStop *startingStop;
@property (nonatomic, readonly) unsigned int stepID;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) NSArray *steppingArtwork;
@property (nonatomic, readonly) GEOTransitStep *transitStep;
@property (nonatomic, readonly) int transportType;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (bool)_MapsCarPlay_isEqual:(id)arg1;
- (bool)_belongsToTransferGroup;
- (id)closestLogicalBoardOrAlightStep;
- (id)composedRoute;
- (id)description;
- (unsigned int)distance;
- (int)drivingSide;
- (unsigned int)duration;
- (struct { double x1; double x2; })endGeoCoordinate;
- (unsigned int)endPointIndex;
- (id)endingStop;
- (id)firstNameOrBranch;
- (id)geoStep;
- (id)getNextStep;
- (id)getPreviousStep;
- (bool)hasDuration;
- (id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(long long)arg3 stepIndex:(unsigned long long)arg4 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 maneuverPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)instructions;
- (bool)isArrivalStep;
- (bool)isUncertainArrival;
- (id)leg;
- (int)maneuver;
- (unsigned int)maneuverEndPointIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })maneuverPointRange;
- (id)maneuverRoadName;
- (id)maneuverRoadOrExitName;
- (unsigned int)maneuverStartPointIndex;
- (id)nextAlightingStep;
- (id)nextBoardingStep;
- (id)nextStop;
- (unsigned int)pointCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pointRange;
- (id)previousAlightingStep;
- (id)previousBoardingStep;
- (id)previousStop;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (long long)routeLegType;
- (void)setComposedRoute:(id)arg1;
- (bool)shouldCreateAlightExitGroup;
- (bool)shouldCreateArrivalGroup;
- (bool)shouldCreateEnterBoardGroup;
- (bool)shouldCreateFerryProgressionGroup;
- (bool)shouldCreateTransferGroup;
- (bool)shouldCreateTripProgressionGroup;
- (bool)shouldPreloadWithHighPriority;
- (struct { double x1; double x2; })startGeoCoordinate;
- (unsigned int)startPointIndex;
- (unsigned int)startTime;
- (id)startingStop;
- (unsigned int)stepID;
- (unsigned long long)stepIndex;
- (id)steppingArtwork;
- (id)transitStep;
- (int)transportType;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)contentsForContext:(long long)arg1;

@end
