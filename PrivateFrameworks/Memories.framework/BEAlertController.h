/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface BEAlertController : UIAlertController {
    long long  _alertTag;
    bool  _isSheet;
}

@property (nonatomic) long long alertTag;
@property (nonatomic) bool isSheet;

+ (id)showOneButtonAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonHandler:(id /* block */)arg4;
+ (id)showOneButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 buttonTitle:(id)arg4 buttonHandler:(id /* block */)arg5;
+ (id)showTwoButtonAlertWithTitle:(id)arg1 message:(id)arg2 button1Title:(id)arg3 button1Style:(long long)arg4 button1Handler:(id /* block */)arg5 button2Title:(id)arg6 button2Style:(long long)arg7 button2Handler:(id /* block */)arg8;
+ (id)showTwoButtonSheetOnViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 button1Title:(id)arg4 button1Style:(long long)arg5 button1Handler:(id /* block */)arg6 button2Title:(id)arg7 button2Style:(long long)arg8 button2Handler:(id /* block */)arg9;

- (void)addAlertButton:(id)arg1;
- (id)addAlertButtonWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(id /* block */)arg4;
- (id)addAlertButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(id /* block */)arg3;
- (id)addAlertCancelButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(id /* block */)arg3;
- (id)addAlertDestructiveButtonWithTitle:(id)arg1 tag:(long long)arg2 action:(id /* block */)arg3;
- (void)addAlertTextFieldWithTag:(long long)arg1 configurationBlock:(id /* block */)arg2;
- (long long)alertTag;
- (id)buttonActionWithTag:(long long)arg1;
- (long long)buttonCount;
- (id)cancelButtonAction;
- (void)dismissWithActionForTag:(long long)arg1 animated:(bool)arg2;
- (void)dismissWithCancelActionAnimated:(bool)arg1;
- (void)dismissWithNoActionAnimated:(bool)arg1;
- (id)initAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)initSheetWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3;
- (bool)isSheet;
- (void)setAlertTag:(long long)arg1;
- (void)setIsSheet:(bool)arg1;
- (void)showAnimated:(bool)arg1;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(bool)arg5;
- (void)showInView:(id)arg1 viewController:(id)arg2 animated:(bool)arg3;
- (void)showOnViewController:(id)arg1 animated:(bool)arg2;
- (long long)textFieldCount;
- (id)textFieldWithTag:(long long)arg1;
- (id)textInFieldWithTag:(long long)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
