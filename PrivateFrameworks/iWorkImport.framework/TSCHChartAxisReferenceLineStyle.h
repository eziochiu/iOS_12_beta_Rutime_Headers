/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisReferenceLineStyle : NSObject {
    TSCHChartAxisID * mAxisIdentifier;
    NSArray * mReferenceLineStyles;
}

@property (nonatomic, copy) TSCHChartAxisID *axisIdentifier;
@property (nonatomic, copy) NSArray *referenceLineStyles;

- (id)axisIdentifier;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)referenceLineStyles;
- (void)setAxisIdentifier:(id)arg1;
- (void)setReferenceLineStyles:(id)arg1;

@end
