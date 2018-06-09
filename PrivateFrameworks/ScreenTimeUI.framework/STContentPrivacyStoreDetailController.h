/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STContentPrivacyStoreDetailController : PSListController {
    <STContentPrivacyViewModelCoordinator> * _coordinator;
}

@property (nonatomic, retain) <STContentPrivacyViewModelCoordinator> *coordinator;

- (void).cxx_destruct;
- (id)coordinator;
- (id)init;
- (void)setCoordinator:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
