/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncOperation : NSOperation {
    bool  _executing;
    bool  _finished;
}

@property bool executing;
@property bool finished;

- (void)cancel;
- (void)cancelOperation;
- (void)dealloc;
- (void)endOperation;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;
- (void)startOperation;

@end
