/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIGetAssetThread : NSThread {
    ALAsset * _asset;
    NSCondition * _condition;
    ALAssetsLibrary * _library;
    NSURL * _url;
}

@property (retain) ALAsset *asset;
@property (retain) NSCondition *condition;

- (void).cxx_destruct;
- (id)asset;
- (id)condition;
- (id)initWithURL:(id)arg1 assetsLibrary:(id)arg2;
- (void)main;
- (void)setAsset:(id)arg1;
- (void)setCondition:(id)arg1;

@end
