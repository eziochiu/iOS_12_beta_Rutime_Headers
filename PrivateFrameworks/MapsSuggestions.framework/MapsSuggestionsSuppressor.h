/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject> {
    struct NSMutableDictionary { Class x1; } * _suppressionEntries;
    NSString * _suppressionEntriesFilePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)defaultFilePath;

- (void).cxx_destruct;
- (void)_deleteSuppressedEntriesFile;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (bool)isSuppressedEntry:(id)arg1;
- (bool)loadSuppressedEntries;
- (void)purge;
- (bool)saveSuppressedEntries;
- (bool)suppressEntry:(id)arg1 forTime:(double)arg2;
- (struct NSString { Class x1; }*)uniqueName;

@end
