/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate> {
    TSPObjectContext * _context;
    TSPDeepCopyObjectMap * _objectMap;
    bool  _resetObjectUUIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)componentWriterMode;
- (id)createMetadataForRootObject:(id)arg1 dataArchiver:(id)arg2 archivedObjects:(id)arg3 componentObjectUUIDMap:(id)arg4 externalReferences:(id)arg5 weakExternalReferences:(id)arg6 lazyReferences:(id)arg7 dataReferences:(id)arg8 error:(id*)arg9;
- (void)encodeDeepCopyOfObject:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithContext:(id)arg1 objectMap:(id)arg2;
- (unsigned long long)objectTargetType;
- (bool)skipMetadataObjectSerialization;

@end
