/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

@interface WLMigrationProgressViewController : WLWelcomeGroupViewController <WLDataMigrationDelegate> {
    id /* block */  _completionHandler;
    UILabel * _deviceNameView;
    UILabel * _explanationView;
    bool  _migrationConcluded;
    WLDataMigrationController * _migrationController;
    bool  _migrationControllerIsRestartable;
    id /* block */  _migrationDidBeginHandler;
    unsigned long long  _migrationState;
    NSString * _progressString;
    UIProgressView * _progressView;
    WLSourceDevice * _sourceDevice;
    UIActivityIndicatorView * _spinner;
    UILabel * _stateView;
    NSArray * _stateViewConstraintsForNoSpinner;
    NSArray * _stateViewConstraintsForWithSpinner;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ migrationDidBeginHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callClientCompletionWithSuccess:(bool)arg1;
- (void)_didCompleteMigrationWithSuccess:(bool)arg1;
- (void)_startMigration;
- (void)_uiTestModeStartFakeMigration;
- (void)_updateProgressViewsWithOneLineStateKey:(id)arg1 twoLineStateKey:(id)arg2 showDeviceName:(bool)arg3 showSpinner:(bool)arg4 explanationText:(id)arg5;
- (id /* block */)completionHandler;
- (void)dataMigrator:(id)arg1 didFailWithError:(id)arg2;
- (void)dataMigrator:(id)arg1 didUpdateMigrationState:(unsigned long long)arg2;
- (void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2;
- (void)dataMigrator:(id)arg1 didUpdateProgressString:(id)arg2;
- (void)dataMigratorDidBecomeRestartable:(id)arg1;
- (void)dataMigratorDidFinish:(id)arg1 withImportErrors:(bool)arg2;
- (void)dataMigratorDidGetInterrupted;
- (id)initWithSourceDevice:(id)arg1 metrics:(id)arg2;
- (void)loadView;
- (id /* block */)migrationDidBeginHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMigrationDidBeginHandler:(id /* block */)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
