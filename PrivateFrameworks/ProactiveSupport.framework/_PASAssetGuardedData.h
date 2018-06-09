/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASAssetGuardedData : NSObject {
    unsigned long long  _bestAssetVersionObserved;
    ASAsset * _bestAvailableAsset;
    unsigned long long  _bestAvailableVersion;
    NSString * _defaultBundlePath;
    unsigned long long  _defaultBundleVersion;
    NSMutableDictionary * _overrides;
}

- (void).cxx_destruct;

@end
