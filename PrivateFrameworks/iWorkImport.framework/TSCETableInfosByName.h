/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCETableInfosByName : NSObject <NSCopying> {
    TSCECalculationEngine * _calcEngine;
    NSMutableDictionary * _tableInfosByTableNameByContainerName;
}

+ (id)containerNameForTableInfo:(id)arg1;
+ (id)tableNameForTableInfo:(id)arg1;

- (void).cxx_destruct;
- (void)addTableInfo:(id)arg1;
- (id)anyTableInfoForTableName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dropTableInfo:(id)arg1;
- (void)dropTableInfo:(id)arg1 withTableName:(id)arg2 withContainerName:(id)arg3;
- (id)initWithCalcEngine:(id)arg1;
- (void)removeAllObjects;
- (void)renameTableInfo:(id)arg1 fromName:(id)arg2;
- (id)resolverMatchingName:(id)arg1;
- (bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)tableInfoForTableName:(id)arg1 containerName:(id)arg2;

@end
