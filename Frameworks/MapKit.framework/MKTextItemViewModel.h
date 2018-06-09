/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTextItemViewModel : NSObject {
    NSArray * _values;
}

@property (nonatomic, copy) NSArray *values;

- (void).cxx_destruct;
- (id)initWithTextItemContainer:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 maxWidth:(double)arg4;
- (unsigned long long)numberOfRows;
- (void)setValues:(id)arg1;
- (id)stringsForRowAtIndex:(unsigned long long)arg1;
- (id)values;

@end
