/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLStoreMappingGenerator : NSObject {
    NSMutableDictionary * _names;
}

+ (id)defaultMappingGenerator;
+ (void)invalidate;

- (void)dealloc;
- (id)generateTableName:(id)arg1 isAncillary:(bool)arg2;
- (id)init;
- (id)newGeneratedPropertyName:(id)arg1;
- (id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned long long)arg2;
- (id)uniqueNameWithBase:(id)arg1;

@end
