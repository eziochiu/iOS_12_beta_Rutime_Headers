/* made by EzioChiu.
 */

@protocol BKSProcessDelegate <NSObject>

@optional

- (void)process:(BKSProcess *)arg1 didExitWithContext:(BKSProcessExitContext *)arg2;
- (void)process:(BKSProcess *)arg1 isBeingDebugged:(bool)arg2;
- (void)process:(BKSProcess *)arg1 taskStateDidChange:(long long)arg2;
- (void)processWillExpire:(BKSProcess *)arg1;

@end
