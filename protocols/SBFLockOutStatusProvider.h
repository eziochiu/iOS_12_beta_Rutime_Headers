/* made by EzioChiu.
 */

@protocol SBFLockOutStatusProvider <SBFBlockStatusProvider>

@required

- (bool)isLockedOut;

@end
