/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIBaseTemplateViewController : SiriUITemplateViewController

@property (nonatomic, retain) SiriUIBaseTemplateView *view;

- (void)loadView;
- (Class)templateViewClass;

@end
