/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {
    NSString * _destinationPath;
    unsigned long long  _options;
    NSMutableSet * _skippedPaths;
}

+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
+ (id)filesystemItemCopyOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 options:(unsigned long long)arg3;

- (void)_handleFTSEntry:(struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long long x4; void *x5; char *x6; char *x7; int x8; int x9; unsigned short x10; unsigned short x11; unsigned long long x12; int x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; }*)arg1;
- (bool)_shouldCopyItemAtPath:(const char *)arg1 toPath:(const char *)arg2;
- (bool)_shouldProceedAfterErrno:(int)arg1 copyingItemAtPath:(const char *)arg2 toPath:(const char *)arg3;
- (bool)_validatePaths:(id*)arg1;
- (void)dealloc;
- (void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 options:(unsigned long long)arg3;
- (bool)shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2;
- (bool)shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3;

@end
