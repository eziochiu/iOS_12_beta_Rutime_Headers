/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepInterpolations : NSObject {
    CAMediaTimingFunction * mIndividualTimingFunction;
    CAMediaTimingFunction * mOverallTimingFunction;
}

@property (nonatomic, readonly) CAMediaTimingFunction *individual;
@property (nonatomic, readonly) CAMediaTimingFunction *overall;

+ (id)interpolationsWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2;

- (void)dealloc;
- (id)individual;
- (id)initWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2;
- (id)overall;

@end
