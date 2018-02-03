/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface _BSTransactionDefaults : BSAbstractDefaultDomain

@property (getter=isAuditHistoryEnabled, nonatomic) bool auditHistoryEnabled;

+ (id)sharedInstance;

- (void)_bindAndRegisterDefaults;

@end
