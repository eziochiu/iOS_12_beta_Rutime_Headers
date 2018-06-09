/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPAsset : NSObject {
    NSString * _abGroup;
    _PASAsset * _asset;
    NSString * _language;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, readonly) unsigned long long assetVersion;
@property (nonatomic, readonly) NSString *language;

- (void).cxx_destruct;
- (id)_pathForResourceWithName:(id)arg1 extension:(id)arg2;
- (id)_readOptionalPlist:(id)arg1 property:(id)arg2;
- (id)_readPlist:(id)arg1 property:(id)arg2;
- (id)_readPlistFromPath:(id)arg1 property:(id)arg2;
- (id)abGroup;
- (unsigned long long)assetVersion;
- (id)categoriesModelPath;
- (id)emotivePhrases;
- (id)initWithAsset:(id)arg1 language:(id)arg2 abGroup:(id)arg3;
- (id)language;
- (id)phraseBookPath;
- (id)trackedSessionsPhraseMap;
- (struct NSDictionary { Class x1; }*)weights;

@end
