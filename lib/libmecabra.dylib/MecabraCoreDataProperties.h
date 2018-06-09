/* made by EzioChiu
   Image: /usr/lib/libmecabra.dylib
 */

@interface MecabraCoreDataProperties : NSObject {
    NSMutableDictionary * _descriptionDictionary;
    NSString * _type;
}

@property (nonatomic, retain) NSMutableDictionary *descriptionDictionary;
@property (nonatomic, readonly, retain) NSString *type;
@property (nonatomic, readonly) NSString *ubiquityContainerIdentifier;

+ (id)defaultDescriptionPath;
+ (void)setDefaultDescriptionPath:(id)arg1;
+ (id)sharedInstanceForType:(id)arg1;
+ (id)ubiquityContainerURL;

- (bool)databaseSyncs;
- (void)dealloc;
- (id)descriptionDictionary;
- (id)entityDescriptionURL;
- (id)entityModelName;
- (void)forceNoSync;
- (id)initWithIdentifier:(id)arg1;
- (id)requiredKeys;
- (void)setDescriptionDictionary:(id)arg1;
- (id)sortDescriptors;
- (id)type;
- (id)ubiquitousStoreDirectoryURLForIdentifier:(id)arg1;
- (id)ubiquitousTransactionURLForIdentifier:(id)arg1;
- (id)ubiquitousURLWithSuffix:(id)arg1;
- (id)ubiquityContainerIdentifier;
- (id)uniqueKeys;
- (id)valueForKey:(id)arg1;

@end
