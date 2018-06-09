/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsUniqueIdentifierDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
- (id)initWithType:(unsigned long long)arg1;

@end
