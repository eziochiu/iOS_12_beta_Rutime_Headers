/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoadMatcher : NSObject {
    GEOMapFeatureAccess * _mapFeatureAccess;
    bool  _useRawLocations;
}

@property (nonatomic) bool useRawLocations;

- (void).cxx_destruct;
- (id)_bestCandidateSegmentForLocation:(id)arg1 transportType:(int)arg2;
- (void)dealloc;
- (id)init;
- (id)matchLocation:(id)arg1 forTransportType:(int)arg2;
- (void)setUseRawLocations:(bool)arg1;
- (bool)useRawLocations;

@end
