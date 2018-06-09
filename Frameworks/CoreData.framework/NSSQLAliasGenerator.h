/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLAliasGenerator : NSObject {
    unsigned int  _nextTableAlias;
    unsigned int  _nextTempTableAlias;
    unsigned int  _nextVariableAlias;
    NSString * _tableBase;
    NSString * _variableBase;
}

- (void)dealloc;
- (id)generateSubqueryVariableAlias;
- (id)generateTableAlias;
- (id)generateTempTableName;
- (id)generateVariableAlias;
- (id)init;
- (id)initWithNestingLevel:(unsigned int)arg1;

@end
