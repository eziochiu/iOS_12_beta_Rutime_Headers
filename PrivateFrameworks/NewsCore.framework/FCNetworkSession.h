/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNetworkSession : NSObject <FCNetworkSession> {
    long long  _cellularRadioAccessTechnology;
    NSDate * _endDate;
    NSMutableArray * _eventGroups;
    NSDate * _startDate;
    bool  _wifiReachable;
}

@property (nonatomic) long long cellularRadioAccessTechnology;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, readonly) NSArray *eventGroups;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalFailureCount;
@property (nonatomic, readonly) unsigned long long totalSuccessCount;
@property (nonatomic) bool wifiReachable;

- (void).cxx_destruct;
- (void)addEventGroup:(id)arg1;
- (long long)cellularRadioAccessTechnology;
- (id)endDate;
- (id)eventGroups;
- (id)generateSessionJSONDataWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)init;
- (void)setCellularRadioAccessTechnology:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setWifiReachable:(bool)arg1;
- (id)startDate;
- (unsigned long long)totalFailureCount;
- (unsigned long long)totalSuccessCount;
- (bool)wifiReachable;

@end
