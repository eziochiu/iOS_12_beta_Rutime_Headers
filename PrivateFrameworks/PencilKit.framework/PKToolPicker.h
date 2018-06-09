/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKToolPicker : NSObject <PKInlineInkPickerDelegate> {
    <PKToolPickerDelegate> * _delegate;
    _PKFloatingInkPickerViewController * _inkPickerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKToolPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) _PKFloatingInkPickerViewController *inkPickerViewController;
@property (readonly) Class superclass;

+ (id)sharedToolPicker;

- (void).cxx_destruct;
- (void)_makeVisisbleInScreenshotsWithView:(id)arg1;
- (void)_updateViewControllerWithWindow:(id)arg1;
- (id)delegate;
- (void)handleRedo:(id)arg1;
- (void)handleUndo:(id)arg1;
- (bool)hidden;
- (id)init;
- (id)inkPickerViewController;
- (void)inlineInkPicker:(id)arg1 didSelectColor:(id)arg2;
- (void)inlineInkPicker:(id)arg1 didSelectTool:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInkPickerViewController:(id)arg1;

@end
