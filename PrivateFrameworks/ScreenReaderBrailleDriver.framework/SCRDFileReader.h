/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

@interface SCRDFileReader : NSObject {
    <SCRDFileReaderDelegate> * _delegate;
    NSFileHandle * _fileHandle;
    NSThread * _readerThread;
    int  _threadStartCount;
}

- (void).cxx_destruct;
- (void)_readHandler:(id)arg1;
- (void)dealloc;
- (bool)hasStarted;
- (id)initWithDelegate:(id)arg1 fileHandle:(id)arg2;
- (void)invalidate;
- (void)invalidateWithWait:(bool)arg1;
- (bool)isValid;
- (void)start;

@end
