/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsBaseTitleFormatter : NSObject <MapsSuggestionsTitleFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (bool)formatTitlesForEntry:(id)arg1 distance:(double)arg2 trafficString:(id)arg3;
- (bool)formatTitlesForEntry:(id)arg1 eta:(id)arg2;
- (bool)resetTitlesForEntry:(id)arg1;
- (struct NSString { Class x1; }*)uniqueName;
- (bool)updateChangedTitlesForEntry:(id)arg1 title:(id)arg2 subtitle:(id)arg3 includeLockedVersions:(bool)arg4;

@end
