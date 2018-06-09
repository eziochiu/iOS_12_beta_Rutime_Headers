/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEReferenceParsingContext : NSObject <NSCopying> {
    TSCEAbortObject * _abortObject;
    <TSCEReferenceResolving> * _contextResolver;
    NSString * _contextSheetName;
    bool  _filterColons;
    bool  _namesUsed;
    bool  _referenceIsComplete;
    NSMutableArray * _referencesMatchingInputAsPrefix;
    NSString * _rest;
    NSString * _sheetName;
    NSString * _sheetNameUnquoted;
    unsigned char  _stickyBits;
    NSString * _tableName;
    NSString * _tableNameUnquoted;
    bool  _trimNames;
}

@property (nonatomic, retain) TSCEAbortObject *abortObject;
@property (nonatomic, retain) <TSCEReferenceResolving> *contextResolver;
@property (nonatomic, retain) NSString *contextSheetName;
@property (nonatomic) bool filterColons;
@property (nonatomic) bool namesUsed;
@property (nonatomic) bool referenceIsComplete;
@property (nonatomic, retain) NSMutableArray *referencesMatchingInputAsPrefix;
@property (nonatomic, retain) NSString *rest;
@property (nonatomic, retain) NSString *sheetName;
@property (nonatomic, retain) NSString *sheetNameUnquoted;
@property (nonatomic) unsigned char stickyBits;
@property (nonatomic, retain) NSString *tableName;
@property (nonatomic, retain) NSString *tableNameUnquoted;
@property (nonatomic) bool trimNames;

- (void).cxx_destruct;
- (id)abortObject;
- (id)contextResolver;
- (id)contextSheetName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)filterColons;
- (id)initWithContextResolver:(id)arg1;
- (bool)namesUsed;
- (bool)referenceIsComplete;
- (id)referencesMatchingInputAsPrefix;
- (void)reset;
- (id)rest;
- (void)setAbortObject:(id)arg1;
- (void)setContextResolver:(id)arg1;
- (void)setContextSheetName:(id)arg1;
- (void)setFilterColons:(bool)arg1;
- (void)setNamesUsed:(bool)arg1;
- (void)setReferenceIsComplete:(bool)arg1;
- (void)setReferencesMatchingInputAsPrefix:(id)arg1;
- (void)setRest:(id)arg1;
- (void)setSheetName:(id)arg1;
- (void)setSheetNameUnquoted:(id)arg1;
- (void)setStickyBits:(unsigned char)arg1;
- (void)setTableName:(id)arg1;
- (void)setTableNameUnquoted:(id)arg1;
- (void)setTrimNames:(bool)arg1;
- (id)sheetName;
- (id)sheetNameUnquoted;
- (unsigned char)stickyBits;
- (id)tableName;
- (id)tableNameUnquoted;
- (bool)trimNames;

@end
