/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBException : NSException

- (id)error;
- (int)errorCode;
- (id)initWithCode:(int)arg1 format:(id)arg2;
- (id)initWithCode:(int)arg1 format:(id)arg2 args:(char *)arg3;

@end
