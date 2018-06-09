/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {
    int  _fileDescriptor;
}

- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1;
- (void)releaseLock;

@end
