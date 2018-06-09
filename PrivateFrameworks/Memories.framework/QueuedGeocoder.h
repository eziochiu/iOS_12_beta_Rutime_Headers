/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface QueuedGeocoder : NSObject {
    GeocodeRequest * _currentRequest;
    CLGeocoder * _geocoder;
    NSMapTable * _locationToPlacemarksMap;
    NSMapTable * _locationToResultMap;
    NSRecursiveLock * _lock;
    double  _placemarkDifferentationDistance;
    Reachability * _reachability;
}

@property (nonatomic, retain) GeocodeRequest *currentRequest;
@property (nonatomic, retain) CLGeocoder *geocoder;
@property (nonatomic, retain) NSMapTable *locationToPlacemarksMap;
@property (nonatomic, retain) NSMapTable *locationToResultMap;
@property (nonatomic, retain) NSRecursiveLock *lock;
@property (nonatomic) double placemarkDifferentationDistance;
@property (nonatomic, retain) Reachability *reachability;

+ (id)sharedGeocoder;

- (void).cxx_destruct;
- (id)_init;
- (id)currentRequest;
- (void)dequeueRequest;
- (id)geocoder;
- (id)init;
- (id)locationToPlacemarksMap;
- (id)locationToResultMap;
- (id)lock;
- (double)placemarkDifferentationDistance;
- (id)reachability;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCurrentRequest:(id)arg1;
- (void)setGeocoder:(id)arg1;
- (void)setLocationToPlacemarksMap:(id)arg1;
- (void)setLocationToResultMap:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setPlacemarkDifferentationDistance:(double)arg1;
- (void)setReachability:(id)arg1;

@end
