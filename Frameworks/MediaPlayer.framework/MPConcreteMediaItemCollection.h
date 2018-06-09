/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <MPCacheableConcreteMediaEntity, NSCoding, NSCopying> {
    long long  _grouping;
    long long  _identifier;
    MPMediaQuery * _itemsQuery;
    MPConcreteMediaEntityPropertiesCache * _propertiesCache;
    MPMediaItem * _representativeItem;
}

@property (nonatomic, readonly, retain) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)arg1;
- (id)_initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 propertiesCache:(id)arg6;
- (id)cachedPropertyValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (long long)groupingType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 itemsQuery:(id)arg2 grouping:(long long)arg3;
- (id)initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (void)invalidateCachedProperties;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsQuery;
- (id)mediaLibrary;
- (unsigned long long)persistentID;
- (id)representativeItem;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
