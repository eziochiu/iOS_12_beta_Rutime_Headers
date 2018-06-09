/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesisValue : NSObject <NSSecureCoding> {
    NSDate * _arrivalDate;
    GEORouteHypothesis * _currentHypothesis;
    GEOComposedWaypoint * _destination;
    NSDate * _expirationDate;
    GEORouteHypothesisMonitor * _monitor;
    GEOComposedWaypoint * _origin;
    bool  _prediction;
    long long  _rowId;
    GEOMapServiceTraits * _traits;
    int  _transportType;
    double  _updatedTimeStamp;
    double  _valueRefreshTimeStamp;
}

@property (nonatomic, readonly) NSDate *arrivalDate;
@property (nonatomic, retain) GEORouteHypothesis *currentHypothesis;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) bool isStaleToPurgeFromDisk;
@property (readonly) bool isStaleToRefresh;
@property (nonatomic, readonly) GEORouteHypothesisMonitor *monitor;
@property (nonatomic, readonly) GEOComposedWaypoint *origin;
@property (nonatomic) bool prediction;
@property (nonatomic) long long rowId;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;
@property (nonatomic) int transportType;
@property (nonatomic) double updatedTimeStamp;
@property (nonatomic) double valueRefreshTimeStamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)aggresiveArrivalIsAfterExpiration;
- (id)arrivalDate;
- (bool)canBePersistedToDisk;
- (void)commonInit;
- (id)currentHypothesis;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 expirationDate:(id)arg5 traceName:(id)arg6 traits:(id)arg7;
- (bool)isStaleToPurgeFromDisk;
- (bool)isStaleToRefresh;
- (id)monitor;
- (id)origin;
- (bool)prediction;
- (long long)rowId;
- (void)setCurrentHypothesis:(id)arg1;
- (void)setPrediction:(bool)arg1;
- (void)setRowId:(long long)arg1;
- (void)setTransportType:(int)arg1;
- (void)setUpdatedTimeStamp:(double)arg1;
- (void)setValueRefreshTimeStamp:(double)arg1;
- (id)traits;
- (int)transportType;
- (double)updatedTimeStamp;
- (double)valueRefreshTimeStamp;

@end
