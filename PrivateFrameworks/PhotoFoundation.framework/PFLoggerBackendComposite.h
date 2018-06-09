/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFLoggerBackendComposite : PFLoggerBackendAdapter {
    bool  _allBackendsAllowConcurrentAccess;
    NSArray * _backends;
}

@property bool allBackendsAllowConcurrentAccess;
@property (retain) NSArray *backends;

- (void).cxx_destruct;
- (bool)allBackendsAllowConcurrentAccess;
- (bool)allowsConcurrentAccess;
- (id)backends;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (id)initWithBackends:(id)arg1;
- (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char *)arg7;
- (void)setAllBackendsAllowConcurrentAccess:(bool)arg1;
- (void)setBackends:(id)arg1;

@end
