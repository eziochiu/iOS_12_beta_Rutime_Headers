/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentAnalyzerWorkThread : NSThread {
    NSPort * _dummyPort;
}

- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)main;
- (void)removeDummyPort;

@end
