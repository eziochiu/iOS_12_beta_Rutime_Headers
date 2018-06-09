/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteIndexDescription : NSObject <NSCopying> {
    NSArray * _columnNames;
    NSString * _name;
    unsigned long long  _options;
    NSString * _tableName;
}

@property (nonatomic, readonly, copy) NSArray *columnNames;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)columnNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 tableName:(id)arg2 columnNames:(id)arg3 options:(unsigned long long)arg4;
- (id)name;
- (unsigned long long)options;
- (id)tableName;

@end
