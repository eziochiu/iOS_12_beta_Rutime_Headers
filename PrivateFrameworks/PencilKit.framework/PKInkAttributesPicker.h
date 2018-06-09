/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkAttributesPicker : UIViewController <UIPopoverPresentationControllerDelegate> {
    <PKInkAttributesPickerDelegate> * _delegate;
    _PKInkAttributesPickerView * _pickerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PKInkAttributesPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _PKInkAttributesPickerView *pickerView;
@property (nonatomic, retain) PKInk *selectedInk;
@property (readonly) Class superclass;

+ (double)representableOpacityForOpacity:(double)arg1;

- (void).cxx_destruct;
- (void)_showOpacityLabel:(bool)arg1 animated:(bool)arg2;
- (id)delegate;
- (id)initWithInk:(id)arg1;
- (id)pickerView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)selectedInk;
- (void)selectedInkDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPickerView:(id)arg1;
- (void)setSelectedInk:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
