/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileRequestBalancer : NSObject <GEOPListStateCapturing> {
    unsigned long long  _maxRunningOperationsCount;
    void * _randomIndexGenerator;
    void * _requesters;
    unsigned long long  _stateCaptureHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)balancerForRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
+ (unsigned long long)maxRunningOperationsCount;
+ (void)setMaxRunningOperationsCount:(unsigned long long)arg1;

- (void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
- (id)_initWithMaxRunningOperationsCount:(unsigned long long)arg1;
- (struct __wrap_iter<(anonymous namespace)::RequesterTileKeys *>=^{RequesterTileKeys {})_next_requester;
- (void)_pruneEmptyRequesters;
- (void)_removeRequester:(id)arg1;
- (void)_requester:(id)arg1 incrementRunningOperationsCount:(unsigned long long)arg2;
- (void)_requester:(id)arg1 removeTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg2;
- (void)_requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg3;
- (void)_requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (void)_startOperations;
- (void)_startOperationsWithAvailableCount:(unsigned long long)arg1;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)init;
- (void)removeRequester:(id)arg1;
- (void)requester:(id)arg1 removeTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (void)requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (struct vector<(anonymous namespace)::RequesterTileKeys, std::__1::allocator<(anonymous namespace)::RequesterTileKeys> >=^{RequesterTileKeys {}*)requesters;

@end
