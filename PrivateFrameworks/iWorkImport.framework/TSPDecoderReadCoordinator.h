/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDecoderReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator> {
    TSPObjectContext * _context;
    NSObject<OS_dispatch_queue> * _dataQueue;
    <TSPDecoder> * _decoder;
    <TSPDecoderReadCoordinatorDelegate> * _delegate;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    NSMapTable * _objects;
    TSPComponent * _rootObjectComponent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadingFromDocument;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseObjectUUID;
- (bool)canRetainObjectReferencedByWeakLazyReference;
- (id)context;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (bool)endReading;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(bool)arg3;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (id)init;
- (id)initWithDecoder:(id)arg1 context:(id)arg2 finalizeHandlerQueue:(id)arg3 delegate:(id)arg4;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (bool)isExternalLazyReference:(id)arg1;
- (bool)isReadingFromDocument;
- (id)objectForIdentifier:(long long)arg1;
- (unsigned char)packageIdentifier;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(bool)arg4 allowUnknownObject:(bool)arg5 fromParentObject:(id)arg6 completion:(id /* block */)arg7;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(bool)arg3 allowUnknownObject:(bool)arg4 fromParentObject:(id)arg5 completion:(id /* block */)arg6;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (long long)sourceType;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(bool)arg2;

@end
