/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INLocationRelevanceProvider : INRelevanceProvider {
    CLRegion * _region;
}

@property (nonatomic, readonly, copy) CLRegion *region;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)region;

@end
