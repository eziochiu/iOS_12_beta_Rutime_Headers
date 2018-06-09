/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICPaperStyleUIActivity : UIActivity {
    <ICPaperStyleUIActivityDelegate> * _delegate;
}

@property (nonatomic) <ICPaperStyleUIActivityDelegate> *delegate;

- (void).cxx_destruct;
- (long long)activityCategory;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)performActivity;
- (void)setDelegate:(id)arg1;

@end
