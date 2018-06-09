/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUMemoryWatcher : NSObject {
    OITSUFlushingManager * _flushingManager;
    bool  _going;
    bool  _stop;
}

- (void)_periodicallySimulateMemoryWarning:(id)arg1;
- (void)_simulateMemoryWarning:(id)arg1;
- (void)beginObserving;
- (void)dealloc;
- (id)initWithFlushingManager:(id)arg1;
- (void)stopObserving;

@end
