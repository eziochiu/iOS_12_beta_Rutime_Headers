/* made by EzioChiu.
 */

@protocol TSPEncoderWriteCoordinatorDelegate <NSObject>

@required

- (long long)componentWriterMode;
- (TSPObject *)createMetadataForRootObject:(TSPObject *)arg1 dataArchiver:(id <TSPDataArchiver>)arg2 archivedObjects:(NSMapTable *)arg3 componentObjectUUIDMap:(TSPComponentObjectUUIDMap *)arg4 externalReferences:(TSPReferenceOrderedSet *)arg5 weakExternalReferences:(TSPReferenceOrderedSet *)arg6 lazyReferences:(NSHashTable *)arg7 dataReferences:(NSHashTable *)arg8 error:(id*)arg9;
- (unsigned long long)objectTargetType;
- (bool)skipMetadataObjectSerialization;

@end
