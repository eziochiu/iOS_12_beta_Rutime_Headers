/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPrimaryResourceDataStoreDCIMCaptureKey : PLPrimaryResourceDataStoreKey {
    struct PLPrimaryDataStore_DCIMCaptureStrategy_KeyStruct { 
        unsigned int strategy : 8; 
        unsigned int directoryNumber : 10; 
        unsigned int fileNumber : 14; 
        unsigned int fileType : 7; 
        unsigned int isMasterThumb : 1; 
    }  _keyStruct;
}

@property (nonatomic) struct PLPrimaryDataStore_DCIMCaptureStrategy_KeyStruct { unsigned int x1 : 8; unsigned int x2 : 10; unsigned int x3 : 14; unsigned int x4 : 7; unsigned int x5 : 1; } keyStruct;
@property (nonatomic, readonly) PLPrimaryResourceDataStore *store;

+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;

- (id)fileURLForAssetID:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)initWithKeyStruct:(const void*)arg1;
- (id)keyData;
- (struct PLPrimaryDataStore_DCIMCaptureStrategy_KeyStruct { unsigned int x1 : 8; unsigned int x2 : 10; unsigned int x3 : 14; unsigned int x4 : 7; unsigned int x5 : 1; })keyStruct;
- (void)setKeyStruct:(struct PLPrimaryDataStore_DCIMCaptureStrategy_KeyStruct { unsigned int x1 : 8; unsigned int x2 : 10; unsigned int x3 : 14; unsigned int x4 : 7; unsigned int x5 : 1; })arg1;
- (id)store;

@end
