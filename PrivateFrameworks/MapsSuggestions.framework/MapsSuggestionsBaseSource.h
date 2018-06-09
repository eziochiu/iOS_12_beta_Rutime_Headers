/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource> {
    <MapsSuggestionsSourceDelegate> * _delegate;
    struct NSString { Class x1; } * _uniqueName;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (unsigned long long)addOrUpdateMySuggestionEntries:(struct NSArray { Class x1; }*)arg1 deleteMissing:(bool)arg2;
- (bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (id)currentBestLocation;
- (id)delegate;
- (unsigned long long)deleteMyEntries:(struct NSArray { Class x1; }*)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 name:(struct NSString { Class x1; }*)arg2;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (struct NSString { Class x1; }*)uniqueName;
- (double)updateSuggestionEntries;

@end
