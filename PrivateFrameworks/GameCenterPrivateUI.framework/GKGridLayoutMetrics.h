/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKGridLayoutMetrics : NSObject <NSCopying> {
    NSMutableDictionary * _keyToMetrics;
    NSString * _layoutKey;
    NSMutableDictionary * _locationToKeyList;
}

@property (nonatomic, retain) NSMutableDictionary *keyToMetrics;
@property (nonatomic, retain) NSString *layoutKey;
@property (nonatomic, retain) NSMutableDictionary *locationToKeyList;

+ (id)metrics;

- (id)_gkDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)addSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3;
- (void)configureCollectionView:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateSupplementaryLocations:(id /* block */)arg1;
- (void)enumerateSupplementaryMetricsUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)insertSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3;
- (id)keyListForLocation:(unsigned long long)arg1;
- (id)keyToMetrics;
- (id)layoutKey;
- (id)listForLocation:(unsigned long long)arg1;
- (id)localDescription;
- (id)locationToKeyList;
- (void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)arg1 atLocation:(unsigned long long)arg2 globalRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (long long)prepareLayout:(id)arg1 startingAtSection:(long long)arg2;
- (void)removeSupplementaryMetricsForKey:(id)arg1;
- (void)replaceSupplementaryMetrics:(id)arg1 forKey:(id)arg2;
- (void)setKeyToMetrics:(id)arg1;
- (void)setLayoutKey:(id)arg1;
- (void)setLocationToKeyList:(id)arg1;
- (id)supplementaryMetricsForKey:(id)arg1;

@end
