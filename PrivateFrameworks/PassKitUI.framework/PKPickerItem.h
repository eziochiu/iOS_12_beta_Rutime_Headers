/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPickerItem : NSObject {
    PKPaymentSetupProduct * _product;
    id /* block */  _selectionHandler;
    NSString * _title;
}

@property (nonatomic) PKPaymentSetupProduct *product;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (nonatomic, copy) NSString *title;

+ (id)itemWithProduct:(id)arg1 selectionHandler:(id /* block */)arg2;
+ (id)itemWithTitle:(id)arg1 selectionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)handleSelectionWithCompletionHandler:(id /* block */)arg1;
- (id)product;
- (id /* block */)selectionHandler;
- (void)setProduct:(id)arg1;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end