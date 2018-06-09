/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate> {
    UIKeyboardDockItem * _dictationDockItem;
    bool  _dictationHasUsedServerManualEndpointing;
    bool  _dictationUsingServerManualEndpointing;
    UIKeyboardDockView * _dockView;
    UIKeyboardDockItem * _globeDockItem;
    UIKeyboardDockItem * _keyboardDockItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIKeyboardDockView *dockView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dictationDidBeginNotification:(id)arg1;
- (void)dealloc;
- (void)dictationItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;
- (id)dockView;
- (void)globeItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;
- (void)keyboardDockView:(id)arg1 didPressDockItem:(id)arg2 withEvent:(id)arg3;
- (void)keyboardItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)loadView;
- (void)setDockView:(id)arg1;
- (void)setKeyboardDockItem;
- (void)updateDockItemsVisibility;
- (void)viewDidLoad;

@end
