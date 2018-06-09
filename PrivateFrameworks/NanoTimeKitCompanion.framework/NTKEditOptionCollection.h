/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKEditOptionCollection : NSObject {
    unsigned long long  _collectionType;
    NSString * _localizedName;
    long long  _mode;
    NSArray * _options;
}

@property (nonatomic) unsigned long long collectionType;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic) long long mode;
@property (nonatomic, copy) NSArray *options;
@property (nonatomic, readonly) NSString *optionsDescription;
@property (nonatomic, readonly) long long swatchStyle;

+ (id)editOptionCollectionWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;

- (void).cxx_destruct;
- (unsigned long long)collectionType;
- (id)filteredCollectionForOSVersion:(unsigned int)arg1;
- (id)filteredCollectionWithObjectsPassingTest:(id /* block */)arg1;
- (id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (long long)mode;
- (id)options;
- (id)optionsDescription;
- (void)setCollectionType:(unsigned long long)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setOptions:(id)arg1;
- (long long)swatchStyle;

@end
