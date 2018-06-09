/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisReferenceLineNonStyle : NSObject {
    TSCHChartAxisID * mAxisIdentifier;
    NSArray * mReferenceLineNonStyleItems;
}

@property (nonatomic, copy) TSCHChartAxisID *axisIdentifier;
@property (nonatomic, copy) NSArray *referenceLineNonStyleItems;

- (id)axisIdentifier;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)referenceLineNonStyleItems;
- (void)setAxisIdentifier:(id)arg1;
- (void)setReferenceLineNonStyleItems:(id)arg1;

@end
