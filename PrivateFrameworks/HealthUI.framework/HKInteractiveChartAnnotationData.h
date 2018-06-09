/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartAnnotationData : NSObject <HKGraphSeriesChartData> {
    NSString * _annotation;
}

@property (nonatomic, retain) NSString *annotation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)annotation;
- (void)setAnnotation:(id)arg1;

@end
