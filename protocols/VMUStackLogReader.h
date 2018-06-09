/* made by EzioChiu.
 */

@protocol VMUStackLogReader <NSObject>

@required

- (NSString *)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (int)enumerateRecords:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, unsigned long long, unsigned long long, unsigned long long, void*
- (NSSet *)excludedFrames;
- (NSString *)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(bool)arg3 stackFramesBuffer:(unsigned long long*)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(bool)arg2 stackFramesBuffer:(unsigned long long*)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
- (bool)inspectingLiveProcess;
- (bool)is64bit;
- (VMUVMRegionTracker *)regionTracker;
- (void)setExcludedFrames:(NSSet *)arg1;
- (NSString *)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(bool)arg2;
- (NSString *)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (NSString *)sourcePathForPCaddress:(unsigned long long)arg1;
- (NSString *)symbolicatedBacktraceForFrames:(unsigned long long*)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;
- (NSString *)symbolicatedBacktraceForNode:(void *)arg1 nodeDetails:(void *)arg2 isLiteZone:(void *)arg3 options:(void *)arg4; // needs 4 arg types, found 2: unsigned int, struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; /* Warning: Unrecognized filer type: '2' using 'void*' */ void*x5; void*x6; bool x7; void*x8; void*x9; unsigned long long x10; void*x11; void*x12; }
- (NSString *)symbolicatedBacktraceForStackID:(unsigned long long)arg1 isLiteZone:(bool)arg2 options:(unsigned long long)arg3;
- (unsigned int)task;
- (bool)usesLiteMode;
- (VMUVMRegion *)vmuVMRegionForAddress:(unsigned long long)arg1;

@optional

- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;

@end
