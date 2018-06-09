/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFlintManifest : NSObject {
    NSArray * _fontResourceIDs;
    FCAssetHandle * _mainDocumentAssetHandle;
}

@property (nonatomic, readonly) NSArray *fontResourceIDs;
@property (nonatomic, readonly) FCAssetHandle *mainDocumentAssetHandle;

- (void).cxx_destruct;
- (id)fontResourceIDs;
- (id)initWithMainDocumentAssetHandle:(id)arg1 fontResourceIDs:(id)arg2;
- (id)mainDocumentAssetHandle;

@end
