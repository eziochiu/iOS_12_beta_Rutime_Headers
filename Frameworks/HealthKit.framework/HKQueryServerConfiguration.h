/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQueryServerConfiguration : HKTaskConfiguration {
    _HKFilter * _filter;
    HKObjectType * _objectType;
    bool  _shouldDeactivateAfterInitialResults;
    bool  _shouldSuppressDataCollection;
}

@property (nonatomic, retain) _HKFilter *filter;
@property (nonatomic, retain) HKObjectType *objectType;
@property (nonatomic) bool shouldDeactivateAfterInitialResults;
@property (nonatomic) bool shouldSuppressDataCollection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (id)initWithCoder:(id)arg1;
- (id)objectType;
- (void)setFilter:(id)arg1;
- (void)setObjectType:(id)arg1;
- (void)setShouldDeactivateAfterInitialResults:(bool)arg1;
- (void)setShouldSuppressDataCollection:(bool)arg1;
- (bool)shouldDeactivateAfterInitialResults;
- (bool)shouldSuppressDataCollection;

@end
