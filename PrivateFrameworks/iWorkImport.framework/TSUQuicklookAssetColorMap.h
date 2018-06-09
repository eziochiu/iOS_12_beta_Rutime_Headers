/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUQuicklookAssetColorMap : NSObject {
    NSString * mAppAssetPath;
    NSMutableDictionary * mAssetMap;
}

@property (nonatomic, retain) NSString *appAssetPath;
@property (nonatomic, retain) NSMutableDictionary *assetMap;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)colorForResource:(id)arg1;
+ (bool)hasAppAssets;
+ (id)locatorForSageChartTextureSet:(id)arg1 image:(id)arg2;
+ (id)quicklookAssetMap;

- (id)appAssetPath;
- (id)assetMap;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setAppAssetPath:(id)arg1;
- (void)setAssetMap:(id)arg1;

@end
