/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation {
    PCSCKKSItemModifyContext * _context;
}

@property (retain) PCSCKKSItemModifyContext *context;

- (void).cxx_destruct;
- (id)context;
- (void)fetchAlternate;
- (void)fetchComplete:(struct __CFData { }*)arg1 point:(id)arg2 alternate:(bool)arg3 error:(struct __CFError { }*)arg4;
- (void)fetchCurrentItem:(id)arg1 viewhint:(id)arg2 complete:(id /* block */)arg3;
- (void)fetchPersistentRef:(id)arg1 alternate:(bool)arg2;
- (bool)haveAlternate;
- (id)initWithItemModifyContext:(id)arg1;
- (void)setContext:(id)arg1;
- (bool)shouldRelocate;
- (void)start;

@end
