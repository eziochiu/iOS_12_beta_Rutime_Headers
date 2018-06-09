/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSVoiceTemplateViewController : CPSBaseTemplateViewController <CPVoiceTemplateProviding> {
    UITapGestureRecognizer * _backGestureRecognizer;
    CPSVoiceView * _titleView;
}

@property (nonatomic, retain) UITapGestureRecognizer *backGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CPSVoiceView *titleView;

- (void).cxx_destruct;
- (void)_backGestureFired:(id)arg1;
- (id)backGestureRecognizer;
- (id)initWithVoiceTemplate:(id)arg1 templateDelegate:(id)arg2;
- (void)setBackGestureRecognizer:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)titleView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)voiceTemplate;

@end
