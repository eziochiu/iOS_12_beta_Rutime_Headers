/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPRidesharingInformationSource : NSObject <MSPRouteInformationSource> {
    GEOComposedWaypoint * _endWaypoint;
    GEOComposedWaypoint * _startWaypoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_endWaypoint, nonatomic, readonly) GEOComposedWaypoint *endWaypoint;
@property (readonly) unsigned long long hash;
@property (getter=_startWaypoint, nonatomic, readonly) GEOComposedWaypoint *startWaypoint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_endWaypoint;
- (id)_startWaypoint;
- (id)ifGEOStorageRouteRequestStorage;
- (id)ifRidesharingInformationSource;
- (id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2;

@end
