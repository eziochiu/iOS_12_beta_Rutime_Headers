/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsBlockDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    id /* block */  _block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)deduperWithBlock:(id /* block */)arg1;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
- (id)initWithBlock:(id /* block */)arg1;

@end
