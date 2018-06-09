/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCatalog : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding> {
    NSMutableArray * _groups;
    NSDate * _timestamp;
}

@property (nonatomic, retain) NSMutableArray *groups;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2;
+ (id)catalogWithLocalCatalog:(id)arg1 ubiquitousCatalog:(id)arg2;
+ (id)cloudStoreCatalogRecordTypeRecordNamePrefix;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allGroupIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groups;
- (id)init;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalentToCatalog:(id)arg1;
- (bool)isNewerThanCatalog:(id)arg1;
- (unsigned long long)itemType;
- (id)recordTypesAndNames;
- (void)setGroups:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)shuffle:(int)arg1;
- (id)timestamp;
- (void)writeToURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 atomically:(bool)arg3;

@end
