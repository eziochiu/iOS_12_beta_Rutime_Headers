/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDScannerList : NSObject {
    NSMutableArray * _activeScanners;
    NSMutableArray * _scannerCache;
    int  _type;
    NSMutableArray * _waitQueue;
}

- (void)activateScanner:(id)arg1;
- (void)dealloc;
- (id /* block */)dequeueJob;
- (void)enqueueJob:(id /* block */)arg1;
- (bool)full;
- (id)getCachedScanner;
- (id)initWithType:(int)arg1;
- (void)pushBackScanner:(id)arg1;
- (id)scanner;

@end
