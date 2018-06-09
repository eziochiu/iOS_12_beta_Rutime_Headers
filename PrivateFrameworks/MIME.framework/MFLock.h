/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFLock : NSLock <MFLockObject> {
    id  _delegate;
    NSString * _name;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (bool)isLockedByMe;
- (void)lock;
- (bool)lockBeforeDate:(id)arg1;
- (bool)tryLock;
- (void)unlock;

@end
