/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSiriDeviceSetupGreetingDetails : NSObject {
    NSString * _dialogAText;
    NSArray * _dialogAWordTimings;
    NSArray * _dialogBPhraseTimings;
    NSArray * _dialogCPhraseTimings;
    NSArray * _introWordTimings;
}

@property (nonatomic, copy) NSString *dialogAText;
@property (nonatomic, copy) NSArray *dialogAWordTimings;
@property (nonatomic, copy) NSArray *dialogBPhraseTimings;
@property (nonatomic, copy) NSArray *dialogCPhraseTimings;
@property (nonatomic, copy) NSArray *introWordTimings;

- (void).cxx_destruct;
- (id)dialogAText;
- (id)dialogAWordTimings;
- (id)dialogBPhraseTimings;
- (id)dialogCPhraseTimings;
- (id)introWordTimings;
- (void)setDialogAText:(id)arg1;
- (void)setDialogAWordTimings:(id)arg1;
- (void)setDialogBPhraseTimings:(id)arg1;
- (void)setDialogCPhraseTimings:(id)arg1;
- (void)setIntroWordTimings:(id)arg1;

@end
