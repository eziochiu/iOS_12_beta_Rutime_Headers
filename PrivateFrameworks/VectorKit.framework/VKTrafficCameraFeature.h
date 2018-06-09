/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficCameraFeature : VKTrafficFeature {
    double  _approachingDistanceInMeters;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _approachingRouteOffset;
    unsigned int  _cameraPriority;
    int  _groupIdentifier;
    bool  _isAboveSpeedThreshold;
    bool  _shouldUpdateStyle;
    unsigned int  _speedLimit;
    NSString * _speedLimitText;
    unsigned int  _speedThreshold;
    long long  _state;
    long long  _type;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) double approachingDistanceInMeters;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } approachingRouteOffset;
@property (nonatomic, readonly) unsigned int cameraPriority;
@property (nonatomic, readonly) int groupIdentifier;
@property (nonatomic) bool isAboveSpeedThreshold;
@property (nonatomic, readonly) bool isGrouped;
@property (nonatomic) long long labelState;
@property (nonatomic) bool shouldUpdateStyle;
@property (nonatomic, readonly) NSString *speedLimitText;
@property (nonatomic, readonly) unsigned int speedThreshold;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (id).cxx_construct;
- (double)approachingDistanceInMeters;
- (struct PolylineCoordinate { unsigned int x1; float x2; })approachingRouteOffset;
- (unsigned int)cameraPriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)groupIdentifier;
- (id)initWithTrafficCamera:(id)arg1;
- (bool)isAboveSpeedThreshold;
- (bool)isAheadButNotApproaching;
- (bool)isApproaching;
- (bool)isBehind;
- (bool)isEqual:(id)arg1;
- (bool)isGrouped;
- (bool)isSpeedLimitCamera;
- (long long)labelState;
- (void)setApproachingRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setIsAboveSpeedThreshold:(bool)arg1;
- (void)setLabelState:(long long)arg1;
- (void)setShouldUpdateStyle:(bool)arg1;
- (bool)shouldUpdateStyle;
- (id)speedLimitText;
- (unsigned int)speedThreshold;
- (long long)type;
- (id)uniqueIdentifier;
- (void)updateLabelStateForRouteUserOffset:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg1;

@end
