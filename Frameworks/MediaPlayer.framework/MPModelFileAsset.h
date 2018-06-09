/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelFileAsset : MPModelObject

@property (nonatomic, copy) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (getter=isNonPurgeable, nonatomic) bool nonPurgeable;
@property (nonatomic) long long protectionType;
@property (nonatomic, copy) NSString *purchaseBundleFilePath;
@property (nonatomic) long long qualityType;

+ (id)__filePath_KEY;
+ (id)__fileSize_KEY;
+ (id)__nonPurgeable_KEY;
+ (id)__protectionType_KEY;
+ (id)__purchaseBundleFilePath_KEY;
+ (id)__qualityType_KEY;
+ (id)allSupportedProperties;

@end
