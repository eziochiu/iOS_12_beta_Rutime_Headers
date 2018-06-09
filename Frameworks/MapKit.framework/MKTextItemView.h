/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTextItemView : UIView {
    NSArray * _labels;
}

@property (nonatomic, copy) NSArray *labels;

- (void).cxx_destruct;
- (id)initWithStrings:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 labelsNumberOfLines:(long long)arg4;
- (id)labels;
- (void)setLabels:(id)arg1;
- (void)setTextColor:(id)arg1;

@end
