/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUncancellableBlockOperation : NSBlockOperation

- (void)cancel;
- (bool)isCancelled;

@end
