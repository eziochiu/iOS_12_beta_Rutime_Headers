/* made by EzioChiu.
 */

@protocol CRKCloudStoring <NSObject, NSSecureCoding, NSCopying>

@required

+ (id)instanceWithRecord:(CRKCloudRecord *)arg1;
+ (NSString *)recordType;
+ (id)skeletonInstance;

- (void)applyFieldsToRecord:(CRKCloudRecord *)arg1;
- (bool)isChangedFrom:(id <CRKCloudStoring>)arg1;
- (NSString *)recordName;
- (id)valueForKey:(NSString *)arg1;

@optional

- (NSSet *)requiredKeys;
- (NSDictionary *)subItemClassesByItemKey;
- (NSDictionary *)subItemClassesByItemSetKey;

@end
