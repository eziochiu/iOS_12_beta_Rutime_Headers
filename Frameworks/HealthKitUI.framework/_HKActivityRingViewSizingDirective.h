/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _HKActivityRingViewSizingDirective : NSObject {
    NSString * _identifier;
    double  _outerRingOffset;
    double  _ringInterspacing;
    double  _ringThickness;
    double  _width;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double outerRingOffset;
@property (nonatomic) double ringInterspacing;
@property (nonatomic) double ringThickness;
@property (nonatomic) double width;

+ (id)activityRingSizingDirectiveWithIdentifier:(id)arg1 width:(double)arg2 outerRingOffset:(double)arg3 ringThickness:(double)arg4 ringInterspacing:(double)arg5;
+ (id)sortedRingRatioDirectives;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (double)outerRingOffset;
- (double)ringInterspacing;
- (double)ringThickness;
- (void)setIdentifier:(id)arg1;
- (void)setOuterRingOffset:(double)arg1;
- (void)setRingInterspacing:(double)arg1;
- (void)setRingThickness:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
