/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleUISettings : PXSettings {
    bool  _alwaysShowBootstrap;
    bool  _alwaysShowCandidateWidget;
    bool  _alwaysShowMe;
    bool  _debugBlurredCells;
    bool  _debugMaybeContact;
    bool  _displayBootstrapSuggestionType;
    bool  _displayConfirmAdditionalSuggestionType;
    bool  _displayConfirmationPhotoDate;
}

@property (getter=shouldAlwaysShowBootstrap, nonatomic) bool alwaysShowBootstrap;
@property (getter=shouldAlwaysShowCandidateWidget, nonatomic) bool alwaysShowCandidateWidget;
@property (getter=shouldAlwaysShowMe, nonatomic) bool alwaysShowMe;
@property (getter=shouldDebugBlurredCells, nonatomic) bool debugBlurredCells;
@property (getter=shouldDebugMaybeContact, nonatomic) bool debugMaybeContact;
@property (getter=shouldDisplayBootstrapSuggestionType, nonatomic) bool displayBootstrapSuggestionType;
@property (getter=shouldDisplayConfirmAdditionalSuggestionType, nonatomic) bool displayConfirmAdditionalSuggestionType;
@property (getter=shouldDisplayConfirmationPhotoDate, nonatomic) bool displayConfirmationPhotoDate;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setAlwaysShowBootstrap:(bool)arg1;
- (void)setAlwaysShowCandidateWidget:(bool)arg1;
- (void)setAlwaysShowMe:(bool)arg1;
- (void)setDebugBlurredCells:(bool)arg1;
- (void)setDebugMaybeContact:(bool)arg1;
- (void)setDefaultValues;
- (void)setDisplayBootstrapSuggestionType:(bool)arg1;
- (void)setDisplayConfirmAdditionalSuggestionType:(bool)arg1;
- (void)setDisplayConfirmationPhotoDate:(bool)arg1;
- (bool)shouldAlwaysShowBootstrap;
- (bool)shouldAlwaysShowCandidateWidget;
- (bool)shouldAlwaysShowMe;
- (bool)shouldDebugBlurredCells;
- (bool)shouldDebugMaybeContact;
- (bool)shouldDisplayBootstrapSuggestionType;
- (bool)shouldDisplayConfirmAdditionalSuggestionType;
- (bool)shouldDisplayConfirmationPhotoDate;

@end
