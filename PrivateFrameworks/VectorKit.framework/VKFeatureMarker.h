/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKFeatureMarker : NSObject {
    struct shared_ptr<md::FeatureMarker> { 
        struct FeatureMarker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _actualFeatureMarker;
}

@property (readonly) const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*actualFeatureMarker;
@property (nonatomic, readonly) unsigned long long featureID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) unsigned long long venueID;

+ (id)markerWithFeatureMarker:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)actualFeatureMarker;
- (void)dealloc;
- (unsigned long long)featureID;
- (id)initWithFeatureMarkerPtr:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)name;
- (id)shortName;
- (id)styleAttributes;
- (unsigned long long)venueID;

@end
