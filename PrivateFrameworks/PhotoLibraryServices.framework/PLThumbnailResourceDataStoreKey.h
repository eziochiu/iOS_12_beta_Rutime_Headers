/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailResourceDataStoreKey : NSObject <PLResourceDataStoreKey, PLTableThumbResourceKey> {
    struct PLThumbnailDataStoreKeyStruct { 
        unsigned int type : 3; 
        unsigned int index : 29; 
    }  _keyStruct;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int index;
@property (nonatomic) struct PLThumbnailDataStoreKeyStruct { unsigned int x1 : 3; unsigned int x2 : 29; } keyStruct;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int tableType;

+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (struct CGImage { }*)newTableThumbImageForPayloadKeyData:(unsigned long long)arg1;
+ (bool)representsSquareResourceForPayloadKeyData:(unsigned long long)arg1;

- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (int)index;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isValid;
- (id)keyData;
- (struct PLThumbnailDataStoreKeyStruct { unsigned int x1 : 3; unsigned int x2 : 29; })keyStruct;
- (struct CGImage { }*)newTableThumbImage;
- (bool)representsSquareResource;
- (void)setKeyStruct:(struct PLThumbnailDataStoreKeyStruct { unsigned int x1 : 3; unsigned int x2 : 29; })arg1;
- (unsigned int)tableType;

@end
