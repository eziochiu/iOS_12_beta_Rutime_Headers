/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportPackageWriteCoordinator : TSPPackageWriteCoordinator {
    TSPPackageWriteCoordinator * _packageWriteCoordinator;
}

- (void).cxx_destruct;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3;
- (bool)componentWriter:(id)arg1 externalPackageDidWriteObject:(id)arg2 claimingComponent:(id*)arg3;
- (void)didReferenceData:(id)arg1;
- (id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 fileFormatVersion:(unsigned long long)arg4 metadataObject:(id)arg5 dataAttributesSnapshot:(id)arg6 packageWriteCoordinator:(id)arg7;
- (id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 fileFormatVersion:(unsigned long long)arg5 preferredPackageType:(long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8;
- (bool)isComponentExternal:(id)arg1 wasWritten:(bool*)arg2 wasCopied:(bool*)arg3;
- (bool)isObjectInExternalPackage:(id)arg1 claimingComponent:(id*)arg2;
- (id)objectForIdentifier:(long long)arg1;
- (bool)shouldEnqueueComponent:(id)arg1;
- (bool)wasComponentCopied:(long long)arg1;

@end
