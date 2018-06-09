/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeLocationEvent : HMDLogEvent <HMDAWDLogEvent> {
    CLLocation * _nearestLOI;
    unsigned long long  _numOfIterations;
    CLLocation * _selectedHomeLocation;
    NSArray * _tuples;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocation *nearestLOI;
@property (nonatomic) unsigned long long numOfIterations;
@property (nonatomic, retain) CLLocation *selectedHomeLocation;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tuples;

+ (id)eventWithLocationTuples:(id)arg1 selectedHomeLocation:(id)arg2 numberOfIterations:(unsigned long long)arg3 nearestLOI:(id)arg4;
+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)awdLocationFromLocationTuple:(id)arg1;
- (id)metricForAWD;
- (id)nearestLOI;
- (unsigned long long)numOfIterations;
- (id)selectedHomeLocation;
- (void)setNearestLOI:(id)arg1;
- (void)setNumOfIterations:(unsigned long long)arg1;
- (void)setSelectedHomeLocation:(id)arg1;
- (void)setTuples:(id)arg1;
- (id)tuples;

@end
