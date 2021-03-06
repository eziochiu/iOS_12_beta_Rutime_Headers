/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueFileRegistry : NSObject {
    NSString * _dir;
    NSMutableDictionary * _fdForFileId;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

+ (id)defaultRegistry:(id)arg1;

- (void).cxx_destruct;
- (void)_flushFileId:(int)arg1;
- (int)_openForReadingIfPossibleNoCacheLocked:(int)arg1;
- (void)dealloc;
- (void)flush;
- (id)init;
- (id)initWithDirectory:(id)arg1;
- (int)openForReadingIfPossible:(int)arg1;
- (int)openForWritingIfPossible:(int)arg1;
- (void)prepareToOpenForReading:(int)arg1;

@end
