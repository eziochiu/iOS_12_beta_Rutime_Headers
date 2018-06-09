/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKObjCClass : NSObject {
    Class  _handle;
    NSString * _name;
    NSDictionary * _propertiesByName;
    NSArray * _sortedProperties;
}

@property (nonatomic, readonly) Class handle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *propertiesByName;
@property (nonatomic, readonly) NSArray *sortedProperties;

+ (id)classForHandle:(Class)arg1;
+ (id)classForObject:(id)arg1;

- (void).cxx_destruct;
- (id)allProperties;
- (Class)handle;
- (id)initWithHandle:(Class)arg1;
- (id)name;
- (id)propertiesByName;
- (id)propertyForName:(id)arg1;
- (id)sortedProperties;

@end
