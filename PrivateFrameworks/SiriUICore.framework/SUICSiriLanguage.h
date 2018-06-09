/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface SUICSiriLanguage : NSObject {
    <SUICSiriLanguageDelegate> * _delegate;
    bool  _setupAssistantHasCompletedInitialRunAvailable;
    bool  _setupAssistantHasCompletedInitialRunChecked;
    NSString * _spokenLanguageCode;
}

@property (getter=_delegate, nonatomic, readonly) <SUICSiriLanguageDelegate> *delegate;
@property (getter=_setupAssistantHasCompletedInitialRunAvailable, nonatomic) bool setupAssistantHasCompletedInitialRunAvailable;
@property (nonatomic) bool setupAssistantHasCompletedInitialRunChecked;
@property (setter=_setSpokenLanguageCode:, nonatomic, copy) NSString *spokenLanguageCode;

- (void).cxx_destruct;
- (id)_computeSpokenLanguageCode;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_delegate;
- (void)_setSpokenLanguageCode:(id)arg1;
- (bool)_setupAssistantHasCompletedInitialRunAvailable;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_updateSpokenLanguageCode;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setSetupAssistantHasCompletedInitialRunAvailable:(bool)arg1;
- (void)setSetupAssistantHasCompletedInitialRunChecked:(bool)arg1;
- (bool)setupAssistantHasCompletedInitialRunChecked;
- (id)spokenLanguageCode;

@end
