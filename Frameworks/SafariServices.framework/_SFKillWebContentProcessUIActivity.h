/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFKillWebContentProcessUIActivity : _SFActivity {
    <_SFKillWebContentProcessUIActivityDelegate> * _webProcessDelegate;
}

@property (nonatomic) <_SFKillWebContentProcessUIActivityDelegate> *webProcessDelegate;

- (void).cxx_destruct;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)setWebProcessDelegate:(id)arg1;
- (id)webProcessDelegate;

@end
