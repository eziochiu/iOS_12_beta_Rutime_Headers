/* made by EzioChiu.
 */

@protocol HFDynamicFormattingValue <NSObject>

@required

- (<HFStringGenerator> *)currentFormattedValue;
- (<NACancelable> *)observeFormattedValueChangesWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <HFDynamicFormattingValue> *, void*
- (id)value;

@end
