/* made by EzioChiu.
 */

@protocol SYChangeTrackingWithErrors <SYChangeTracking>

@required

- (bool)addObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3 error:(id*)arg4;
- (bool)addObject:(id <SYObject>)arg1 error:(id*)arg2;
- (bool)deleteObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3 error:(id*)arg4;
- (bool)deleteObject:(id <SYObject>)arg1 error:(id*)arg2;
- (bool)updateObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3 error:(id*)arg4;
- (bool)updateObject:(id <SYObject>)arg1 error:(id*)arg2;

@end