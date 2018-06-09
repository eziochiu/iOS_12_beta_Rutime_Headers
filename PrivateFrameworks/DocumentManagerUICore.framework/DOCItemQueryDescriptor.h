/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCItemQueryDescriptor : NSObject {
    NSFileProviderEnumerationProperties * _properties;
    CSSearchQuery * _searchQuery;
}

@property (nonatomic, readonly) NSFileProviderEnumerationProperties *properties;
@property (readonly) CSSearchQuery *searchQuery;

- (void).cxx_destruct;
- (id)additionalAttributes;
- (void)augmentQueryContext:(id)arg1;
- (double)coalescenceTime;
- (void)flushQuery;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemQueryDescriptor:(id)arg1;
- (bool)itemIsSufficient:(id)arg1;
- (unsigned long long)maxCount;
- (id)properties;
- (id)queryString;
- (bool)requiresFastUpdates;
- (id)searchQuery;

@end