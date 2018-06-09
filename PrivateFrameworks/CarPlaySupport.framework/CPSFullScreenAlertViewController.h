/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSFullScreenAlertViewController : CPSBaseTemplateViewController <CPSButtonDelegate> {
    CPAlert * _alert;
    NSArray * _alertButtons;
}

@property (nonatomic, retain) CPAlert *alert;
@property (nonatomic, retain) NSArray *alertButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alert;
- (id)alertButtons;
- (void)didSelectButton:(id)arg1;
- (id)initWithAlert:(id)arg1 alertDelegate:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)setAlert:(id)arg1;
- (void)setAlertButtons:(id)arg1;
- (void)viewDidLoad;

@end
