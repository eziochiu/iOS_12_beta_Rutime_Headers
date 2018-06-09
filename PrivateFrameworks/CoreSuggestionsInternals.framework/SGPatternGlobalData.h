/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPatternGlobalData : NSObject {
    NSArray * currentLanguages;
    int  globalLanguageVersion;
    SGPatternDataFile * patternData;
    NSDictionary * patternDict;
    NSHashTable * patternInstances;
    NSMutableSet * regexesImmuneToDeath;
    NSTimer * reinstateDeathTimer;
    bool  useAllLanguages;
}

- (void).cxx_destruct;

@end
