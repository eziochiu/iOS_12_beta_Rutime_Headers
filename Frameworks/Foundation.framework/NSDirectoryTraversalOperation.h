/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDirectoryTraversalOperation : NSOperation {
    id  _delegate;
    NSMutableArray * _deviceEntryPoints;
    NSMutableArray * _deviceNumbers;
    NSError * _error;
    int  _lastDeviceInode;
    int  _optionsFlags;
    bool  _shouldFilterUnderbars;
    NSString * _sourcePath;
    bool  _stopped;
    void * _stream;
}

+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
+ (bool)_needsStatInfo;
+ (id)directoryTraversalOperationAtPath:(id)arg1;

- (void)_handleFTSEntry:(struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long long x4; void *x5; char *x6; char *x7; int x8; int x9; unsigned short x10; unsigned short x11; unsigned long long x12; int x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; }*)arg1;
- (void)_setError:(id)arg1;
- (bool)_shouldFilterEntry:(struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long long x4; void *x5; char *x6; char *x7; int x8; int x9; unsigned short x10; unsigned short x11; unsigned long long x12; int x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; }*)arg1;
- (bool)_validatePaths:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)handlePathname:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)main;
- (void)setDelegate:(id)arg1;
- (bool)shouldProceedAfterError:(id)arg1;

@end
