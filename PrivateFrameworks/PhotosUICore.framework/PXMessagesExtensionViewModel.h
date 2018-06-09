/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMessagesExtensionViewModel : PXObservable <PXMutableMessagesExtensionViewModel> {
    bool  _drawerActive;
    UIViewController * _presentedViewController;
    unsigned long long  _selectedActivityType;
    NSDate * _selectedMessageDate;
    NSString * _selectedMessageText;
    <PXCMMSuggestion> * _selectedSuggestion;
    NSURL * _selectedURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDrawerActive, nonatomic, readonly) bool drawerActive;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) unsigned long long selectedActivityType;
@property (nonatomic, readonly) NSDate *selectedMessageDate;
@property (nonatomic, readonly, copy) NSString *selectedMessageText;
@property (nonatomic, readonly) <PXCMMSuggestion> *selectedSuggestion;
@property (nonatomic, readonly) NSURL *selectedURL;
@property (readonly) Class superclass;

+ (id)sharedRootViewModel;

- (void).cxx_destruct;
- (void)clearSelection;
- (bool)isDrawerActive;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (id)presentedViewController;
- (unsigned long long)selectedActivityType;
- (id)selectedMessageDate;
- (id)selectedMessageText;
- (id)selectedSuggestion;
- (id)selectedURL;
- (void)setDrawerActive:(bool)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setSelectedActivityType:(unsigned long long)arg1;
- (void)setSelectedMessageDate:(id)arg1;
- (void)setSelectedMessageText:(id)arg1;
- (void)setSelectedSuggestion:(id)arg1;
- (void)setSelectedURL:(id)arg1;

@end
