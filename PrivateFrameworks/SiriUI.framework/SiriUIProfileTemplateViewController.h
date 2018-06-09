/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIProfileTemplateViewController : SiriUIBaseTemplateViewController <SiriUILabelStackTemplateViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SiriUIProfileTemplateModel> *templateModel;
@property (nonatomic, retain) SiriUIProfileTemplateView *view;

- (bool)labelStackTemplateViewShouldLayoutCompressed:(id)arg1;
- (void)loadView;
- (Class)templateViewClass;

@end
