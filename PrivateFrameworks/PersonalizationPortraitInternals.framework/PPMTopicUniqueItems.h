/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPMTopicUniqueItems : NSObject {
    PETDistributionEventTracker * _tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(double)arg1;
- (id)tracker;

@end
