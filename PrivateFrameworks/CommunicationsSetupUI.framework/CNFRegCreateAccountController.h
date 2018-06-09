/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegCreateAccountController : CNFRegAccountWebViewController {
    <CNFRegCreateAccountControllerDelegate> * _delegate;
}

@property (nonatomic) <CNFRegCreateAccountControllerDelegate> *delegate;

- (id)bagKey;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)logName;
- (void)setDelegate:(id)arg1;

@end
