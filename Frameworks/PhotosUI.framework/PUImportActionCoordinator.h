/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportActionCoordinator : NSObject {
    <PUImportActionCoordinatorDelegate> * _delegate;
    PUImportController * _importController;
    NSNumberFormatter * _percentageNumberFormatter;
    bool  _presentsAdditionalDeleteAllConfirmation;
    UIViewController * _viewController;
}

@property (nonatomic) <PUImportActionCoordinatorDelegate> *delegate;
@property (nonatomic, retain) PUImportController *importController;
@property (nonatomic, retain) NSNumberFormatter *percentageNumberFormatter;
@property (nonatomic) bool presentsAdditionalDeleteAllConfirmation;
@property (nonatomic) UIViewController *viewController;

+ (id)deleteAllConfirmationMessageForItems:(id)arg1 importSource:(id)arg2;
+ (long long)importBehaviorForBatteryState:(long long)arg1 batteryLevel:(float)arg2;
+ (float)lowBatteryLevelThresholdForDevice;
+ (void)retrieveBatteryState:(long long*)arg1 batteryLevel:(float*)arg2;

- (void).cxx_destruct;
- (void)_commitImportingItems:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)_importItems:(id)arg1 allowDuplicates:(bool)arg2;
- (void)beginImportFromBarButtonItem:(id)arg1;
- (void)checkBatteryLevelWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (void)deleteItemsFromBarButtonItem:(id)arg1;
- (void)deleteItemsFromBarButtonItem:(id)arg1 withOneUpHintItems:(id)arg2;
- (void)deleteItemsWithoutConfirmation:(id)arg1;
- (void)importAllFromBarButtonItem:(id)arg1;
- (id)importController;
- (id)initWithViewController:(id)arg1 importController:(id)arg2;
- (void)notifyDelegateOfImportCancellation;
- (id)percentageNumberFormatter;
- (bool)presentsAdditionalDeleteAllConfirmation;
- (void)setDelegate:(id)arg1;
- (void)setImportController:(id)arg1;
- (void)setPercentageNumberFormatter:(id)arg1;
- (void)setPresentsAdditionalDeleteAllConfirmation:(bool)arg1;
- (void)setViewController:(id)arg1;
- (void)stopImport;
- (id)viewController;

@end
