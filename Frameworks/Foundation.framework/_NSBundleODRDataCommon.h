/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSBundleODRDataCommon : NSObject {
    NSMutableDictionary * _assetPackToURL;
    NSBundle * _bundle;
    NSLock * _lock;
    long long  _sandboxToken;
}

- (id)URLForAssetPack:(id)arg1;
- (void)assetPacksBecameAvailable:(id)arg1;
- (void)assetPacksBecameUnavailable:(id)arg1;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

@end
