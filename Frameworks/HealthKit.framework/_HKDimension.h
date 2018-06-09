/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDimension : NSObject {
    _HKFactorization * _reduction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _reductionLock;
}

+ (id)dimensionFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_baseDimensions;
- (id)description;
- (id)init;
- (id)reduction;

@end
