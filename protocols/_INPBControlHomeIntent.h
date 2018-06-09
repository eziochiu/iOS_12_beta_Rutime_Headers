/* made by EzioChiu.
 */

@protocol _INPBControlHomeIntent <NSObject>

@required

+ (Class)contentsType;
+ (Class)entitiesType;

- (void)addContents:(_INPBHomeContent *)arg1;
- (void)addEntities:(_INPBHomeEntity *)arg1;
- (_INPBHomeAttribute *)attribute;
- (void)clearContents;
- (void)clearEntities;
- (NSArray *)contents;
- (_INPBHomeContent *)contentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentsCount;
- (NSArray *)entities;
- (_INPBHomeEntity *)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasAttribute;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setAttribute:(_INPBHomeAttribute *)arg1;
- (void)setContents:(NSArray *)arg1;
- (void)setEntities:(NSArray *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
