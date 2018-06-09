/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOQuickETATransitDeparturesInfo : NSObject {
    double  _departureFrequency;
    NSDate * _departureFrequencyValidUntil;
    bool  _departuresHaveFrequency;
    NSString * _direction;
    NSString * _headsign;
}

@property (nonatomic, readonly) double departureFrequency;
@property (nonatomic, readonly) NSDate *departureFrequencyValidUntil;
@property (nonatomic, readonly) bool departuresHaveFrequency;
@property (nonatomic, readonly) NSString *direction;
@property (nonatomic, readonly) NSString *headsign;

- (void).cxx_destruct;
- (id)_chooseMostImportantTransitLegInRoute:(id)arg1;
- (double)departureFrequency;
- (id)departureFrequencyValidUntil;
- (bool)departuresHaveFrequency;
- (id)description;
- (id)direction;
- (id)headsign;
- (id)initWithComposedRoute:(id)arg1;

@end
