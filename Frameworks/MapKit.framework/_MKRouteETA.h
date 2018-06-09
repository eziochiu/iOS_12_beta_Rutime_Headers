/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKRouteETA : NSObject {
    double  _distance;
    double  _responseTime;
    int  _status;
    unsigned long long  _transportType;
    double  _travelTime;
}

@property (nonatomic) double distance;
@property (nonatomic, readonly) double responseTime;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long transportType;
@property (nonatomic) double travelTime;

+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3;
+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 status:(int)arg4;

- (double)distance;
- (double)responseTime;
- (void)setDistance:(double)arg1;
- (void)setStatus:(int)arg1;
- (void)setTransportType:(unsigned long long)arg1;
- (void)setTravelTime:(double)arg1;
- (int)status;
- (unsigned long long)transportType;
- (double)travelTime;

@end
