/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResourceIdentityImplementation : CPLResourceIdentity

+ (id)_fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)identityForStorageName:(id)arg1;
+ (id)identityFromStoredIdentity:(id)arg1;
+ (void)setMMCImplementationForPlatform:(id)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id*)arg3;

- (id)identityForStorage;

@end
