/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLObjectIDRequestContext : NSSQLStoreRequestContext {
    NSDictionary * _entitiesAndCounts;
    NSSQLModel * _model;
}

@property (nonatomic, readonly) NSDictionary *entitiesAndCounts;
@property (nonatomic, readonly) NSSQLModel *model;

- (void)dealloc;
- (id)entitiesAndCounts;
- (void)executeRequestCore:(id*)arg1;
- (id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)model;

@end
