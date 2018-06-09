/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLKeypathTriggerAttributeExtension : NSObject <NSSQLAttributeExtension> {
    NSSQLAttribute * _attribute;
    NSArray * _bulkUpdateSQLStrings;
    NSSQLRelationship * _countedRelationship;
    NSArray * _dropSQLStrings;
    NSSQLEntity * _entity;
    NSArray * _insertSQLStrings;
    NSString * _keypath;
    id  _objectFromUserInfo;
}

@property (nonatomic, readonly) NSSQLAttribute *attribute;
@property (nonatomic, readonly) NSArray *bulkUpdateSQLStrings;
@property (nonatomic, readonly) NSSQLRelationship *countedRelationship;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *dropSQLStrings;
@property (nonatomic, readonly) NSSQLEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *insertSQLStrings;
@property (nonatomic, readonly) NSString *keypath;
@property (nonatomic, readonly) id objectFromUserInfo;
@property (readonly) Class superclass;

- (id)attribute;
- (id)bulkUpdateSQLStrings;
- (id)countedRelationship;
- (void)dealloc;
- (id)description;
- (id)dropSQLStrings;
- (id)entity;
- (void)generateSQLStrings;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
- (id)insertSQLStrings;
- (bool)isEqualToExtension:(id)arg1;
- (id)keypath;
- (id)objectFromUserInfo;
- (bool)validate:(id*)arg1;
- (bool)validateAttribute:(id*)arg1;
- (bool)validateExpression:(id)arg1 error:(id*)arg2;
- (bool)validateKeypath:(id*)arg1;

@end
