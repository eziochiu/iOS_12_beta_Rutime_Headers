/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrinterTableViewCell : UITableViewCell <UIPrinterAccessoryViewDelegate> {
    id  _delegate;
    UIGestureRecognizer * _expandedAccessoryTapRecognizer;
    PKPrinter * _printer;
    UIPrinterAccessoryView * _printerAccessoryView;
}

@property (nonatomic) bool checked;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIGestureRecognizer *expandedAccessoryTapRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) PKPrinter *printer;
@property (nonatomic, retain) UIPrinterAccessoryView *printerAccessoryView;
@property (nonatomic) int printerState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)checked;
- (id)delegate;
- (void)expandedAccessoryAreaTapped;
- (id)expandedAccessoryTapRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)printer;
- (id)printerAccessoryView;
- (void)printerAccessoryViewInfoButtonPressed:(id)arg1;
- (int)printerState;
- (void)setChecked:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandedAccessoryTapRecognizer:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setPrinterAccessoryView:(id)arg1;
- (void)setPrinterState:(int)arg1;

@end
