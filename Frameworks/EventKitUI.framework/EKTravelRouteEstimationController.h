/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKTravelRouteEstimationController : NSObject {
    NSDate * _arrivalDate;
    <EKTravelRouteEstimationControllerDelegate> * _delegate;
    EKStructuredLocation * _destinationStructuredLocation;
    EKStructuredLocation * _evaluatedOriginLocation;
    EKEventStore * _eventStore;
    bool  _isEstimating;
    EKStructuredLocation * _originStructuredLocation;
    NSMutableArray * _rows;
    <EKStyleProvider> * _styleProvider;
    NSDictionary * _travelTimeEstimatedValues;
    NSDictionary * _travelTimeLookupErrors;
}

@property (retain) NSDate *arrivalDate;
@property (nonatomic) <EKTravelRouteEstimationControllerDelegate> *delegate;
@property (retain) EKStructuredLocation *destinationStructuredLocation;
@property (retain) EKStructuredLocation *evaluatedOriginLocation;
@property bool isEstimating;
@property (nonatomic, readonly) unsigned long long numberOfOutputRows;
@property (nonatomic, retain) EKStructuredLocation *originStructuredLocation;
@property (retain) NSDictionary *travelTimeEstimatedValues;
@property (retain) NSDictionary *travelTimeLookupErrors;

+ (id)_basedOnLocationLocalizedString;

- (void).cxx_destruct;
- (void)_beginOriginLocationEstimationCoreRoutineLookup;
- (void)_beginOriginLocationEstimationEventKitLookup;
- (long long)_estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)arg1;
- (id)_estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)arg1;
- (bool)_estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)arg1;
- (double)_estimatedTravelTimeValueAtRowIndex:(unsigned long long)arg1;
- (id)_imageForCellAtIndex:(unsigned long long)arg1;
- (void)_lookupTimedOut;
- (void)_originLocationEstimationCompletedCoreRoutineLookup;
- (void)_originLocationEstimationCompletedEventKitLookup;
- (id)_routingModeTypesAsEnum;
- (id)arrivalDate;
- (void)beginOriginLocationEstimationLookup;
- (void)beginTravelTimeEstimationLookup;
- (void)dealloc;
- (id)delegate;
- (id)destinationStructuredLocation;
- (long long)estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)arg1;
- (id)estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)arg1;
- (bool)estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)arg1;
- (id)estimatedTravelTimeTableViewCellWithRowIndex:(unsigned long long)arg1;
- (double)estimatedTravelTimeValueAtRowIndex:(unsigned long long)arg1;
- (id)evaluatedOriginLocation;
- (id)initWithDestinationStructuredLocation:(id)arg1 styleProvider:(id)arg2 eventStore:(id)arg3;
- (bool)isEstimating;
- (unsigned long long)numberOfOutputRows;
- (id)originStructuredLocation;
- (void)setArrivalDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationStructuredLocation:(id)arg1;
- (void)setEvaluatedOriginLocation:(id)arg1;
- (void)setIsEstimating:(bool)arg1;
- (void)setOriginStructuredLocation:(id)arg1;
- (void)setTravelTimeEstimatedValues:(id)arg1;
- (void)setTravelTimeLookupErrors:(id)arg1;
- (id)travelTimeEstimatedValues;
- (id)travelTimeLookupErrors;

@end
