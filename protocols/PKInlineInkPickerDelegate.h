/* made by EzioChiu.
 */

@protocol PKInlineInkPickerDelegate <NSObject>

@optional

- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didChangeSizeState:(unsigned long long)arg2;
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didSelectColor:(UIColor *)arg2;
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didSelectTool:(NSString *)arg2;
- (UIViewController *)viewControllerForPopoverPresentationFromInlineInkPicker:(PKInlineInkPicker *)arg1;

@end
