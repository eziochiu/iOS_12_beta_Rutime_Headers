/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportConcurrentAction : NSOperation {
    bool  _executing;
    bool  _finished;
}

- (void)finish;
- (bool)isAsynchronous;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)performAction;
- (void)start;

@end
