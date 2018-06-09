/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLScopeChange : CPLRecordChange <NSCopying, NSSecureCoding> {
    NSData * _accountFlagsData;
    NSDictionary * _assetCountPerType;
    NSDate * _deleteDate;
    bool  _disabled;
    NSDate * _disabledDate;
    unsigned long long  _pullTaskItem;
    CPLEngineScope * _scope;
    long long  _scopeType;
}

@property (nonatomic, copy) NSData *accountFlagsData;
@property (nonatomic, copy) NSDictionary *assetCountPerType;
@property (nonatomic, retain) NSDate *deleteDate;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) NSDate *disabledDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long pullTaskItem;
@property (nonatomic, copy) NSDate *recordModificationDate;
@property (nonatomic, retain) CPLEngineScope *scope;
@property (nonatomic) long long scopeType;
@property (nonatomic, copy) CPLScopedIdentifier *scopedIdentifier;

+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (long long)defaultFlagsForScopeType:(long long)arg1;
+ (id)descriptionForScopeType:(long long)arg1;
+ (id)mappingForScopeTypeDescription;
+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (Class)scopeChangeClassForType:(long long)arg1;
+ (bool)shouldAutoActivateScopeWithType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_scopedIdentifier;
- (void)_setChangeType:(unsigned long long)arg1;
- (void)_setupWithLibraryInfo:(id)arg1;
- (void)_setupWithLibraryState:(id)arg1;
- (id)accountFlags;
- (id)accountFlagsData;
- (id)assetCountPerType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteDate;
- (id)description;
- (id)disabledDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2 libraryInfo:(id)arg3 state:(id)arg4;
- (bool)isDisabled;
- (unsigned long long)pullTaskItem;
- (id)scope;
- (id)scopeIdentifier;
- (long long)scopeType;
- (void)setAccountFlagsData:(id)arg1;
- (void)setAssetCountPerType:(id)arg1;
- (void)setDeleteDate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisabledDate:(id)arg1;
- (void)setPullTaskItem:(unsigned long long)arg1;
- (void)setScope:(id)arg1;
- (void)setScopeType:(long long)arg1;

@end
