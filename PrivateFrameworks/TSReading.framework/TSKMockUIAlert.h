/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKMockUIAlert : TSKUIAlert

+ (void)setDismissalButtonIndex:(long long)arg1;

- (long long)cancelButtonIndex;
- (long long)firstOtherButtonIndex;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
- (void)showWithDismissedByButtonBlock:(id /* block */)arg1;

@end
