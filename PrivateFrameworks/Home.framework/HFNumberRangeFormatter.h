/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFNumberRangeFormatter : NSFormatter {
    NSFormatter * _numberFormatter;
}

@property (nonatomic, retain) NSFormatter *numberFormatter;

- (void).cxx_destruct;
- (id)initWithNumberFormatter:(id)arg1;
- (id)numberFormatter;
- (void)setNumberFormatter:(id)arg1;
- (id)stringForNumberRange:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
