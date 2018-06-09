/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSharedStreamsDataStoreKey : NSObject <PLResourceDataStoreKey> {
    struct PLSharedStreamsDataStoreKeyStruct { 
        unsigned int resourceType : 8; 
        BOOL albumCloudGUID[37]; 
        BOOL cloudPersonID[11]; 
        BOOL filename[13]; 
    }  _keyStruct;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct PLSharedStreamsDataStoreKeyStruct { unsigned int x1 : 8; BOOL x2[37]; BOOL x3[11]; BOOL x4[13]; } keyStruct;
@property (readonly) Class superclass;

- (id)_fileURLWithPhotoCloudSharingDataDirectory:(id)arg1 extension:(id)arg2;
- (id)_relativeFilePath;
- (id)_store;
- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isValid;
- (id)keyData;
- (struct PLSharedStreamsDataStoreKeyStruct { unsigned int x1 : 8; BOOL x2[37]; BOOL x3[11]; BOOL x4[13]; })keyStruct;
- (void)setKeyStruct:(struct PLSharedStreamsDataStoreKeyStruct { unsigned int x1 : 8; BOOL x2[37]; BOOL x3[11]; BOOL x4[13]; })arg1;

@end
