/* made by EzioChiu.
 */

@protocol PHObjectPropertySet <NSObject>

@required

+ (NSString *)entityName;
+ (bool)isToMany;
+ (NSString *)keyPathFromPrimaryObject;
+ (NSString *)keyPathToPrimaryObject;
+ (NSArray *)propertiesToFetch;

@end
