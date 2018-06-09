/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDCachedPeopleSuggestion : NSObject {
    _CDPeopleSuggesterContext * _context;
    NSDate * _date;
    _CDPeopleSuggesterSettings * _settings;
    NSArray * _suggestions;
}

@property (retain) _CDPeopleSuggesterContext *context;
@property (retain) NSDate *date;
@property (retain) _CDPeopleSuggesterSettings *settings;
@property (retain) NSArray *suggestions;

- (void).cxx_destruct;
- (id)context;
- (id)date;
- (bool)isValidForContext:(id)arg1;
- (bool)isValidForContext:(id)arg1 settings:(id)arg2 timeoutSeconds:(double)arg3;
- (bool)isValidForSettings:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)settings;
- (id)suggestions;

@end
