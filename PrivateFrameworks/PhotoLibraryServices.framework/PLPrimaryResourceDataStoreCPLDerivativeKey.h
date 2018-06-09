/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPrimaryResourceDataStoreCPLDerivativeKey : PLPrimaryResourceDataStoreKey {
    struct PLPrimaryDataStore_CPLKeyStrategy_KeyStruct { 
        unsigned int strategy : 8; 
        unsigned int isMutation : 1; 
        unsigned int isMasterThumb : 1; 
        unsigned int cplType : 5; 
        unsigned int fileType : 2; 
    }  _keyStruct;
}

@property (nonatomic) struct PLPrimaryDataStore_CPLKeyStrategy_KeyStruct { unsigned int x1 : 8; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 5; unsigned int x5 : 2; } keyStruct;

+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;

- (id)fileURLForAssetID:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isValid;
- (id)keyData;
- (struct PLPrimaryDataStore_CPLKeyStrategy_KeyStruct { unsigned int x1 : 8; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 5; unsigned int x5 : 2; })keyStruct;
- (void)setKeyStruct:(struct PLPrimaryDataStore_CPLKeyStrategy_KeyStruct { unsigned int x1 : 8; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 5; unsigned int x5 : 2; })arg1;
- (id)store;

@end
